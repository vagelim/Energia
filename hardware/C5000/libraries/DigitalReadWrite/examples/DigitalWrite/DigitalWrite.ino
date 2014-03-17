/*
 * Digital Read Write
 * Toggles the states of LED0, LED1 and LED2 continuously in a loop.
 */

void setup() {
  // set LED pin states as outputs
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

int ledValue = 0;
void loop() {
    
    // Write a value to the LED0 
    digitalWrite(LED0, !ledValue);    // On, if ledValue == 0 

    // Write a value to the LED1 
    digitalWrite(LED1, ledValue % 2); // On, if ledValue == 1 

    // Write a value to the LED2 
    digitalWrite(LED2, ledValue / 2); // On, if ledValue == 2 

    delay(1000); // Giving a delay of 1sec between toggling 

    if (2 == ledValue)
    {
        // Toggling LED2 to Off, for clear toggling from LED2 to LED0 
        digitalWrite(LED2, 0);
    }

    ledValue++;
    ledValue = ledValue % 3;
}