// Define pins
#define BLUE 3
#define GREEN 5
#define RED 6

// What is turned on?? What is staying off??
void setup()
{
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, LOW);
}

// Define variables
int redValue;
int greenValue;
int blueValue;

// This is the loop that goes on forever! 
void loop()
{
    #define delayTime 10 // how long it takes to faaade. 
    // The larger the value, the longer to get through the colors

    redValue = 255; // full brightness, babay!
    greenValue = 0; // off ;-;
    blueValue = 0; // off ;-;

    // This is an extra bit of code that turns Red off
    // analogWrite(RED, 0);
    // delay(1000);

    for( int i = 0; i < 255; i+= 1) // fades red out from 255 to 0, then brings green in up to 255
    {
        redValue -= 1;
        greenValue += 1;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        delay(delayTime);
    }

    redValue = 0;
    greenValue = 255;
    blueValue = 0;

    for( int i = 0; i < 255; i += 1) // fades green out from 255 to 0, then brings blue in up to 255
    {
        greenValue -= 1;
        blueValue += 1;
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
        delay(delayTime);
    }

    redValue = 0;
    greenValue = 0;
    blueValue = 255;

    for( int i = 0; i < 255; i += 1) // fades blue out from 255 to 0, then brings red in up to 255
    {
        blueValue -= 1;
        redValue += 1;
        analogWrite(BLUE, blueValue);
        analogWrite(RED, redValue);
        delay(delayTime);
    }
}