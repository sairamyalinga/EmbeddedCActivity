

#include <avr/io.h>
#include<util/delay.h>
/**
 * @brief 
 * B0 is set as output
 * D0 is set as output
 * D3 is set as output
 * @return int 
 */
int main(void)
{

    DDRB |= (1<<PB0); //Setting B0 for LED
    DDRD &= ~(1<<PD0);//Clear D0 make it as input
    PORTD |=(1<<PD0);//Set the bit
    DDRD &= ~(1<<PD3);//Clear D3 make it as input
    PORTD |=(1<<PD3);//Set the bit
    while(1){

        if(!(PIND&(1<<PD0))){

            if (!(PIND&(1<<PD3))){
                PORTB |=(1<<PB0);

            }
            else{
            PORTB &=~(1<<PB0);
        }
        }
        else{
            PORTB &=~(1<<PB0);
        }
    }


    return 0;
}