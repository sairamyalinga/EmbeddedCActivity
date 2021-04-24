/**
 * @file main.c
 * @author sairamyalinga
 * @brief 
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

int main(void)
{

    DDRB |= (1<<PB0);/**
     * @brief B0 is set as output
     * 
     */

    DDRD &= ~(1<<PD0);/**
     * @brief  D0 is set as Input
     * 
     */
    PORTD |=(1<<PD0);/**
     * @brief Enable PULL UP for input port
     * 
     */

    DDRD &= ~(1<<PD3);/**
     * @brief D3 is set as input
     * 
     */

    PORTD |=(1<<PD3);/**
     * @brief Enable PULL UP for input port
     * 
     */
    while(1){

        if(!(PIND&(1<<PD0))){

            if (!(PIND&(1<<PD3))){
                /**
                 * @brief SEATED AND SWITCHED ON THE HEATER
                 * 
                 */
                PORTB |=(1<<PB0);

            }
            else{
                /**
                 * @brief SEATED BUT DIDN'T SWITCH ON THE HEATER
                 * 
                 */
            PORTB &=~(1<<PB0);
        }
        }
        else{
            /**
             * @brief NOT SEATED
             * 
             */
            PORTB &=~(1<<PB0);
        }
    }


    return 0;
}
