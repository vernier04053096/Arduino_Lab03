float sensorVoltage,sensorValue=0,Vin=3,R1=1111600,R2=0.88;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Hello," );
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0 ;i<=5;i++)
  sensorValue = 0.7* sensorValue + 0.3* analogRead(A0);
  sensorVoltage = sensorValue * 5 / 1024;
  // sensorVoltage= Vin * R1 / (R1+R2)
  R1 = sensorVoltage * (R1+R2) / Vin ;
  Serial.println(sensorValue);
  Serial.println(sensorVoltage);
  Serial.println(R1);
  Serial.println("*****************");
  delay(500);
}

