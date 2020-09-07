const int D12 = 12; // Set out control pin
int sw = HIGH; // our control signal pin

void setup() {
  // put your setup code here, to run once:
  pinMode(D12, OUTPUT); // initiate our output pin as an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
  /**
   * use the if statement here to toggle between a high (1) signal
   * and a low (0) signal. High signals turn the load switch on.
   * Low signals turn the load switch off.
   */
  if (sw == HIGH) {
    sw = LOW; // turn the load switch off
  } else {
    sw = HIGH; // turn the load switch on
  }
  digitalWrite(D12, sw); // write the control signal value to the control pin
  delay(1000); // wait for 1000 milliseconds or 1 second.
}
