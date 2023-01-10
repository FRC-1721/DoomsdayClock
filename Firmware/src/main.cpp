/**
 * @file main.cpp
 * @author Joe
 * @brief Source code for Tidal Force's "Doomsday clock", a large clock to
 * countdown to "Doomsday".
 */

// Libs
#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <WiFiManager.h>

// Wifi
WiFiManager wifiManager;

// Headers
#include "boardPins.h"

// Libs
#include "display.h"

// Objects
Display daySeg(3, LATCH_PIN, CLOCK_PIN, DATA_PIN);
Display hourSeg(2, LATCH_PIN, CLOCK_PIN, DATA_PIN);
Display minSeg(2, LATCH_PIN, CLOCK_PIN, DATA_PIN);
Display secSeg(2, LATCH_PIN, CLOCK_PIN, DATA_PIN);
Display displayOrder[4] = {daySeg, hourSeg, minSeg, secSeg};

void setup()
{
    // Setup serial
    delay(200);
    Serial.begin(115200);
    Serial.println(MOTD);

    // Pins
    pinMode(STAT_LED, OUTPUT);
    pinMode(LATCH_PIN, OUTPUT);
    pinMode(CLOCK_PIN, OUTPUT);
    pinMode(DATA_PIN, OUTPUT);

    // Setup wifi
    wifiManager.autoConnect("Doomsday-Counter"); // Hot Spot SSID
}

void loop()
{
    delay(2000);
}
