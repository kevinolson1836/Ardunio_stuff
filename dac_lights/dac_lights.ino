 
int rec_signal = 0;
int blue_pin = 6;
int green_pin = 5;
int red_pin = 3;

long time = 100;

void setup(void) {
  Serial.begin(9600);
  pinMode(blue_pin, OUTPUT);
  Serial.setTimeout(time);
}

void loop(void) {
  rec_signal =0;

  if(Serial.available() > 0)
  {
    rec_signal=Serial.parseInt();
    Serial.println(rec_signal);

    if (rec_signal <= 63){
      //green
      analogWrite(red_pin, 255);
      analogWrite(green_pin, rec_signal-255);
      analogWrite(blue_pin, 255);
      Serial.println("green");
    }
    else if (rec_signal > 63 && rec_signal <= 126){
      //yellow
      analogWrite(red_pin, rec_signal-255);
      analogWrite(green_pin, rec_signal-255);
      analogWrite(blue_pin, 255);
      Serial.println("yellow");
    }
    else if (rec_signal > 126 && rec_signal <= 189){
      //orange
      analogWrite(red_pin, rec_signal-255);
      analogWrite(green_pin, rec_signal -90);
      analogWrite(blue_pin, 255);
      Serial.println("orange");
    }
    else if (rec_signal > 189 && rec_signal <= 256){
      //red
      analogWrite(red_pin, rec_signal-255);
      analogWrite(green_pin, 255);
      analogWrite(blue_pin, 255);
      Serial.println("red");
    }
    else {
      //error?
    }
  }
}
