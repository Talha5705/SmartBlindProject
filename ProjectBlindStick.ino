float echo=2;
float trig=3;
int buzzer=8;
int btn=7;
int btnStatus=0;
long duration,distance;

void setup() {
  
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(btn,OUTPUT);
  Serial.begin(9600);

}


void loop() {
    digitalWrite(trig,LOW);
    delay(2);
    
    digitalWrite(trig,HIGH);
    delay(10);

    digitalWrite(trig,LOW);

    
    duration=pulseIn(echo,HIGH);
    distance=duration*.034/2;
    Serial.println(distance );
    delay(20);

    btnStatus=digitalRead(btn);
    if(distance<10 && btnStatus==HIGH){
      
      digitalWrite(buzzer,HIGH);
      delay(1000);
      digitalWrite(buzzer,LOW);
      delay(1000);
      }
    

}
