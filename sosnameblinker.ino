
int led1 = D7;
int led2 = D0;

void setup() {

	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
}

void loop() {
    // Blink the attatched LED to signal the start of the transmission.
    	digitalWrite(led2, HIGH);
    	delay(1000);
    	digitalWrite(led2, LOW);
    	
    // Send the SOS encoded letters of my name.
    	//W = .--
        digitalWrite(led1, HIGH);
        delay(500); // 500ms delay for a '.' dot transmission
        digitalWrite(led1, LOW);
        delay(200); // 200ms delay break between '.' and the next part of the character
    	
    	digitalWrite(led1, HIGH);
        delay(1000);// 1000ms delay for the '-' dash transmission
        digitalWrite(led1, LOW);
        delay(200); // 200ms delay between the '-' and next part of the character
        
        digitalWrite(led1, HIGH);
        delay(1000);// 1000ms delay for the '-'
        digitalWrite(led1, LOW);
        delay(1500);// 1500ms delay to signal the end of the character transmission
        
    	// I = ..
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(200);
    	
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(1500);
    	
    	//L = .-..
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(200);
        
        digitalWrite(led1, HIGH);
        delay(1000);
        digitalWrite(led1, LOW);
        delay(200);
    	
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(200);
    	
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(1500);
    	
    	//L = .-..
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(200);
        
        digitalWrite(led1, HIGH);
        delay(1000);
        digitalWrite(led1, LOW);
        delay(200);
    	
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(200);
    	
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(1500);
    	
    	//I = ..
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(200);
        
        digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(1500);
    	
    	//A = .-
    	digitalWrite(led1, HIGH);
        delay(500);
        digitalWrite(led1, LOW);
        delay(200);
        
        digitalWrite(led1, HIGH);
        delay(1000);
        digitalWrite(led1, LOW);
        delay(1500);
    	
    	//M = --
    	digitalWrite(led1, HIGH);
        delay(1000);
        digitalWrite(led1, LOW);
        delay(200);
        digitalWrite(led1, HIGH);
        delay(1000);
        digitalWrite(led1, LOW);
        delay(5000);

}