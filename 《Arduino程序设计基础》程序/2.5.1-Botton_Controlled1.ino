int led = 8;
boolean ledstate = false;
int button = 1;

void setup()
{
    pinMode(led,OUTPUT);
    pinMode(button,INPUT_PULLUP);
}

void loop()
{
   while(digitalRead(button)==HIGH){}
        if(ledstate==true)
        {
            digitalWrite(led,0);
            ledstate=!ledstate;
        }
        else
        {
            digitalWrite(led,1);
            ledstate=!ledstate;
        }
        
    delay(500);
}
