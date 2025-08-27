#Different C and C++ pointer and dereference operator
int a=2;
int pointer(int *a){
    *a = 9;
    return *a;
}
void dereference(int &b)
{
    b = 11;
}

void setup()
{
    Serial.begin(9600);
    Serial.println(pointer(&a));
    Serial.println(dereference(a));
}
void loop(){
    
}
