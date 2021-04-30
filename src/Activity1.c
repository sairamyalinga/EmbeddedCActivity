#include<avr/io.h>
#include "Activity1.h"
void defining_ports(void){    
    DDRB |= (1<<PB3);/**
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
}
