
//beginner.ino


///#include <LED13.h>
#include "myar.h"



LED13 led;//initialize an instance of the class

void setup(){/*nothing to setup*/}

void loop(){
  led.blink(2000);//stay one second on, then a second off
}
