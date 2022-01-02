#include "sensorKit.h"

sensorKit sensorKit1(A1);
int sensor = A0;
unsigned int currenttime = 0;
unsigned int duration = 60000;

void setup() {
  pinMode(sensor, INPUT);
  currenttime = millis();
} 

double sr, sr_mean, sr_sd, sr_median;


void loop() {
  
  if(millis() - currenttime <= duration);
  else{
    sr = analogRead(sensor);
    sr_mean = sensorKit1.mean(sr);
    sr_sd   = sensorKit1.standard_deviation(sr);
    sr_median = sensorKit1.median(sr);
    Serial.println("mean = " + String(sr_mean));
    Serial.println("Standard Deviation = " + String(sr_sd));
    Serial.println("Median = " + String(sr_median));
    currenttime = millis();
  }
  
}