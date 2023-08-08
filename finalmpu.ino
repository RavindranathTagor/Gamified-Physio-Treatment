#include <ESP8266WiFi.h>
#include <Wire.h>
#include <MPU6050.h>

MPU6050 mpu;

const char* ssid = "Iot";
const char* password = "rocky123";
const char* serverIP = "192.168.214.237";  // Replace with the IP address of your computer
const int serverPort = 8000;

WiFiClient client;

void sendCommand(const char* command) {
  if (client.connect(serverIP, serverPort)) {
    client.print(command);
    client.flush();
  }
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  Wire.begin();
  mpu.initialize();

  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed!");
    while (1);
  }
}

void loop() {
  int16_t ax, ay, az, gx, gy, gz;
  mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  float x = ax / 16384.0;  // Divide by accelerometer sensitivity scale factor
  float y = ay / 16384.0;

  Serial.print("X: ");
  Serial.print(x);
  Serial.print("\tY: ");
  Serial.println(y);

  // Check conditions and send commands based on x and y values
  if (x > 0.2) {
    sendCommand("RIGHT");
  }
  else if (x < -0.2) {
    sendCommand("LEFT");
  }
  
  delay(100);
}

