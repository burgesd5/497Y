
/* Pin Definitions */
// LEDs: LEDs are connected to 5, 6, 7, 8
int yellow = 5;
int red = 6;
int green = 7;
int blue = 8;

int lightSensorPin = A2;

void setup()
{
  
  //Set up all the leds to out put light
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  
}

void loop()
{
  
    //if it's dark (the light sensor sees less than 20)
    if(analogRead(lightSensorPin) < 20){

      //light up all the leds
       digitalWrite(yellow, HIGH);
       delay(250);
       
       digitalWrite(red, HIGH);
       delay(250);
       
       digitalWrite(green, HIGH);
       delay(250);
       
       digitalWrite(blue, HIGH);
       delay(250);
      
    }
    //else it's not dark
    else{

      //turn off all the leds
       digitalWrite(yellow, LOW);
       digitalWrite(red, LOW);
       digitalWrite(green, LOW);
       digitalWrite(blue, LOW);
    }

    
}








