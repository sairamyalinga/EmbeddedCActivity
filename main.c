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
#include "Activity1.h"
#include "Activity2.h"

int main(void)
{

    void defining_ports();
    InitADC();
    uint16_t temp = 0;
    while(1){

        if (SEATED){
                /**
                 * @brief SEATED AND SWITCHED ON THE HEATER
                 *
                 */
                PORTB |=(1<<PB3);
                temp = ReadADC(0);

        }

        else{
            /**
             * @brief NOT SEATED
             *
             */
            PORTB &=~(1<<PB3);
        }
    }


    return 0;
}
