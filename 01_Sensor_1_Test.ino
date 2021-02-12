/*
 * auther : Bhavik chauhan from Jayshree Laboratories
 * 
 * Facebook : 1) @JayshreeLabs
 *            2) @Autonomous-Things
 *            
 * Instagram : @jayshreelabs
 * 
*/

int IR = 7;

void setup() 
{
  Serial.begin(9600);
  pinMode(IR,INPUT);  
}

void loop() 
{
  int l = digitalRead(IR);

  Serial.println("  ");

  Serial.print(l);
  Serial.print("  ");

}
