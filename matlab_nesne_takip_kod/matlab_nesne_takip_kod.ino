//motor pinleri
const int sagOn_ileri=13;
const int sagOn_geri=8;
const int sagArka_ileri=12;
const int sagArka_geri=7;
const int solOn_ileri=11;
const int solOn_geri=6;
const int solArka_ileri=10;
const int solArka_geri=5;

//hız kontrol pin
const int ena=5;
const int enb=4;
//motorların hızı
const int motor_hiz = 200; // motor hızı

void setup()
{
Serial.begin(9600);

pinMode(sagOn_ileri,OUTPUT);
pinMode(sagOn_geri,OUTPUT);
pinMode(sagArka_geri,OUTPUT);
pinMode(sagArka_geri,OUTPUT);
pinMode(solOn_ileri,OUTPUT);
pinMode(solOn_geri,OUTPUT);
pinMode(solArka_geri,OUTPUT);
pinMode(solArka_geri,OUTPUT);
pinMode(ena, OUTPUT);
pinMode(enb, OUTPUT);
}

void loop()
{
  int val;
if (Serial.available())
{
  
val=Serial.read();
if(val=='L')
{
 
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);


}
else if(val=='R')
{
   
digitalWrite(sagOn_ileri,LOW);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}
else if(val=='C')
{
 
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
}
else if(val=='F')
{
  
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);

}
else if(val=='B')
{
   
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);

}

}
}

