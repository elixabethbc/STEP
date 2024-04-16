const intbuttonPin = 2;
const intledPin = 13;

intbuttonState = 0;

void setup() { 
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);
} 

 void loop() { 
    buttonState = digitalRead(buttonPin);

    if(buttonState == HIGH) {
        digitalWrite(ledPin, HIGH);
    } 
    else { 
        digitalWrite(ledPin, LOW);
    }
}