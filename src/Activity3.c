#include <avr/io.h>
#include<util/delay.h>


void PWM_PERIPHERALS(){
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10); // 64 prescaling
    DDRB|=(1<<PB1);

}
char temp_output (uint16_t ADCvalue)
{
    
    char temperature;

    if((ADCvalue>=0) && (ADCvalue<=200)){

        OCR1A = 205; //20% duty cycle (0.2*(max(1024)))
        temperature = 20;
        _delay_ms(30);
    }
    else if((ADCvalue>=210) && (ADCvalue<=500)){

        OCR1A = 410; //40% duty cycle
        temperature = 25;
       _delay_ms(30);
    }
    else if((ADCvalue>=510) && (ADCvalue<=700)){

        OCR1A = 717;//70% duty cycle
        temperature = 29;
        _delay_ms(30);
    }
    else if((ADCvalue>=710) && (ADCvalue<=1024)){

        OCR1A = 973; //95% duty cycle
        temperature = 33;
        _delay_ms(30);
    }
    else{
        OCR1A = 0; //0% output
        temperature = 0;
    }
    return temperature;
}