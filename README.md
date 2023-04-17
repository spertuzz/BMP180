
# BAROMETER ( BOSCH )

This project uses a BMP180 sensor, a D1-Mini microcontroller, a 0.66" OLED display, and a Tripler adapter. The BMP180 sensor measures temperature, pressure, and altitude, while the D1-Mini microcontroller processes the sensor output and displays the weather data on the OLED display.

## Components Used
- BMP180 sensor
- D1-Mini microcontroller
- 0.66" OLED display
- Tripler adapter (to mount the components)

## Features
Measures temperature, pressure, and altitude using a BMP180 sensor

Displays weather data on a 0.66" OLED display

Configurable altitude settings for accurate pressure measurements

- Low power consumption
Can be used as a standalone weather station or integrated into other projects

## Installation and Setup
Assemble the BMP180 sensor, D1-Mini microcontroller, and 0.66" OLED display on the Tripler adapter as per the provided circuit diagram.

Connect the D1-Mini microcontroller to your computer using a USB cable.

Install the required libraries for the D1-Mini microcontroller, BMP180 sensor, and OLED display, if not already installed.

Upload the provided source code to the D1-Mini microcontroller using the Arduino IDE or any other suitable programming environment.

Disconnect the D1-Mini microcontroller from the computer and power it using an external power source (e.g., USB power bank or DC power supply).

Adjust the altitude settings in the source code to your location for accurate pressure measurements.

The OLED display will show the weather data (e.g., temperature, pressure, and altitude) based on the sensor output.

## Usage
The BMP180 will continuously measure and display the temperature, pressure, and altitude on the OLED display.

You can customize the altitude settings in the source code to your location for accurate pressure measurements.

You can integrate this weather station into your own projects, such as home automation systems, weather monitoring systems, or other IoT applications.

## Troubleshooting
For any help and support, reach out to infor@carenuity.com

## License
This project is released under the MIT License which allows for free use, modification, and distribution, but comes with no warranty or liability.
