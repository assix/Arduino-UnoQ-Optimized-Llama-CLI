/*
  Uno Q Dual-Brain Bridge Trigger
  Sends a signal from the STM32 (MCU) to the Qualcomm (MPU) 
  to trigger local LLM inference.
*/

#include <Arduino_Bridge.h>

void setup() {
  Bridge.begin();
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Example: Trigger every 30 seconds
  // In a real scenario, this would be a sensor spike or button press
  if (millis() % 30000 == 0) {
    digitalWrite(LED_BUILTIN, HIGH);
    
    // Send trigger to Linux MPU
    Bridge.printf("{\"event\": \"inference_request\", \"prompt_type\": \"general\"}");
    
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
  }
}
