# ESP32-Blink-LED
Basic LED blinking using ESP32
This is a basic project to blink an LED using ESP32.

## Features
- LED ON/OFF control
- 1-second interval blinking

## Components
- ESP32
- LED
- 220Ω Resistor

## Connections
- LED (+) → GPIO 4
- LED (–) → Resistor → GND

## Working
LED turns ON and OFF every 1 second continuously.

## Code
```cpp
int ledPin = 4;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}
