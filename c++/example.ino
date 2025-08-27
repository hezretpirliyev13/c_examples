//#Different C and C++ pointer and dereference operator

int a = 2, b = 3;
int pointer(int *a) {
  *a = 9;
  return *a;
}
void dereference(int &b) {
  b = 11;
}

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println(pointer(&a));
  dereference(b);
  Serial.println(b,DEC);
}
void loop() {
}
