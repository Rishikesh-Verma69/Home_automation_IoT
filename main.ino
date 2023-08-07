#define BLYNK_TEMPLATE_ID "TMPL3UhCZVJ2M"
#define BLYNK_TEMPLATE_NAME "Home Automation IoT"
#define BLYNK_AUTH_TOKEN "SH8eOkebEAHWKLB8IgF3k8gn_-pzZZOE"

#include<ESP8266WiFi.h>
#include<BlynkSimpleEsp8266.h>

char auth[]= BLYNK_AUTH_TOKEN;
char ssid[]="Redmi Note 11";
char pasd[]="1234567890";

BLYNK_WRITE(V0)
{
  int value1 = param.asInt();
  if (value1==1)
  {
    digitalWrite(D4,HIGH);
  }

  else if (value1==0 )
  {
    digitalWrite(D4,LOW);
  }

}

BLYNK_WRITE(V1)
{
  int value1 = param.asInt();
  if (value1==1)
  {
    digitalWrite(D2,HIGH);
  }

  else if (value1==0 )
  {
    digitalWrite(D2,LOW);
  }

}

void setup() {
  // put your setup code here, to run once:
  pinMode(D4,OUTPUT);
  pinMode(D2,OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pasd);

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();

}
