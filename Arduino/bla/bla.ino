#include<Servo.h>
float current_pos1, current_pos2, current_pos3, current_pos4, current_pos5;
float target_pos1, target_pos2, target_pos3, target_pos4, target_pos5;
int p1, p2, p3, p4, p5;
float diff1, diff2, diff3, diff4, diff5;
float easing = 0.8;

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;

void setup() {
  s1.attach(5);
  s2.attach(6);
  s3.attach(9);
  s4.attach(10);
  s5.attach(11);
}

void loop()
{
  
  motor1();
  motor2();
  motor3();
  motor4();
  motor5();
  
}

void motor1(void)
{
  p1=analogRead(A0);
  p1=map(p1, 0,1023,0,1350);
  p1=2400-p1;
  target_pos1=(float)p1;
  diff1=target_pos1-current_pos1;
  if(diff1 !=0.00)
  {
    current_pos1+=diff1*easing;
     } else {
}
s1.writeMicroseconds((int)current_pos1);
delay(20);
}


void motor2(void)
{
  p2=analogRead(A1);
  p2=map(p2, 0,1023,0,3000);
  p2=2400-p2;
  target_pos2=(float)p2;
  diff2=target_pos2-current_pos2;
  if(diff2 !=0.00)
  {
    current_pos2+=diff2*easing;
     } else {
}
s2.writeMicroseconds((int)current_pos2);
delay(20);
}


void motor3(void)
{
  p3=analogRead(A2);
  p3=map(p3, 0,1023,0,1800);
  p3=2400-p3;
  target_pos3=(float)p3;
  diff3=target_pos3-current_pos3;
  if(diff3 !=0.00)
  {
    current_pos3+=diff3*easing;
     } else {
}
s3.writeMicroseconds((int)current_pos3);
delay(20);
}


void motor4(void)
{
  p4=analogRead(A3);
  p4=map(p4, 0,1023,0,1800);
  p4=2400-p4;
  target_pos4=(float)p4;
  diff4=target_pos4-current_pos4;
  if(diff4 !=0.00)
  {
    current_pos4+=diff4*easing;
     } else {
}
s4.writeMicroseconds((int)current_pos4);
delay(20);
}


void motor5(void)
{
  p5=analogRead(A4);
  p5=map(p5, 0,1023,0,2000);
  p5=2400-p5;
  target_pos5=(float)p5;
  diff5=target_pos5-current_pos5;
  if(diff5 !=0.00)
  {
    current_pos5+=diff5*easing;
     } else {
}
s5.writeMicroseconds((int)current_pos5);
delay(20);
}

