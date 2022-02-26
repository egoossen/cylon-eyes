/*This is the beginning of a block comment

  Cylon Eyes

  Turns an LED on for one second, then off for one second, repeatedly.

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 26 Feb 2022
  by Elijah Goossen

  This is the end of a block comment
*/
// This is a line comment

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second (1000 milliseconds)
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second (1000 millisecends)
}
