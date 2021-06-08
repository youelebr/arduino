# Screen LCD info
We use a LCD screen with 16x2 characteres. 

# Connexions
For HW connexions:<br />
 **Screen** |  **board**<br />
 VSS       <->  GND <br />
 VDD       <->  5v  <br />
 VO        <->  Potentiometer<br />
 RS        <->  12  <br />
 RW        <->  GND <br />
 E         <->  11  <br />
 D0        <->  N/A <br />
 D1        <->  N/A <br />
 D2        <->  N/A <br />
 D3        <->  N/A <br />
 D4        <->  5   <br />
 D5        <->  4   <br />
 D6        <->  3   <br />
 D7        <->  2   <br />
 A         <->  res+<br />
 K         <->  GND <br />

## HW info
|Name| Description|
|VSS | Mass/GND|
|VDD | +5v|
|VO  | Contrast|
|RS  | Register Select: 0 to send commands (e.g. clean screen or set cursor position); 1 print text |
|RW  | Read/Write: 0 send information to screen | 1 read screen |
|E   | Enable: Set to 0 when data are send |
|D0-7|Data bits|
|A   | Backlighting anode|
|K   | backlight cathode|

RW is set to the mass because we don't read what is on the screen.
VO is plugged to the potentiometer to adjust the contrast of the screen, but it's optional.

![LCD display circuit](img/screen_lcd_circuit.png)
