// alsome car
byte ledPin[]={12,11,10,9,8,7,6,5}; // pines de conexión
int tdelay = 60;
int numOfLeds = sizeof(ledPin);
int indexPenultLed = ledPin[numOfLeds-2];
int count =0;


void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600); // open serial port, set data rate to 9600 bps
  for (int i = 0; i < 8; i++){
    pinMode(ledPin[i],OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < numOfLeds; i++){
    count ++;
    Serial.print("contador: ");
    Serial.println(count);
    digitalWrite(ledPin[i], HIGH);
    digitalWrite(ledPin[i+1], HIGH);
    delay(tdelay);
    digitalWrite(ledPin[i], LOW);
    delay(tdelay);
  }
  for (int i = indexPenultLed; i >0; i--){
    digitalWrite(ledPin[i], HIGH);
    digitalWrite(ledPin[i-1], HIGH);
    delay(tdelay);
    digitalWrite(ledPin[i], LOW);
    delay(tdelay);
  }
}
