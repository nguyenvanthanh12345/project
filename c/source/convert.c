#include"C:\Users\DELL\Desktop\c\header\convert.h"
#include <stdio.h>
void nhiphan(int dec) // thap phan khong qua 4095
{
    int count = 0;
    int bin[8];
    while(dec != 0)
    {      
        bin[count] = dec % 2;
        count++;
        dec = dec / 2;
    }
    for(int i = count - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    printf("\n");
        
}
void chuyendoihex(int dec)
{
    int count = 0;
    char hex[2];
    while(dec != 0)
    {
        int temp = 0;
        temp = dec % 16;
        if(temp < 10) hex[count] =  temp + 48;
        else hex[count] =  temp + 55;
        count++;
        dec = dec / 16;
    }
    for(int i = count - 1; i >= 0; i --)
    {
        printf("%c", hex[i]);
    }
    printf("\n");
}