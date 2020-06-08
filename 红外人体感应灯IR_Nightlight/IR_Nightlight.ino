int IRsensor = 7;//红外传感器端口
bool IR_output = false;//储存红外传感器状态
int light = 3;//灯泡端口
void setup()
{
    pinMode(IRsensor,INPUT);
    pinMode(light,OUTPUT);
    Serial.begin(9600);//开启串口监控
    Serial.println("Welcome to use the IR Motion Sensor tutorial");
}

void loop()
{
    IR_output = digitalRead(IRsensor);//记录红外传感器状态
    if(IR_output != HIGH)
    {
        Serial.println("IRsensor OUTPUT: LOW");//没人，向串口监视器输出LOW并且关灯
        digitalWrite(light,LOW);
    }
    else
    {
      Serial.println("IRsensor OUTPUT: HIGH");//有人，向串口监视器输出HIGH并且开灯
      digitalWrite(light,HIGH);
    }
    
}
