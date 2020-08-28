// This Software comes as is and it to provide an example of implementing with an arduino nano.
// You can change the pin as needed for the boards that you are using


#define POWERIO 12; // We are using pin 12 arbitrarily, it could be any pin.
#define DATAIN A0; // We are taking some data in through an analog pin
#define DATAOUT A1; // Passing the data out to some other device

void setup() {
  pinMode(POWERIO, OUTPUT); // Make sure to set the pin mode to output since we are controlling the power switch with the MCU
  pinMode(DATAIN, INPUT);
  pinMode(DATAOUT, OUTPUT);
}

void main() {
  if (DATAIN > 0) {
    digitalWrite(POWERIO, HIGH); // When data is passed into the DATAIN pin we will turn on the power switch
    wait(100);
    analogWrite(DATAOUT, DATAIN);
  } else {
    digitalWrite(POWERIO, LOW); // otherwise, let's keep power off.
  }
}
