void setup() 
{
  // put your setup code here, to run once:
  for(int i=3;i<=6;i++)
    pinMode(i,OUTPUT);
  
}

void loop() 
{
  // put your main code here, to run repeatedly:
  for(int i=3;i<=6;i++)
  {
    digitalWrite(i,1);
    delay(1000);
  }
  for(int i=6;i>=3;i--)
  {
    digitalWrite(i,0);
    delay(1000);
  }

}
