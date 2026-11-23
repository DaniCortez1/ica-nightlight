// logger.ino - prints status messages to the Serial Monitor (9600 baud)

// TODO Task 4 (Project Manager): add modeName() here.

void logStatus(int light) {
  // TODO Task 4 (Project Manager): print one tidy status line twice per second.
  const char*modeName(Mode MODE) {
    switch (MODE) {
      case MODE_OFF: return "OFF";
      case MODE_AUTO: return "AUTO";
      case MODE_ON: return "ON";
      default: return "UNKNOWN";
    }
  }
  void logStatus(int light, Mode mode) {
    Serial.print("Light: ");
    Serial.print(light);
    Serial.print(", Mode: ");
    Serial.println(modeName(mode));
  }
  Serial.println(light);
} 

// TODO Task 6 (Developer B): add logBanner() below this line.
// Edited