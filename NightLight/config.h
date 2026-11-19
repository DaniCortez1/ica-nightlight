// config.h - pins and settings shared by every file in the sketch.
// Tip: put your new setting inside YOUR OWN section so that teammates'
// edits do not collide with yours.

#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>

// ---------- Wiring ----------
#define LED_PIN           9     // must be a PWM pin (marked with ~)
#define BUTTON_PIN        2
#define LIGHT_SENSOR_PIN  A0

// ---------- Modes ----------
enum Mode { MODE_OFF, MODE_AUTO, MODE_ON };

// ---------- Light sensor settings (Task 1, Developer A) ----------
// TODO Task 1: add SENSOR_SAMPLES here

// ---------- LED settings (Task 2, Developer B) ----------
// TODO Task 2: add FADE_STEP here

// ---------- Button settings (Task 3, Developer C) ----------
// TODO Task 3: add BUTTON_DEBOUNCE_MS here

// ---------- Logger settings (Task 4, Project Manager) ----------
// TODO Task 4: add LOG_INTERVAL_MS here

// ---------- Night light behavior (shared by everyone) ----------
#define DARK_THRESHOLD    500   // light readings below this mean "dark"
#define NIGHT_BRIGHTNESS  120   // LED brightness (0-255) when it is dark
#define LOOP_DELAY_MS     20

#endif
