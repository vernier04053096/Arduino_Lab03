float Analogin=0,Vin;

void setup()
{
 Serial.begin(9600);
 Serial.println("Hello," );
 pinMode(A0,INPUT);
 Analogin = 0;
}
void loop()
{
  for (int i=0;i<=5;i++)
    Analogin = 0.7* Analogin + 0.3* analogRead(A0);
Vin = Analogin * 5 / 1024;
Serial.println(Vin);
delay(500);
}
