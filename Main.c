//CS-2118
//Galymzhan Beketay, Ernar Yes, Tamerlan Samatov.

#include <reg51.h> 

sbit floorup1 = P1^0;													//Sbits for floor call
sbit floorup2 = P1^1;												
sbit floorup3 = P1^2;
sbit floorup4 = P1^3;
sbit floorup5 = P1^4;
sbit floorup6 = P1^5;
sbit floorup7 = P1^6;
sbit floorup8 = P1^7;

sbit floorselect1 = P3^0;											//Sbits for floor selection
sbit floorselect2 = P3^1;
sbit floorselect3 = P3^2;
sbit floorselect4 = P3^3;
sbit floorselect5 = P3^4;
sbit floorselect6 = P3^5;
sbit floorselect7 = P3^6;
sbit floorselect8 = P3^7;

void delay(unsigned int a);    		// function for delay
void display(unsigned int a); 		// function for number display
void display_led(unsigned int a);	// Function for led display
void floor_call();								// Floor call function
void floor_select();							// Floor select function
unsigned char global = 1;					// This is global variable for floor calling
unsigned char d;		  						// This defines each floor at the beginning 

void main(void) { 
		while(1){
		floor_call();
		floor_select();
		}	
	
 } 
  
void delay(unsigned int itime)
 { 
  unsigned int i, j;      
  for(i=0;i<itime;i++)     
   for(j=0;j<500;j++) ;    
 } 
 
void display(unsigned int a)  //function named display() with unsigned integer a
 { 
  switch (a) 									//case block assigns a specific hexadecimal value
   { 
   case 1: 	
    P0 = 0x79; 								//If a is equal to 1, the P0 register is assigned the hexadecimal value 0x79, which show in display 1.
    break; 										// The another cases works same
   case 2: 
    P0 = 0x24; 
    break; 
   case 3: 
    P0 = 0x30; 
    break; 
   case 4: 
    P0 = 0x19; 
    break; 
   case 5: 
    P0 = 0x12; 
    break; 
   case 6: 
    P0 = 0x02; 
    break; 
   case 7: 
    P0 = 0x78; 
    break; 
   case 8: 
    P0 = 0x00; 								//If a is equal to 8, the P0 register is assigned the hexadecimal value 0x00.
    break; 
   } 
 }
 
 void display_led(unsigned int a){				//declaring display_led no return function with integer argument
 
            switch (a) {
                case 1:								// finding matching cases with argument a, going through cases with matching case numbers
                    P2 = ~(1 << 0);   // Turn on the 1st LED, shifting left by 0 positions with NOT operation which is changing each bit  
                    break;						// stopping the program
                case 2:								  
                    P2 = ~(1 << 1);   // Turn on the 2nd LED, shifting left by 1 positions with NOT operation which is changing each bit
                    break;
                case 3:
                    P2 = ~(1 << 2);   // Turn on the 3rd LED, shifting left by 2 positions with NOT operation which is changing each bit  
                    break;
                case 4:
                    P2 = ~(1 << 3);   // Turn on the 4th LED, shifting left by 3 positions with NOT operation which is changing each bit 
                    break;
                case 5:
                    P2 = ~(1 << 4);   // Turn on the 5th LED, shifting left by 4 positions with NOT operation which is changing each bit  
                    break;
                case 6:
                    P2 = ~(1 << 5);   // Turn on the 6th LED, shifting left by 5 positions with NOT operation which is changing each bit  
                    break;
                case 7:
                    P2 = ~(1 << 6);   // Turn on the 7th LED, shifting left by 6 positions with NOT operation which is changing each bit  
                    break;
                case 8:
                    P2 = ~(1 << 7);   // Turn on the 8th LED, shifting left by 7 positions with NOT operation which is changing each bit  
                    break;
            }

            
}




void floor_select(){
			

unsigned char x = 8;	// this is our all floors
		
		
		
		if(floorselect1 == 1){								// As you can see It simillar for the floor call function, cause when someone choose the floor from
					d = 1;													// the inside of elevator it delivers him to the selected floor, logic same and we decided to do not
				if(d > global){										// change them into difficult one, the logic explanation you can see in fucntion comments below.
					for(;global<=d;global++){
							delay(1);										
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
		}
		
		if(floorselect2 == 1){
					d = 2;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
			
		}
		if(floorselect3 == 1){
					d = 3;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
			
		}
		if(floorselect4 == 1){
					d = 4;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
		}
		if(floorselect5 == 1){
					d = 5;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
			
		}
		if(floorup6 == 1){
						d = 6;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
				
		}
		if(floorselect7 == 1){
					d = 7;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
		}
		
		if(floorselect8 == 1){
					d = 8;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
		}


}


void floor_call(){				// function for calling elevator, this function calls elevator to each floor
		
		unsigned char x = 8;	// this is our all floors
		
		
		
		if(floorup1 == 1){										//All of this conditions works same, I just explain this one for example, 
					d = 1;													//If this d more than global variable that equal for 1, then first loop works,
				if(d > global){										//There d more than global and global at the end equals to the current floor,
					for(;global<=d;global++){				//It means that elevator goes up, but to go down we used another condition.
							delay(1);										//Where d less than global, then it goes global-- and display with the leds go down. In video defense I showed how it works.
							display(global);
							display_led(global);
						}
					global--;												// this needs to save our floor position, in this case we go up and we decrement global
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;												// this needs to save our floor position, in this case we go down and we increment global
				}
		}
		
		if(floorup2 == 1){
					d = 2;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
			
		}
		if(floorup3 == 1){
					d = 3;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
			
		}
		if(floorup4 == 1){
					d = 4;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
		}
		if(floorup5 == 1){
					d = 5;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
			
		}
		if(floorup6 == 1){
						d = 6;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
				
		}
		if(floorup7 == 1){
					d = 7;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
		}
		
		if(floorup8 == 1){
					d = 8;
				if(d > global){
					for(;global<=d;global++){
							delay(1);
							display(global);
							display_led(global);
						}
					global--;
				}
				else if (d < global){
					for(;d<=global;global--){
							delay(1);
							display(global);
							display_led(global);
						}
					global++;
				}
		}
}