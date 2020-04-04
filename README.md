# home_made_ventilator_air_pumps
Home made ventilator made with off the shelf parts for less than $50 with no 3D printed parts whatsoever.  Just these parts and 5 minutes. 

video: https://www.youtube.com/watch?v=nvoyV9RNvaw

This is a home made ventilator.  It is very crude but it works okay on a test dummy and a lung tester.  The parts are listed here.  One pump does the inhale, and 2nd pump does the exhale.  You can specify timing for inhale, exhale and delay in between also.  If you don't need exhale, you can turn it off or set time of exhale to 0.   My next task is to make a keypad and display so that the user can change the parameter of the timing without reloading the code into the arduino board.

Please understand that this is not made for professional use.  It is a desperate measure for desperate time.  Sometimes having one is better than NOTHING at all.  Please do not blame me for anything, just trying to do what I can.  With 3 seconds of pump time for inhale, you get about 500ml of air which is average size breath.  So just adjust the time for more or less air.  Same for exhale.  You can use a lung tester to test amount of air and pressure.

assembly, should take about 5 minutes, do not plug in the pumps yet

step 1) connect the relay board to the arduino Uno R3

step 2) cut one side of the pump power cord and connect each end to the relay left most 2 pins, do that for both pumps.

step 3) connect usb port of arduino to computer and load the program

step 4) disconnect the arduino completely from computer

step 5) connect the ventilator circuit tube inhale to pump on relay 1 for blower side (side)

step 6) connect the ventilator circuit tube exhale to pump on relay 2 for suction side (top)

you can put this whole thing in a box or container with lid to lower the sound, make sure you have some holes for power cord, fresh air intake, and exhaust air if you close it up.


to turn on
step 1) connect 9v battery to arduino or use a 7-12vdc power supply

step 2) plug in the 2 pumps power plugs into live outlet of the power strip

step 3) turn on the power strip

Parts:  (total should be about $50 USD)

https://www.amazon.com/gp/product/B073DYD97C  x 1

https://www.amazon.com/gp/product/B07F7Y55Z7  x  1 

https://www.amazon.com/gp/product/B07F3FTCXB  x 2

https://www.vitalitymedical.com/cardinalhealth-adult-single-limb-portable-ventilator-circuit.html x 1 

a power strip

a box / container

You can switch to compatible components

For example, the arduino boards and relay shield are all the same despite the brands, as long as they are made to fit.
The pumps spec are very similar between anything in that price range
the ventilator circuits pretty much all the same, one hose for inhale, one for exhale, one Y adapter

