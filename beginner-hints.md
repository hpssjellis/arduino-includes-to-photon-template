


Change 

\#include "application.h"

to 

\#include "Particle.h"

tri-Comment out /// any header from the following list or starting with 

\#include "avr/..."

```
#include "cloud.h"
#include "interrupts.h"
#include "string.h"
#include "power.h"
#include "fuel.h" 
#include "print.h"
#include "usartserial.h"
#include "can.h"
#include "usbserial.h"
#include "usbmouse.h"
#include "usbkeyboard.h"
#include "spi.h"
#include "i2c.h"
#include "servo.h"
#include "wifi.h"
#include "network.h"
#include "client.h"
#include "startup.h"
#include "timer.h"
#include "tcpclient.h"
#include "tcpserver.h"
#include "udp.h"
#include "time.h"
#include "tone.h"
#include "eeprom.h"
#include "version.h"
#include "watchdog.h"
#include "thread.h"
#include "fast_pin.h"
#include "string_convert.h"
#include "debug_output_handler.h"
#include "system_task.h"
#include "system_user.h"
#include "stdio.h"
```

Ignore other include files as they may have come from the STM32/ARM Cortex M3 platform which can be used with particle devices

Include any files that came with your arduino code.


Note: The above list has a good chance of being correct but someone could easily have made an include file with the exact same name that is completely different than the above files. Good luck.





