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

##### Ultrasonic Sensor

First, we will zero out the ultrasonic sensor readings by taking the average of 100 values to get what the sensor reads when there is nothing in front of the sensor.

We create a function called `read_ultra` that averages 10 readings in quick succession from `pulseIn` to get the time it takes to read the reflected sound waves. The returned value of `read_ultra` is constrained between 0 and the average when the sound wave is not reflected using `constrain`.

The time obtained from the ultrasonic sensor will be used to calculate the distance the hand is from the car by multiplying the time by the speed of sound and diving the product by 2.

##### PID

The PID controller takes the error, which is the difference between the calculated distance and a specified target distance we want to car to be away from the hand and  

## Demo

Link to the demo: https://drive.google.com/file/d/1bsNgrWB2eWAD8N-TM2sFoxs8wXEFVv8U/view?usp=sharing.

## Image References

Images were sourced from the [OPS](https://openproject.space/projects/) website.
