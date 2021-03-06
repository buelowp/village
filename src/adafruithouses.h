#pragma once

#include <Particle.h>

#include <neopixel.h>
#include "houses.h"

class AdafruitHouses : public Houses {
public:
    AdafruitHouses(int, int);
    ~AdafruitHouses();

    void turnOn() override;
    bool turnOn(int) override;
    bool turnOn(int, uint8_t) override;
    void turnOff() override;
    bool turnOff(int) override;
    bool isOn(int) override;
    void setColors(uint8_t r, uint8_t g, uint8_t b) override;
    void setColor(uint8_t pin, uint8_t r, uint8_t g, uint8_t b) override;
    void setColors(uint8_t r, uint8_t g, uint8_t b, uint8_t w) override;
    void setColor(uint8_t pin, uint8_t r, uint8_t g, uint8_t b, uint8_t w) override;
    bool isRGBWCapable() override { return true; }
    bool allOn();

private:
    Adafruit_NeoPixel *m_houses;
    int m_leds;
};
