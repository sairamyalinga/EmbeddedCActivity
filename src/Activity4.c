#include<avr/io.h>
#include"Activity4.h"

void InitUSART(uint16_t value){
    //Setting Baud rate
    UBRR0L = value;
    UBRR0H = (value>>8) & 0x00ff;
    UCSR0C =(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);
    //Enable receiver transmitter
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);
}

char Readchar()
{
    //wait untill data is available
    
    while(!(UCSR0A & (1<<RXC0)))
    {
       // reading from receiver
    }
    return UDR0;
}
void Writechar(char data){
    //wait untill transmitter is ready
    while(!(UCSR0A & (1<<UDRE0))){

    }
    //write to udr
    UDR0 = data;

}