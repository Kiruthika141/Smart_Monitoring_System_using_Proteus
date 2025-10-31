#include <LiquidCrystal.h>
#include <DHT.h>

int gasSensor=A0;
int LDRsensor=3;
int trigger=4;
int echo=6;
int buzzer=5;
int relay=13;

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal lcd(7,8,9,10,11,12);
int temperature,humidity, gasValue, LDRValue, duration, distance;
void setup() 
{
  dht.begin();
  pinMode(gasSensor,INPUT);
  pinMode(LDRsensor,INPUT);
  pinMode(echo,INPUT);
  pinMode(trigger,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(relay,OUTPUT);
  lcd.begin(16,2);
  lcd.print("LCD Starts");
  lcd.clear();
  Serial.begin(9600);
}

void loop() 
{
  temperature=dht.readTemperature();
  humidity=dht.readHumidity();
  gasValue=analogRead(gasSensor);
  LDRValue=digitalRead(LDRsensor);

  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);

  duration=pulseIn(echo,HIGH); 
  distance=duration*0.017;

  Serial.print("Temperature is ");
  Serial.print(temperature);
  Serial.println(" C");
  Serial.print("Humidity is ");
  Serial.print(humidity);
  Serial.println(" %");
  Serial.print("Gas value is ");
  Serial.println(gasValue);

  if(LDRValue==0)
  {
    Serial.println("It's Night time");
  }
  else
  {
    Serial.println("It's Day time");
  }

  Serial.print("Distance is ");
  Serial.println(distance);

  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" Hum: ");
  lcd.print(humidity);
  lcd.setCursor(0,1);
  lcd.print("Gas: ");
  lcd.print(gasValue);
  lcd.print(" Dis: ");
  lcd.print(distance);

  if(gasValue>450 && temperature>35)
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(relay,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(relay,LOW);
  }
  Serial.println();
  delay(1000);
}
