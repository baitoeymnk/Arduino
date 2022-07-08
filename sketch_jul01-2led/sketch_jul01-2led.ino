#define LED1 23
#define LED2 22
#define SW1 2
#define SW2 3

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(SW1,INPUT);
pinMode(SW2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  char ch1;
  ch1 = Serial.read();
  if (ch1 == 'a'){
  digitalWrite (LED1,HIGH);
  Serial.println ("LED1 ON");
  }else{
  digitalWrite (LED1,LOW);
  Serial.println ("LED1 OFF");
  }
}




  
//digitalWrite (LED1,HIGH);
//delay(1000);
//digitalWrite (LED1,LOW);
//delay(1000);

//digitalWrite (LED2,HIGH);
//delay(1000);
//digitalWrite (LED2,LOW);
//delay(1000);
