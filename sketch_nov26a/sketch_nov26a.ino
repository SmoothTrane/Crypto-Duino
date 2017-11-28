#include <LiquidCrystal.h>
#include <ArduinoJson.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int incomingByte = 0;
byte byteRead;
String json = "{}";
      StaticJsonBuffer<200> jsonBuffer;

void setup() {  

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
  analogWrite(9, 2);
  lcd.begin(16, 2);
      

    

} 

void loop() {

if (Serial.available()) {
    /* read the most recent byte */
    String json =  Serial.readString();
JsonObject& root = jsonBuffer.parseObject(json);
//
//"{"chart":"bitcoin", "price":"9,725.2038"}"
  String chartName = root["chart"].as<String>();
  String price = root["price"].as<String>();

//    /*ECHO the value that was read, back to the serial port. */
    lcd.setCursor(0,0);
    lcd.print(chartName);
    lcd.setCursor(0,1);
    lcd.print("$" + price);
  }

}
