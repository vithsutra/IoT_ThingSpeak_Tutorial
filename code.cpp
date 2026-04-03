#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "RUST";
const char* password = "sathwikkd";

String apiKey = "JH9QBIDSCC1CQIFZ";
const char* server = "http://api.thingspeak.com/update";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi Connected");
}

void loop() {
  if(WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    int sensorValue = random(20, 40); // dummy data

    String url = String(server) + "?api_key=" + apiKey + "&field1=" + String(sensorValue);

    http.begin(url);
    int httpCode = http.GET();

    Serial.println("Sent: " + String(sensorValue));
    Serial.println("HTTP Response: " + String(httpCode));

    http.end();
  }

  delay(5000); // ThingSpeak limit
}