int IRsensor = 7;
bool IR_output = false;
int light = 3;
void setup()
{
    pinMode(IRsensor,INPUT);
    pinMode(light,OUTPUT);
    Serial.begin(9600);
    Serial.println("Welcome to use the IR Motion Sensor tutorial");
}

void loop()
{
    IR_output = digitalRead(IRsensor);
    if(IR_output != HIGH)
    {
        Serial.println("IRsensor OUTPUT: LOW");
        digitalWrite(light,LOW);
    }
    else
    {
      Serial.println("IRsensor OUTPUT: HIGH");
      digitalWrite(light,HIGH);
    }
    
}