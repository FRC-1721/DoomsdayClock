/**
 * @file main.cpp
 * @author Joe
 * @brief Source code for Tidal Force's "Doomsday clock", a large clock to
 * countdown to "Doomsday".
 */

// Libs
#include <Arduino.h>

// Headers
#include "boardPins.h"

// Libs
#include "display.h"

// Objects
Display display(3, LATCH_PIN, CLOCK_PIN, DATA_PIN);

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
}

void loop()
{
    delay(2000);
}
