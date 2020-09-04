int output_too = 13;
int output_from = 3;
int output = 6;
int value = 0;
int count = 0;
void setup() {
 pinMode(output_too, OUTPUT);     
 pinMode(output_from, INPUT);     
 pinMode(output, OUTPUT);     
 Serial.begin(9600);
}
void loop(){
// value = digitalRead(output_from); 
// Serial.println(value);
// if(value == 1){
//     digitalWrite(output, HIGH);
////     delay(10000);
//     Serial.print("high");
// }

switch (value = digitalRead(output_from)) {
  case 1:
    digitalWrite(output, HIGH);
    Serial.println("highhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh");
    count = 0;
    break;
  case 0:
    count = count + 1;
    if (count >= 15000){
     digitalWrite(output, LOW);
    }
    Serial.println("low");
    break;
  default:
    Serial.println("uhhhh wtf, 'value' not 1 or 0");
    break;
}
//                       else{
//                        for (int i = 0; i <= 15000; i++) {
//                           value = digitalRead(output_from); 
//                           Serial.println(value);
//                           Serial.println(count);
//                           count = count+1;
//                           if (value == 1){
//                            Serial.println("found motion again");
//                             digitalWrite(output, HIGH);
//                             count = 0;
//                             continue;
//                           }
//                        }
//                         digitalWrite(output, LOW);
//                         Serial.print("low");
//                      
//                       }
 
} 
