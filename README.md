# arduino-delivery-container

This repo contains code reffed to in the post [Using Docker, Drone.io and Ino to build a HIL Pipeline](https://goraft.tech/2020/08/17/continue-exploring-hil.html) which is part of [raft](https://goraft.tech) Hardware in the Loop exploration. The code will build a container that is able to build and deliver code to an [Arduino](https://www.arduino.cc/) device using [Ino](http://inotool.org/). Pre built containers are available on [Raft's DockerHub](https://hub.docker.com/orgs/rafttech/repositories).

## Getting Started

The TL;DR:
```sh
git clone https://github.com/raft-tech/arduino-delivery-container.git
cd arduino-delivery-container/
docker build -t arduino-delivery-container .
docker run -it --device=/dev/ttyACM0 -e INO_FILENAME=/app/inos/one_led.ino arduino-delivery-container
```

## Make it your own

Ultimately, you will want the arduino-delivery-container to deliver you code to the device. To do so, you will wan to have your `.ino` files in the `src` folder of this repo **before** building the container. After that, you will be able to build and run the container. For exmaple, let's say you want to deploy `myIno.ino` to target Arduino device.

```sh
docker build -t arduino-delivery-container .
docker run -it --device=/dev/ttyACM0 -e INO_FILENAME=/app/inos/myIno.ino arduino-delivery-container
```

## Contributing

We welcome any contribution in form of a Pull Request made to this repo. Make sure that the PR includes information about why the change(s) are purposed and/or any `how-to` that are needed to test your PR prior to approving and merging into master.

## Authors

- [Barak Stout](https://github.com/BarakStout) - _initial wrok_

## License
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT)
