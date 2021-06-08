//
// By Kyle McDonald
// From the instructables project at:
// http://www.instructables.com/id/DIY-3D-Controller/

#define resolution 8
#define mains 60 /// 60: north america, japan; 50: most other places

#define refresh 2 * 1000000 / mains

void setup() {
  Serial.begin(115200);

  // unused pins are fairly insignificant,
  // but pulled low to reduce unknown variables
  for(int i = 2; i < 14; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

  for(int i = 8; i < 11; i++)
    pinMode(i, INPUT);
}

void loop() {  
  Serial.print(pinMode(8, OUTPUT));
  Serial.print(" ");
  Serial.print(pinMode(9, OUTPUT));
  Serial.print(" ");
  Serial.print(pinMode(10, OUTPUT));

} 
