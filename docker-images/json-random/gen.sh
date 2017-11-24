#!/bin/sh

i=0
while true; do echo "{\"id\": ${i}, \"word\": \"`cat /words.txt | shuf -n 1`\"}"; i=$((i+1)); sleep 1; done

