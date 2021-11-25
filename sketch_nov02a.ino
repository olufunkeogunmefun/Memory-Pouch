//#include <Servo.h>
//Servo servo;
//int servoPin = 9;
//int servoPos= 0;
//bool on = false;

//DEFINE YOUR PINS
int ledPin = 3;
int buttonPin = A3;
int buttonPin2 = A5;

int ledPin2 = 4;
int ledPin3 = 5;
int ledPin4 = 6;

bool on = true;
bool on2 = true;

void setup() {
  // put your setup code here, to run once:
  //serial is a connection with your pc, mostly for debugging
  //the number is connection speed, here i'm using 9600 band. They're pre-defined.
  Serial.begin(9600);

  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);

  //servo.attach(servoPin);
  //servo.write(servoPos);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);

  //Analog reads a range,
  //Serial.print("read: ");
  Serial.print("NewRead: ");
  Serial.println(analogRead(buttonPin));
  Serial.print("NewRead2: ");
  Serial.println(analogRead(buttonPin2));

  if(analogRead(buttonPin) > 1000){
    on = false;
    
    //if on write HIGH, else write LOW
    digitalWrite(ledPin, LOW);
  }
  else{
    on = true;
    digitalWrite(ledPin, HIGH);
  }

   if(analogRead(buttonPin2) > 1000){
    on2 = false;
    
    //if on write HIGH, else write LOW
    digitalWrite(ledPin3, LOW);
  }
  else{
    on2 = true;
    digitalWrite(ledPin3, HIGH);
  }
  
  //Serial.println(on);
    
  /*
  on = !on;
  digitalWrite(ledPin, on ? HIGH : LOW);
  
  if(on){
    servo.write(servoPos);
  }
  if(servoPos == 0){
    servoPos = 90;
  }
  else{
    servoPos = 0;
  }*/

}
