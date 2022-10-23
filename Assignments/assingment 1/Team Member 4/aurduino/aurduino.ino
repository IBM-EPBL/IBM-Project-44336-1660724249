int trigpin=4:
int echopin3;
int buzzerpin=10;
int time;
int distance;
void setup()
}
pinMode(8,0UTPUT);
pinMode(3,INPUT);
pinMode(4,0UTPUT);
pinMode(10,oUTPUT);
Serial.begin(9600);
}
void loop()
{
digitalWrite(trigpin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigpin, LOw);
delayMicroseconds(1000)
time-pulsein(echopin, HIGH);
distance-(time 0.034)/2;
ifdistance=10)
{
Serial.print("Distance- ");
Serial.println(distance);
digitalWrite(8,FHIGH);
delay(1000);
digitalWrite(10,LOW);
delay(1000);
}
else
{
Serial.print(Distance= ");
Serial.println(distance):
digitalWrite(8.LOW);
delay(1000)
digitalWrite(10,HIGH);
delay(1000); 
}
}
