#ifndef _ACTIVITY_1_H_
#define _ACTIVITY_1_H_

#define SEATED_N_HEATERON ((!(PIND&(1<<PD0)))&&(!(PIND&(1<<PD3))))
#define LED_ON (PORTB |=(1<<PB1))
#define LED_OFF (PORTB &=~(1<<PB1))
void defining_ports(void);


#endif
