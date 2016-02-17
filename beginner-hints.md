


Change 

#include "application.h"

to 

#include "Particle.h"

tri-Comment out /// any header from the following list or starting with 
#include "avr/..."


#include "spark_wiring.h"
#include "spark_wiring_cloud.h"
#include "spark_wiring_interrupts.h"
#include "spark_wiring_string.h"
#include "spark_wiring_power.h"
#include "spark_wiring_fuel.h"  
#include "spark_wiring_print.h"
#include "spark_wiring_usartserial.h"
#include "spark_wiring_can.h"
#include "spark_wiring_usbserial.h"
#include "spark_wiring_usbmouse.h"
#include "spark_wiring_usbkeyboard.h"
#include "spark_wiring_spi.h"
#include "spark_wiring_i2c.h"
#include "spark_wiring_servo.h"
#include "spark_wiring_wifi.h"
#include "spark_wiring_network.h"
#include "spark_wiring_client.h"
#include "spark_wiring_startup.h"
#include "spark_wiring_timer.h"
#include "spark_wiring_tcpclient.h"
#include "spark_wiring_tcpserver.h"
#include "spark_wiring_udp.h"
#include "spark_wiring_time.h"
#include "spark_wiring_tone.h"
#include "spark_wiring_eeprom.h"
#include "version.h"
#include "watchdog.h"
#include "thread.h"
#include "fast_pin.h"
#include "string_convert.h"
#include "debug_output_handler.h"
#include "system_task.h"
#include "system_user.h"
#include "stdio.h"


Ignore other headers unless specifically included with the arduino set of files





