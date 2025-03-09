**Report:**

The final project for the course is the creation of a simplified
elevator simulation system. So there we create the Multisim simulator
and how it wiil be look like.
![](media/image1.png){width="6.496527777777778in" height="4.875in"}(

So our Multisim looks like this and we write our code on the C language.
There we need 8051 MCU. After that we use Resistors and also add there
LEDS that will like light on, that show on the Display. We also add
there 2 switches. The circuit diagram shows a simplified elevator system
with 8 floors and one elevator. The elevator has a 7-segment display
that shows the current floor and 8 LED lamps that sequentially light to
convey the same information. We have 8 switches for elevator request, 8
switches for floor selection, 7- segment display for floor indication,
and 8 LEDs for additional visual indication of the floor. S, you need to
use 2 input ports, and 2 output ports. Remember that Port 0 requires
connection of extra pull-up resistors unlike Ports 1, 2, and 3.

The presented elevator system circuit diagram illustrates a simplified
model of an elevator system comprising eight floors and a single
elevator. The elevator incorporates a 7-segment display to indicate the
current floor and eight LED lamps that illuminate sequentially to convey
the same information in a different manner. The circuit\'s key
components include the 8051 microcontroller, responsible for controlling
the elevator\'s movement, the 7-segment display, and the LED lamps. The
button press detection circuit detects when a button is pressed,
enabling the system to respond to user input.

The circuit\'s operation commences with the 8051 microcontroller
awaiting a button press. Upon detecting a button press, the
microcontroller determines the corresponding floor. Subsequently, the
elevator\'s state is set to either moving up or moving down, depending
on the pressed button floor. The microcontroller then orchestrates the
elevator\'s movement, ensuring it reaches the desired floor.
Simultaneously, the 7-segment display and LED lamps are updated to
reflect the elevator\'s current position. Once the elevator reaches the
destination floor, the microcontroller halts its movement and
transitions the elevator state to idle.

This simplified elevator system circuit diagram serves as a foundation
for developing a functional elevator simulation system using Multisim.

A 7-segment display is a form of electronic display device that consists
of seven LEDs arranged in a rectangular fashion as shown below. Each LED
is called a segment that maps to one of the terminals A through G (pay
attention to the labels on the picture below). So the concept look like
this.

![](media/image2.png){width="6.396725721784777in"
height="2.0211154855643043in"}

So for every floor we have different HEX conversion, 0x9F, 0x25, 0x0D,
0x99, 0x49, 0x41, 0x1F, 0x01.

![](media/image3.jpeg){width="6.033573928258968in"
height="4.416666666666667in"}

Create a function called display The switch statement checks the value
of a and executes the corresponding case block. Each case block assigns
a specific hexadecimal value to the P0 register. If a is equal to 1, the
P0 register is assigned the hexadecimal value 0x79. So for the others,
also like this. If a is equal to 8, the P0 register is assigned the
hexadecimal value 0x00. The break statement at the end of each case
block prevents the execution of subsequent cases.

![Изображение выглядит как текст, снимок экрана, Шрифт Автоматически
созданное описание](media/image4.jpeg){width="6.496527777777778in"
height="2.6305555555555555in"}

The function floor_call is responsible for calling the elevator to
different floors. For each floor button pressed, it checks whether the
destination floor (d) is greater or less than the current floor
(global). Depending on the relationship between d and global, it either
increments or decrements global. During this process, the elevator\'s
position is updated, and the display and LED indicators are updated
accordingly. All of this conditions works same, I just explain. There d
more than global and global at the end equals to the current floor, It
means that elevator goes up, but to go down we used another condition.
Delay, Where d less than global, then it goes global\-- and display with
the leds go down. In video defense I showed how it works.

![](media/image5.jpeg){width="5.566666666666666in"
height="3.132998687664042in"}

The display_led function is designed to control LEDs based on the value
of the integer parameter a. The function uses a switch operator to
evaluate the value of a and execute the appropriate case, each
representing a different floor or LED.  
  
The function starts with void display_led(unsigned int a) , a non-return
function with an integer argument, which explains that display_led is a
function that does not return any value and takes an unsigned integer as
an argument.  
  
The switch statement (a) is used to test the value of a and move to the
appropriate case. Each housing contains a code to turn on a specific LED
associated with a specific floor number. Port P2 is controlled using
bitwise operations, specifically the bitwise NOT (\~) and left shift
(\<\<) operators.  
  
For example, in case 1: code P2 = \~(1 \<\< 0); used to turn on the 1st
LED. This involves shifting the binary value 1 to the left by 0
positions, resulting in the same binary value 00000001. A bitwise NOT
operation is then applied to flip each bit, and the result is assigned
to port P2. This process is repeated for each case, with the shift value
increasing for each subsequent case.  
  
The break syntax stops the program immediately after each occurrence,
indicating the end of the switch statement. Once a matching case is
found and executed, the switch statement exits, preventing subsequent
cases from executing.  
  
Essentially, the display_led function is a simple LED control mechanism
where the value of a determines which LED to turn on based on the floor
number. Bit operations manipulate specific bits on the P2 port,
effectively controlling the state of individual LEDs connected to the
microcontroller.
