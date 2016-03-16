Title: arduino-includes-to-photon-template
====

Adapted for Particle devices by Your Name The Date

details and example sketch: https://github.com/hpssjellis/arduino-includes-to-photon-template

Brought to you by: Your Name       your website

This example in the templage was modified from https://www.arduino.cc/en/Hacking/LibraryTutorial



Instructions
----


1. I strongly suggest first working in the particle.io IDE at https://build.particle.io  and copying include.h and include.cpp files into the IDE. This method is a pain to setup but makes development much easier, (you don't have to switch back and forth between your App and the Library. You also do not have to update github spark.json version numbers and revalidate for every change you make). When things are working better then fork this github site to make your include files ready to be published on Particle.io. Remember to edit things with triple comment /// so others will know what you have changed from the Arduino files. 

The main difference between the the IDE and the github library is that links full path to your includes will change from:

On the Particle.io IDE

\#include "myInclude.h"

On a github library

\#include "myInclude/myInclude.h"





1. After forking this repo, go to settings and rename it


1. Copy your main arduino .h and .cpp files to the firmware directory and give them the same name as the github repo name in the above line.

1. Put your name and other info into the license file

1. Put similar information into the spark.json file (VERY IMPORTANT THAT THE SPARK.JSON NAME IS THE EXACT NAME OF YOUR INCLUDE FILE)

1. Copy your arduino .ino (or rename the .cpp) example program to the examples directory. Best to have a a01beginner.ino file that only uses the D7 LED, and an a02advanced.ino file that uses all the capabilities of the ported arduino include with serial.print commands. Note: important that your beginner file is the alphabetically first file that is why I put the a01 before it.

1. Look at the beginner-hints.md and advanced-hints.md files

1. When done. go to http://particle.io click the build IDE and click libraries then click "Contribute Library" enter your github url and upload to particle.io to publically test compilation. By the file being public other people can help with issues. Good luck.


Note: I suggest using triple comments /// to edit and comment your include files, that way if anyone tries to help you, they can tell the difference between what you have done and what was in the original files.



For great examples of ported librarbies

https://github.com/pkourany?tab=repositories


Use these suggestions at hyour own risk.



Note: By Jeremy Ellis

website http://rocksetta.com

twitter @rocksetta

Particle.io @rocksetta

https://community.particle.io/users/rocksetta/activity
