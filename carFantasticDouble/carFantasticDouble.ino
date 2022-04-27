
// byte (8 bit)- número sin signo entre 0 y 255.
byte ledPin;
int count = 0;

void setup() {
Serial.begin(9600); // open serial port, set data rate to 9600 bps
for (ledPin=5; ledPin<=12; ledPin++){
    pinMode(ledPin,OUTPUT);
  }
}

void loop() {
  // Go from left to rigtht turning on and off after a while 
  for (ledPin=5; ledPin<=12; ledPin++){
    count ++;
    Serial.print("contador: ");
    Serial.println(count);
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin+1,HIGH);
  delay(75);
  digitalWrite(ledPin,LOW);  
    
  }

// Comeback from rigtht to left turning on and off after a while 
  for (ledPin=12; ledPin>=5; ledPin--){
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin-1, HIGH);
  delay(75);
  digitalWrite(ledPin,LOW);    
  }
}
