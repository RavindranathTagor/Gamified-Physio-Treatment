# Gamified-Physio-Treatment
# 2D Car Game with Tilt Controls

A Unity-based 2D car game that utilizes an ESP8266 and MPU6050 sensor for tilt-based controls.

## Table of Contents

- [Description](#description)

- [Getting Started](#getting-started)
- [Installation](#installation)
- [Usage](#usage)
- [Controls](#controls)
- [Features](#features)
- [Technologies Used](#technologies-used)
- [Contributing](#contributing)
- [License](#license)

## Description

The 2D Car Game with Tilt Controls is a project that combines physical motion sensing with gaming. Players can control a car within the game by physically tilting the hardware, thanks to the integration of an ESP8266 microcontroller and an MPU6050 accelerometer-gyroscope sensor.



## Getting Started

To play the 2D Car Game with Tilt Controls, follow these steps:

1. Set up the hardware components, including the ESP8266 and MPU6050.
2. Flash the ESP8266 with the provided firmware (See [Installation](#installation)).
3. Run the Unity game on your computer.

## Installation

### ESP8266 Firmware

1. Open the Arduino IDE.
2. Load the provided ESP8266 firmware (`esp8266_game_control.ino`) from the `firmware` folder.
3. Modify the WiFi credentials (`ssid` and `password`) and server IP address in the code.
4. Upload the firmware to your ESP8266.

## Usage

1. Power on the hardware setup.
2. Connect the ESP8266 to your WiFi network.
3. Start the Unity game on your computer.
4. Tilt the hardware to control the car's movement within the game.
5. Enjoy the immersive and interactive gaming experience!

## Controls

- Tilt the hardware to the right to steer the car right.
- Tilt the hardware to the left to steer the car left.

## Features

- Tilt-based controls using ESP8266 and MPU6050 sensor.
- Real-time interaction between hardware and Unity game.
- 2D car game environment with dynamic physics and obstacles.

## Technologies Used

- Unity Game Engine
- C# Programming Language
- ESP8266 Microcontroller
- MPU6050 Accelerometer-Gyroscope Sensor
- Arduino IDE

## Contributing

Contributions to this project are welcome! If you'd like to contribute, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature/fix.
3. Make your changes and test thoroughly.
4. Create a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

- [Unity Documentation](https://docs.unity.com/)
- [ESP8266WiFi Library](https://github.com/esp8266/Arduino)
- [MPU6050 Library](https://github.com/jrowberg/i2cdevlib/tree/master/Arduino/MPU6050)

## Contact

For questions or inquiries, please contact [rtravindra10@gmail.com].
