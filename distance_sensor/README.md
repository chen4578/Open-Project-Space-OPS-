# Distance Sensor

## Introduction

In this project, I built a distance sensor using a phototransistor and an infrared emitter. The LED's luminosity depends on how far an object is from the IR receiver and emitter.

## Project Specifications

### Breadboard Setup

The main aspect of the circuit arrangement that we should be aware of is keeping the IR receiver and emitter close together so that the receiver can adequately sense the infrared light. The intuition is provided in the following picture.

<p align="center">
  <img src="https://github.com/chen4578/Open-Project-Space-OPS-/blob/0b330478ea2ec10c97cb826fba8487cee165e960/assets/Screenshot%202025-09-30%20184233.png" width="400">
</p>

The schematic is provided below.

<p align="center">
  <img src="https://github.com/chen4578/Open-Project-Space-OPS-/blob/00a2dc64bffb77ab1def42925496dc5a38b4b3c6/assets/distance-sensor-2.png" width="400">
</p>

### Programming

First, we need to zero out the sensor reading due to ambient noise. This is achieved by averaging a sample of sensor readings. In our case, we will sample 100 times and find the average.

In our code, we will obtain the sensor values using `analogRead` and use `constrain` to set the minimum value to zero and the maximum value to the average we obtained before. Then, we use the `map` function to correspond the sensor readings to a number in the range of 0 to 255 to be inputted as arguments to change the LED's brightness. 

## Demo

https://github.com/user-attachments/assets/a54cc335-955b-4252-9b9b-af17d7f17536
