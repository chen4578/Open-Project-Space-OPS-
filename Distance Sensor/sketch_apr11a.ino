#define RECEIVER A5
#define LED 6
long zero;
void setup() {
  pinMode(RECEIVER, INPUT);
  zero = 0;
  for(int i = 0; i < 100; i++)
  {
    zero = zero + analogRead(RECEIVER);
  }
  zero = zero/100;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(RECEIVER);

  //Serial.println(value);

  int  new_reading = constrain(value, 0, zero);

  Serial.println(new_reading);

  int mapped_value=map(new_reading,0,zero,0,255);

  analogWrite(LED, 255-mapped_value);
  delay(500);
}
