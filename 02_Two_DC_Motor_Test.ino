/*
 * auther : Bhavik chauhan from Jayshree Laboratories
 * 
 * Facebook : 1) @JayshreeLabs
 *            2) @Autonomous-Things
 *            
 * Instagram : @jayshreelabs
 * 
*/

int A=2;                   //   Left Motor Forward
int B=3;                  //   Left Motor Reverse
int C=4;                  //  Right Motor Forward
int D=5;                  //  Right Motor Reverse

int dly=500;

void setup() 
{
    pinMode(A,OUTPUT);
    pinMode(B,OUTPUT);
    pinMode(C,OUTPUT);
    pinMode(D,OUTPUT);
}

void loop() 
{
   digitalWrite(A,HIGH);        
   digitalWrite(B,LOW);
   digitalWrite(C,LOW);
   digitalWrite(D,LOW);
   delay(1000);
   digitalWrite(A,LOW);
   digitalWrite(B,LOW);
   digitalWrite(C,LOW);
   digitalWrite(D,LOW);
   delay(dly);
   
   digitalWrite(A,LOW);
   digitalWrite(B,HIGH);
   digitalWrite(C,LOW);
   digitalWrite(D,LOW);
   delay(1000);
   digitalWrite(A,LOW);
   digitalWrite(B,LOW);
   digitalWrite(C,LOW);
   digitalWrite(D,LOW);
   delay(dly);

   digitalWrite(A,LOW);
   digitalWrite(B,LOW);
   digitalWrite(C,HIGH);
   digitalWrite(D,LOW);
   delay(1000);
   digitalWrite(A,LOW);
   digitalWrite(B,LOW);
   digitalWrite(C,LOW);
   digitalWrite(D,LOW);
   delay(dly);
      
   digitalWrite(A,LOW);
   digitalWrite(B,LOW);
   digitalWrite(C,LOW);
   digitalWrite(D,HIGH);
   delay(1000);
   digitalWrite(A,LOW);
   digitalWrite(B,LOW);
   digitalWrite(C,LOW);
   digitalWrite(D,LOW);
   delay(dly);
 }
