//by Natalia Rissi
#include <stdio.h>
#include <windows.h>
main()
{
	Beep(1000,500);	
	Beep(500,500);	
	Beep(1000,500);	
	Beep(1500,500);	
	Beep(2000,500);		
	Beep(1500,500);	
	Beep(1000,500);			
	Beep(500,500);		
	Beep(250,500);		
	Beep(500,200);
	Beep(250,500);	
	Beep(500,500);					
	Beep(750,200);		
}

a do 261
s re 293
d mi 329
f fa 349
g sol 391
h la 440
j si 494

#include <stdio.h>
#include <windows.h>
#include <conio.h>
main()
{
	char n;
	n=getch();
	
	switch(n)
 	{
		case 'a': Beep(261,500);
				break;	
		case 's': Beep(293,500);	
				break;		
		case 'd': Beep(329,500);	
				break;		
		case 'f': Beep(349,500);	
				break;		
		case 'g': Beep(391,500);	
				break;			
		case 'h': Beep(440,500);
				break;			
		case 'j': Beep(494,500);
	}
}


#include <stdio.h>
#include <windows.h>
#include <conio.h>
main()
{
	char n;
 do
 {
	n=getch();
	switch(n)
 	{
		case 'a': Beep(261,500);
				break;	
		case 's': Beep(293,500);	
				break;		
		case 'd': Beep(329,500);	
				break;		
		case 'f': Beep(349,500);	
				break;		
		case 'g': Beep(391,500);	
				break;			
		case 'h': Beep(440,500);
				break;			
		case 'j': Beep(494,500);
		
	}
 } while(n!='m'); //teclar m sai fora
 
}
