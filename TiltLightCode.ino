int tilt = 2;         // input pin
int led = 13;       //  output pin

void setup()
{
  pinMode(tilt, INPUT);   // tilt sensor
  pinMode(led, OUTPUT);
}
 
void loop()
{
  int reading;
  reading = digitalRead(tilt);    //tilt output
  
  if(reading)
    digitalWrite(led, HIGH);    // brightness at MAX
  else
    digitalWrite(led, LOW);    // brightness and MIN
}