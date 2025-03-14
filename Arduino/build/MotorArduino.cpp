#define JOYSTICK_PIN A2   
#define INSTRUCTION 0x1E  
#define BAUD_RATE 19200  

void setup() {
    Serial.begin(BAUD_RATE);  
}

void loop() {
    int joystickValue = analogRead(JOYSTICK_PIN); 

    int goalPosition = map(joystickValue, 0, 1023, 0, 1023);  

    Serial.write(INSTRUCTION);        
    Serial.write((uint8_t)(goalPosition & 0xFF)); 
    Serial.write((uint8_t)(goalPosition >> 8));  

    delay(100);  
}
