#include "encode.h"
//#include "Parser.cpp"
using namespace std;

int main(){
  Encode* encode = new Encode("JSON.json");
  encode->setSerialN("987654321");
  encode->setIP("120.84.1474");
  encode->setGroupName("living_room");
  encode->setDeviceName("noob");
  encode->setLight_S(1);
  encode->setLight_L(5);
  encode->setCommand("test");
  // encode->setGroupName("living_room_3000");
  encode->stringfy();
}