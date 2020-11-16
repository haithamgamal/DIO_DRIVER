/*
 * dio_driver.h
 *
 *  Created on: Nov 16, 2020
 *      Author: HAITHAM
 */

#ifndef DIO_DRIVER_H_
#define DIO_DRIVER_H_
#define DDRC    (*((volatile unsigned char*)(0x34)))
#define PORTC    (*((volatile unsigned char*)(0x35)))
#define PINC    (*((volatile unsigned char*)(0x33)))
#define DDRA    (*((volatile unsigned char*)(0x3A)))
#define PORTA    (*((volatile unsigned char*)(0x3B)))
#define PINA    (*((volatile unsigned char*)(0x39)))
#define DDRB    (*((volatile unsigned char*)(0x37)))
#define PORTB    (*((volatile unsigned char*)(0x38)))
#define PINB    (*((volatile unsigned char*)(0x36)))
#define PORTD    (*((volatile unsigned char*)(0x32)))
#define DDRD    (*((volatile unsigned char*)(0x31)))
#define PIND    (*((volatile unsigned char*)(0x30)))
#define setbit(port,pin)  (port|=(1<<pin))
#define clearbit(port,pin)  (port &= ~(1<<pin))
#define togglebit(port,pin) (port ^=(1<<pin))
#define readbit(port,pin) (port&(1<<pin))


#endif /* DIO_DRIVER_H_ */
