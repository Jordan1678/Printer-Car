// By Jordan1678
// Printer Racer
// Github: https://github.com/Jordan1678/Printer-Car


//define the pins
#define LeftMotor 13
#define RightMotor 12
#define Buzzer 11

void setup() {
  // setting pin modes to OUTPUT where needed
  pinMode(LeftMotor, OUTPUT);
  pinMode(RightMotor, OUTPUT);
  pinMode(Buzzer, OUTPUT);

  // set motor pins high and never shuts them off
  digitalWrite(LeftMotor, HIGH);
  digitalWrite(RightMotor, HIGH);
  
}

// tone is an internal command for buzzers to make music
// noTone stops all tones
void loop() {
  tone(Buzzer, 1000);
  delay(1000);
  noTone(Buzzer);
  delay(1000);
  
}
