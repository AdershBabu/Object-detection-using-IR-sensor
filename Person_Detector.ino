
#define a 4
#define b 8
int r;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(b,INPUT);
pinMode(a,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  r=digitalRead(b);
  Serial.println(r);
  if(r==0){
     
digitalWrite(a,HIGH);
delay(1500);
}
else{
digitalWrite(a,LOW);
}

delay(100);
}
