//EN1, EN2 with PWM ---> speed
//IN1, IN2, IN3, IN4 --> direction
//(in1, in3) ==> backward
//(in2, in4) ==> forward


//* all you need to do is change these values to correspond to your setup*//
#define en1 3
#define en2 10
#define in1 2
#define in2 7
#define in3 4
#define in4 8
#define TRIG 12
#define ECHO 5

double dur, zero;
int target = 15;
int kp = 400;
int kd = 0;
int ki = 0;
int min_speed = 200;
long prev_time = 0;
int prev_error = 0;
int cum_error;
int change_in_error;

void setup() {
  // put your setup code here, to run once:
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

//sets motors to move forward
  digitalWrite(en1, HIGH);
  digitalWrite(en2, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in4, LOW);


  Serial.begin(9600);

  zero = 0;
  for (int i = 0; i < 100; i++){
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);
    zero += pulseIn(ECHO, HIGH);
    // Serial.println(zero);
    delay(10);
  }
  zero /= 100;
}

void loop() {
  
/*

  //int mapped_value=map(new_distance,0,zero,0,255);
  
*/



/*
  for(int i = 0; i <= 150; i++)
  {
    Serial.println(i);
    analogWrite(en1, i);
    analogWrite(en2, i);
    delay(100);
  }
  

    //deccelerate
    for(int i = 75; i >= 0; --i)
    {
      Serial.println(i);
      analogWrite(en1,i);
      analogWrite(en2,i);
      delay(100);
    }
  */
  prev_time = millis();
  int duration = read_ultra();
  int new_duration = constrain(duration, 0, zero);
  


  int distance = new_duration * .0343 / 2;
  
  Serial.println(distance);
/*
  if(distance > 15)
  { 
    analogWrite(en1, 255);
    analogWrite(en2, 255);
    Serial.println("on");
  }
  else
  {
    analogWrite(en1, 0);
    analogWrite(en2, 0);
    Serial.println("off");
  }
  */
  
  if (distance > 15)
  {
    digitalWrite(in1, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in2, HIGH);
  digitalWrite(in4, LOW);
  }
  else
  {
    digitalWrite(in1, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in4, HIGH);
  }

  int error = distance - target;
  change_in_error = error - prev_error;
  int pid_out = computePID(error);
  int out = min_speed + pid_out;

  digitalWrite(en1, constrain(out, 0, min_speed));
  digitalWrite(en2, constrain(out, 0, min_speed));
  
  
  prev_error = error;
  
}

double read_ultra(){
  double dur = 0;

  // average over 10 reads
  for (int i = 0; i < 10; i++){
    digitalWrite(TRIG, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG, LOW);
    dur += pulseIn(ECHO, HIGH);
  }
  dur /= 10;

  return dur;
}

double computePID(double error){
  long curr_time = millis();
  long diff_time = curr_time - prev_time;

  // update derivative error
  int rate_error =  change_in_error  / diff_time;
  // update integral error
  cum_error += error * diff_time;

  int out = kp*error + ki*cum_error + kd*rate_error;

  return out;
}
