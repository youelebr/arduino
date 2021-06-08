# Potentiometer + 1-LED
In this example we light a led according to the potentiometer value.

# Connexions
For HW connexions:<br />
 **LEDS**   |  **board**<br />
 LED+      <->  GND <br />
 LED-      <->  9   <br />
 POT-T1    <->  GND <br />
 POT-Wiper <->  A0  <br />
 POT-T2    <->  +   <br />
 
![simulator](img/pot_led_circuit.png)
![IRL](img/full.jpg)

## HW info
Long branch of the led is the positive side. The negative branch is connected to a 220ohm resistance before to be plugged to the arduino board.
![Led details](img/leddetails.jpg)