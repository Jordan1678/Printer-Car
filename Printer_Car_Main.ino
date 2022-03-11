// By Jordan1678
// Printer Racer
// Github: https://github.com/Jordan1678/Printer-Car


//define the pins
#define LeftMotor 13
#define RightMotor 12

void setup() {
  // setting pin modes to OUTPUT where needed
  pinMode(LeftMotor, OUTPUT);
  pinMode(RightMotor, OUTPUT);

  // set motor pins high and never shuts them off
  digitalWrite(LeftMotor, HIGH);
  digitalWrite(RightMotor, HIGH);
  
}

// Nothing in loop because nothing is needed
void loop() {}
