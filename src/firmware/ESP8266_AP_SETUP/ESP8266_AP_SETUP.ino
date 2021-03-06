/*
 * Hello world web server
 * circuits4you.com
 */
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#import "index.h"

//SSID and Password to your ESP Access Point
const char* AP_ssid = "ESPSetup";
const char* AP_password = "ESP8266";

ESP8266WebServer server(80); //Server on port 80
 
//==============================================================
//     This rutine is exicuted when you open its IP in browser
//==============================================================
void handleRoot() {

  String s = MAIN_page;
  server.send(200, "text/html", s);
  Serial.println("\n\nNetwork: " + server.arg("network_ssid"));
  Serial.println("Password: " + server.arg("network_pwrd"));
  Serial.println("=======================================");
  String ip = server.arg("hub_ip_0") + "." + server.arg("hub_ip_1") + "."
            + server.arg("hub_ip_2") + "." + server.arg("hub_ip_3");
  Serial.println("Hub IP: " + ip + ":" + server.arg("hub_port"));
}
 
//===============================================================
//                  SETUP
//===============================================================
void setup(void){
  Serial.begin(9600);
  Serial.println("");
  WiFi.mode(WIFI_AP);           //Only Access point
  WiFi.softAP(AP_ssid, AP_password);  //Start HOTspot removing password will disable security
 
  IPAddress myIP(192,168,4,1);
  Serial.print("HotSpt IP:");
  Serial.println(myIP);
 
  server.on("/", handleRoot);      //Which routine to handle at root location
 
  server.begin();                  //Start server
  Serial.println("HTTP server started");
}
//===============================================================
//                     LOOP
//===============================================================
void loop(void){
  server.handleClient();          //Handle client requests
}
