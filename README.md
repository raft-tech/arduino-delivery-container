# arduino-delivery-container

```sh
git clone https://github.com/raft-tech/arduino-delivery-container.git
cd arduino-delivery-container/
docker build -t arduino-delivery-container .
docker run -it --device=/dev/ttyACM0 -e INO_FILENAME=/app/inos/one_led.ino arduino-delivery-container
