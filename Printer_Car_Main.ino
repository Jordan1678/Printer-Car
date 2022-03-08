// By Jordan1678
// Printer Racer
// Github: https://github.com/Jordan1678/Printer-Car


//define the pins
#define LeftMotor 13
#define RightMotor 12
#define Buzzer 11
#define Button 10

// define an int to read the button 
int ReadButton;

// define a bool to turn on and off motors
boolean MotorOn = false;

void setup() {
  // setting pin modes to OUTPUT or INPUT where needed
  pinMode(LeftMotor, OUTPUT);
  pinMode(RightMotor, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(Button, INPUT);

  // starts the serial outputs for debuging
  Serial.begin(9600);

}

void loop() {
  // reads input from button pin
  ReadButton = digitalRead(Button);

  // takes a the input from button pin checks if its HIGH
  // and if so it will turn motors on if not it will turn them off
  if (ReadButton == HIGH) {
    MotorOn = true;

  } else {
    MotorOn = false;

  }

  if (MotorOn) {
    digitalWrite(LeftMotor, HIGH);
    digitalWrite(LeftMotor, HIGH);

  } else {
    digitalWrite(LeftMotor, LOW);
    digitalWrite(LeftMotor, LOW);

  }

}
