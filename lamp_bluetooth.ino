int r=11 ;
int g = 10;
int b = 12;

char k ;


void setup(){
  Serial.begin(9600);
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}
  
void loop()
{
  while(Serial.available()> 0)  
  {
    k = Serial.read(); 

  if(k=='0'){
    RGB_color(0, 0, 0);
    delay(1000);
  }

  if (k=='1'){
    RGB_color(255, 0, 0);
    delay(1000);
  }

  if (k=='2'){
    RGB_color(255, 0, 255);
    delay(1000);
  }

  if (k=='3'){
    RGB_color(180, 10, 10);
    delay(1000);
  }

  if (k=='4'){
    RGB_color(255, 120, 0);
    delay(1000);
  }

  if (k=='5'){
    RGB_color(255, 255, 0);
    delay(1000);
  }

  if (k=='6'){
    RGB_color(0, 255, 0);
    delay(1000);
  }

  if (k=='7'){
    RGB_color(0, 255, 255);
    delay(1000);
  }

  if (k=='8'){
    RGB_color(0, 0, 255);
    delay(1000);
  }

  if (k=='9'){
    RGB_color(255, 255, 255);
    delay(1000);
  }


  
}}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(r, red_light_value);
  analogWrite(g, green_light_value);
  analogWrite(b, blue_light_value);
}
