
//Tim Rooney
//TILT//

const int analogInPin = A0;  // Analog input pin that the accelerometer
const int analogOutPin = 11;// Analog output pin that the LED is attached to

int sensorValue = 0;        // value read from the pot
int outputValue = 0;        // value output to the PWM (analog out)


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);            
  // map it to the range of the analog out:
  outputValue = map(sensorValue, 396, 345, 0, 255);  

  if (sensorValue = analogRead(analogInPin)){           
    // map it to the range of the analog out:
   outputValue = map(sensorValue, 396, 345, 0, 255);
      analogWrite(analogOutPin, outputValue);     
  }

  if (sensorValue >= 396 || sensorValue <=330) {
    outputValue = 0;
    analogWrite(analogOutPin, outputValue); 
  }
    if (sensorValue <= 345 && sensorValue > 330) {
       outputValue = 255;
    analogWrite(analogOutPin, outputValue);   
  }
     

  Serial.print("sensor = " );                       
  Serial.print(sensorValue);      
  Serial.print("\t output = ");      
  Serial.println(outputValue);   
  delay(2);                     
}
