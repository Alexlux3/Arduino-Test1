int firstLED = 10;
int secondLED = 8;
int thirdLED = 6; 

void setup() {
pinMode(firstLED, OUTPUT);
pinMode(secondLED, OUTPUT);
pinMode(thirdLED, OUTPUT);

  
}

void loop() {
digitalWrite(firstLED, HIGH);
delay(3000);
digitalWrite(firstLED, LOW);
delay(6000);
digitalWrite(secondLED, HIGH);
delay(3000);
digitalWrite(secondLED, LOW);
delay(6000);
digitalWrite(thirdLED, HIGH);
delay(3000);
digitalWrite(thirdLED, LOW);
delay(6000);
}
