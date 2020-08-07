#!/bin/sh

# Should
# set env:
# - device
# - filename
# build
# upload

# ${DEVICE_ADDRESS?"Need to set DEVICE_ADDRESS"}
[ -z "$INO_FILENAME" ] && { echo "Need to set INO_FILENAME"; exit 1; }

echo "building & uploading ${INO_FILENAME}"
cat $INO_FILENAME > "src/sketch.ino"
ino build
ino upload
