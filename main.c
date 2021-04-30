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
#include "Activity3.h"



int main(void)
{

    defining_ports();
    InitADC();
    PWM_PERIPHERALS();
    uint16_t temp = 0;
    char temp_out;
    while(1){

        if (SEATED_N_HEATERON){
                /**
                 * @brief SEATED AND SWITCHED ON THE HEATER
                 *
                 */
                LED_ON;
                temp = ReadADC(0);
                temp_out = temp_output(temp);

        }

        else{
            /**
             * @brief NOT SEATED
             *
             */
            LED_OFF;
        }
    }


    return 0;
}
