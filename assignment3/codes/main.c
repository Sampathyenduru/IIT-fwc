#include <avr/io.h>
#include <stdbool.h>
#include <util/delay.h>
int main (void)
{

 bool a=0,b=0,c=0,d=0,e=0,f=0,y=0;
 DDRB =  0b00100000;  // 13 pin as output 
 DDRD =  0b00000011;
 PORTD = 0b11111100;   // 2,3,4,5,6,7 as inputs
 

while(1)
{  

f = (PIND & (1 << PIND7)) == (1 << PIND7);
e = (PIND & (1 << PIND6)) == (1 << PIND6);
d = (PIND & (1 << PIND5)) == (1 << PIND5);
c = (PIND & (1 << PIND4)) == (1 << PIND4);
b = (PIND & (1 << PIND3)) == (1 << PIND3);
a = (PIND & (1 << PIND2)) == (1 << PIND2);
y=((a)&(!e)&(!f))|((b)&(!e)&(f))|((c)&(e)&(!f))|((d)&(e)&(f));
PORTB |= (y <<5);
}
return 0;
}

