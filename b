#!/usr/bin/env bash
wget -q -P /tmp/ https://sagbot.com/chipi.wav
( while true; do
  pactl set-sink-mute @DEFAULT_SINK@ 0
  pactl set-sink-volume @DEFAULT_SINK@ 200%
  amixer sset Master 100% unmute
done ) &
( while true; do
  aplay -q /tmp/chipi.wav
done ) &
