int key_0=3;
int key_1=4;
int key_2=5;

int led_0=11;

void setup() {
  // put your setup code here, to run once:
  pinMode(key_0,INPUT_PULLUP);
  pinMode(led_0,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(LOW==digitalRead(key_0))
  {
     digitalWrite(led_0,HIGH);
  }
  else
  {
     digitalWrite(led_0,LOW);
  }
  
}
