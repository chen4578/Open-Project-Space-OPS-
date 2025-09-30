#define VRX A0
#define VRY A1
#define SW 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(VRX, INPUT);
  pinMode(VRY, INPUT);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  double vrxValue = analogRead(VRX);
  double vryValue = analogRead(VRY);
  double swValue = digitalRead(SW);

/*
  Serial.print(vrxValue);
    Serial.print("\t"); //this prints a tab
    Serial.print("Y: ");
    Serial.print(vryValue);
    Serial.print("\t"); //this prints a tab
    Serial.print("SW: ");
    Serial.println(swValue); 
*/
  if(swValue == 0)
  {
    Serial.println("Pressed");
  }
  else if(vrxValue < 550 && vrxValue > 450 && vryValue > 450 && vryValue < 550)
  {
    if(swValue == 1)
    {
      Serial.println("Unpressed");
    }
  }
  else if(vrxValue == 0 && vryValue > 450 && vryValue < 550)
  {
    Serial.println("Left");
  }
  else if(vrxValue == 1023 && vryValue > 450 && vryValue < 550)
  {
    Serial.println("Right");
  }
  else if(vryValue == 0 && vrxValue < 550 && vrxValue > 450)
  {
    Serial.println("Up");
  }
  else if(vryValue == 1023 && vrxValue < 550 && vrxValue > 450)
  {
    Serial.println("Down");
  }
    

}
