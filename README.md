Hydroponics-farming-using-STM32

Hydroponics nutrient mixing system based on STM32 is a device to produce 
hydroponic nutrient solution, according to individual plant nutrient recipe, automatically by 
using individual dosing pump for each fertilizer concentrate. Nutrient recipes and fertilizer 
database are stored in Mysql. The system will compute the recipe and translate to the 
required individual concentrates’ volume, then send command to dosing pump controller. 
Dosing pump controller will then send command to 10 dosing pump motor drivers to pump each 
fertilizer concentrate according to the volume measurement to produce the nutrient solution. The 
core of dosing pump controller is a 32bit microcontroller development board Nucleo-F446RE 
from ST Microelectronic, ample to control 10 dosing pump drivers. Each of the dosing pumps
will be equipped with fertilizer concentration with maximum solubility. The system has user 
friendly graphical user interface using 7” graphics LCD. To produce specific solution strength, 
system can fill in water through water pump and use water level sensor to measure the volume, 
this process is controlled by proportional controller. The output of the mixing process can be
hydroponic A and B mixed concentrate solution, or direct solution. For concentrate solution user 
must dilute A and B concentrate with water. The system has been tested 9 times and produce 
maximum 9% error. Water filling system accuracy test for 5-liter water volume with Kp 10000 
has 2.784% error.
