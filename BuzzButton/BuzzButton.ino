
/* Pin Definitions */
// The button is pin A4 and the vibe board is pin 3
int buttonPin = 4;
int vibePin = 3;

void setup()
{
  
  //Button 
  pinMode(buttonPin, INPUT);  // set the pin as an input
  digitalWrite(buttonPin, HIGH);  // enable the pull-up resistor

  //VIBE
  pinMode(vibePin, OUTPUT);  // set the pin as an output

  
}

void loop()
{
  
  //if the button is being pressed
     if(digitalRead(buttonPin) == 0) {
         
          //turn on vibe
          digitalWrite(vibePin, HIGH);
          
          //give it a moment to vibrate
          delay(1000);
          
          //turn it back off again
          digitalWrite(vibePin, LOW);   
                   
     }

     delay(1000);

}


