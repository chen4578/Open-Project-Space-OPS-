# Communication Protocols

## Introduction

In this project, we develop a tic-tac-toe game that utilizes a joystick controller and an OLED screen.

### Breadboard Setup

For the hardware portion, we need to wire the OLED display and the joystick. Since the OLED utilizes the I2C communication protocol, it uses the Serial Data (SDA) and Serial Clock (SCL) pins.

The joystick requires three pins to record the joystick's x-axis position, y-axis position, and the joystick button.

The image below shows the circuit diagram.

<p align="center">
  <img src="https://github.com/chen4578/Open-Project-Space-OPS-/blob/63bd06abb0d387d965559edf05609d85612c677c/assets/schematic.png" width="400">
</p>

### Programming

#### The Joystick

The first programming step in this project was to note the values of the joystick output when in the four cardinal directions, in addition to when the joystick is in the center. Knowing these values, we can define directions for specific values.

#### The OLED Display

The graphics for the game come from the following library: https://github.com/PrestonRooker/TicTacToeArduinoOLEDLibrary.

#### Determining the Winner

An array documents the players' moves. After each turn, we check whether a player has won. If a player has emerged as the victor, the OLED displays which player won.

## Demo

Link to the demo: https://drive.google.com/file/d/1BDFs_4fVz2LrmuyIbmQ1BQPbspYCloH1/view?usp=sharing.

## Image References

Images were sourced from the [OPS](https://openproject.space/projects/) website.
