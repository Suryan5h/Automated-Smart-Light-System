
int count=0;

void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(11,OUTPUT);
pinMode(A3,INPUT);
pinMode(A4,OUTPUT);
pinMode(A5,OUTPUT);
digitalWrite(A2,HIGH);
digitalWrite(A1,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A4,LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
//Serial.println(analogRead(A0));
delay(250);
if(analogRead(A0) < 250)
{digitalWrite(11,HIGH);
//Serial.println("Person not found");
}
else
{digitalWrite(11,LOW);
Serial.println("Person Entry");
count=count+1;
Serial.println(count);
}
if(analogRead(A3) < 250)
{digitalWrite(11,HIGH);
//Serial.println("Person not found");
}
else
{digitalWrite(11,LOW);
Serial.println("Person Exit");
count=count-1;
if(count>=0){
Serial.println(count); }
else
  count=0;
}

}
