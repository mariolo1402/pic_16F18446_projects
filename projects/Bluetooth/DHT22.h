/*
* Project Name: OLED_DHT22
* File: DHT22.h
* Description: header file to read sensor DHT22 
* Author: Gavin Lyons.
* Complier: xc8 v2.10 compiler
* PIC: PIC16F18346
* IDE:  MPLAB X v5.30
* Created: Feb 2020
* Description: See URL for full details.
* URL: https://github.com/gavinlyonsrepo/pic_16F18346_projects
*/

#ifndef DHT22_H
#define DHT22_H

#define TRIS_DHT TRISCbits.TRISC2 
#define PORT_DHT  PORTCbits.RC2 
#define LAT_DHT LATCbits.LATC2

//Function to init GPIO of sensor
void DHT22_init(void);

//Function to read sensor returns a uint8_t 3 possible values
//1 :  data received Good result
//2 :  data received Checksum bad
//3 :  no response from sensor 
uint8_t DHT22_read(int16_t *dht_temperature, int16_t *dht_humdity);

#endif