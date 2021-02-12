/*
 * auther : Bhavik chauhan from Jayshree Laboratories
 * 
 * Facebook : 1) @JayshreeLabs
 *            2) @Autonomous-Things
 *            
 * Instagram : @jayshreelabs
 * 
*/

//  White background = 1
//  Black Background = 0


int A=2;                 //  Left Forward
int B=3;                 //  Left Backward
int C=4;                 //  Right Forward
int D=5;                 //  Right Backward

int leftsen = A1;
int rightsen = A3;

void setup() 
{
  Serial.begin(9600);
  pinMode(leftsen,INPUT);
  pinMode(rightsen,INPUT);
}

void loop() 
{
  int l = analogRead(leftsen);
  int r = analogRead(rightsen);


  Serial.println("  ");

  Serial.print(" Analog value ");

  Serial.print(l);
  Serial.print("  ");
  Serial.print(r);
  Serial.print("  ");


  if(l>=512)
    {
      l=1;
    }
  else
    {
      l=0;
    }
  if(r>=512)
    {
      r=1;
    }
  else
    {
      r=0;
    }

  Serial.print("  digital value: ");

  Serial.print(l);
  Serial.print("  ");
  Serial.print(r);
  Serial.print("  ");

  if(l==1 && r==1)
    {
      forward();
    }
  else if(l==0 && r==0)
    {
      forward();
    }
  else if(l==0 && r==1)
    {
      slightleft();
    }
  else if(l==1 && r==0)
    {
      slightright();
    }
}

void forward()
{
          // Forward 
          digitalWrite(A,HIGH);      //   Left Forward
          digitalWrite(B,LOW);       //   Left Backward
          digitalWrite(C,HIGH);      //   Right Forward
          digitalWrite(D,LOW);       //   Right Backward
          Serial.print("     Forward      ");
}

void slightleft()
{
          // slightleft
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,HIGH);
          digitalWrite(D,LOW);
          Serial.print("     slightleft      ");      
          delay(25);
}

void slightright()
{
          // slightleft
          digitalWrite(A,HIGH);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          Serial.print("     slightright      ");        
          delay(25);
}
