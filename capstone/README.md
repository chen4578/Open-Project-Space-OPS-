# Capstone Project

## Introduction

The capstone project involves building a battery-powered hand-following car. The controller we will be using is a proportional-integral-derivative (PID) controller so that the car can change its speed and direction depending on the distance the hand is from the car. The car measures distance via an ultrasonic sensor.

### Breadboard Setup

#### Motors

To control the car motors, we use a L293D IC (integrated circuit) chip. The pins on the chip are shown in the image below.

<p align="center">
  <img src="https://github.com/chen4578/Open-Project-Space-OPS-/blob/4a67021af31df274034921ef08d3dc453648e4ee/assets/L293D-input-output.png" width="400">
</p>

Pins 4, 5, 8, 12, 13, and 16 are for power supply. Pins 2, 7, 10, and 15 are for direction inputs. Speed input is managed by pins 1 and 9. Lastly, pins 3, 6, 11, and 14 shows what the IC has done.

We also needed to solder wires onto our motors.

The motors were powered using the computer's USB port. The final product funcations wirelessly using a 9V battery.

#### Programming

## Demo

https://github.com/chen4578/Open-Project-Space-OPS-/blob/1a0140d196924af0e808992f24383bf1f84483c8/assets/IMG_0337.MOV

## Image References

Images were sourced from the [OPS](https://openproject.space/projects/) website.
