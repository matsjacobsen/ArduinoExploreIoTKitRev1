Hi dette er Hafrun
/*
Author      : Teeraphat Kullanankanjana
Version     : 1.0
Date        : 17/07/2023
Description : Template file for using MKR IoT Carrier
Copyright (C) 2023 Teeraphat Kullanankanjana. All right reserved.
*/

// Include the Arduino MKR IoT Carrier header file (Library)
#include <Arduino_MKRIoTCarrier.h>

// Create an instance of the MKRIoTCarrier class
MKRIoTCarrier carrier;

void setup() {
  // Initialize the Arduino MKR IoT Carrier
  carrier.begin();
  
  // Initialize the serial communication at 9600 baud rate
  Serial.begin(9600);
}
Serial.Print("Tuff tuff");

void loop() {
  // Your code goes here
}
