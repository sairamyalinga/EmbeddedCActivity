#ifndef _ACTIVITY_1_H_
#define _ACTIVITY_1_H_

#define SEATED ((!(PIND&(1<<PD0)))&&(!(PIND&(1<<PD3))))

void defining_ports(void);


#endif
