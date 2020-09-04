String datafromUser = "";
int data =0;
int green_pin = 6;
int red_pin = 5;
int blue_pin = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode( green_pin , OUTPUT );
  pinMode( red_pin, OUTPUT);
  pinMode( blue_pin, OUTPUT);
  Serial.begin(9600);
}


// color slowly fades, then when a new value is greater than that set new value

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    datafromUser=Serial.readStringUntil('\0');
    data = datafromUser.toInt();
    Serial.println(datafromUser);
  }
  
  if(data < 64){ //green
    analogWrite(green_pin, data);
    analogWrite(red_pin, 255);
    analogWrite(blue_pin, 255);
  } 
  else if(data >= 64 && data <128) { //yellow
    analogWrite(red_pin, data);
    analogWrite(green_pin, data);
    analogWrite(blue_pin, 255);
  }
  else if(data >= 129 && data <192) {//orange
    analogWrite(red_pin, data);
    analogWrite(green_pin, data+69);
    analogWrite(blue_pin, 255);
  }
  else if(data >= 192) {//red
    analogWrite(red_pin, data-128);
    analogWrite(blue_pin, 255);
    analogWrite(green_pin, 255);
  }

}
