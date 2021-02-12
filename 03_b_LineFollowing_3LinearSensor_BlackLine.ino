/*
 * auther : Bhavik chauhan from Jayshree Laboratories
 * 
 * Facebook : 1) @JayshreeLabs
 *            2) @Autonomous-Things
 *            
 * Instagram : @jayshreelabs
 * 
*/


// Algorithm:     Left Priority
// Environment:   White Background & Black line

int A=2;                 //  Left Forward
int B=3;                 //  Left Backward
int C=4;                 //  Right Forward
int D=5;                 //  Right Backward

int leftsen = A0;
int middlesen = A1;
int rightsen = A2;

int delayleft90=250;
int delayright90=250;



void setup() 
{
  Serial.begin(9600);
  pinMode(leftsen,INPUT);
  pinMode(middlesen,INPUT);
  pinMode(rightsen,INPUT);
}

void loop() 
{
  int l = analogRead(leftsen);
  int m = analogRead(middlesen);
  int r = analogRead(rightsen);

  Serial.println("  ");

  Serial.print(l);
  Serial.print("  ");
  Serial.print(m);
  Serial.print("  ");
  Serial.print(r);
  Serial.print("  ");


  if(m>512)
    {

      if( l<512 && r<512 )           //  0 1 0
        {
          slightright();        
        }
      else if( l<512 && r>512 )      //  0 1 1
        {
          slightleft();
        }
      else if( l>512 && r<512 )      //  1 1 0
        {
          slightright();
        }
      else if( l>512 && r>512 )      //  1 1 1
        {
          slightright();
//          delay(15);
        }

    }
  else
    {
      if( l<512 && r<512 )          //  0 0 0
        {
          slightright();
//          delay(15);
        }
      else if( l<512 && r>512 )     //  0 0 1
        {
          slightleft();                  
        }
      else if( l>512 && r<512 )     //  1 0 0
        {
           slightright();
        }
      else if( l>512 && r>512 )     //  1 0 1
        {
           forward();
        }
    }

//    stp();
//    delay(10);
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

void reverse()
{
          // Reverse
          digitalWrite(A,LOW);
          digitalWrite(B,HIGH);
          digitalWrite(C,LOW);
          digitalWrite(D,HIGH);
          Serial.print("     Reverse      ");    
}

void stp()
{
          // stop
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          Serial.print("     stop      ");    
}

void left90()
{
          // left90
          digitalWrite(A,LOW);
          digitalWrite(B,HIGH);
          digitalWrite(C,HIGH);
          digitalWrite(D,LOW);
          Serial.print("     left90      ");    
          delay(delayleft90);
}

void right90()
{
          // right90
          digitalWrite(A,HIGH);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,HIGH);
          Serial.print("     right90      ");    
          delay(delayright90);
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
/*
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          delay(50);
*/
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
/*
          digitalWrite(A,LOW);
          digitalWrite(B,LOW);
          digitalWrite(C,LOW);
          digitalWrite(D,LOW);
          delay(50);
*/
}
