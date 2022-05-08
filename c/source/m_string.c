#include"C:\Users\DELL\Desktop\c\header\m_string.h"
#include<stdio.h>
void chenvitri (int a[], int b[],int vitri, int m, int d) //c,d la so luong cua mang
{
    int c[m+d];
    for(int i=m+d-1;i > (vitri+b-1);i--)
    {
       int h=m-1;
        c[i]=a[h];
        h--;
    }
    for (int i= vitri; i< (vitri+b-1);i++)
    {
       int h=0;
        c[i]=b[h];
        h++;
    }
    for(int i=0 ;i < vitri ;i++ )
    {
        int h=0;
        c[i]=a[h];
        h++;
    }
    for(int i=0 ;i < (m+d) ;i++ )
    {
        printf("%d" ,c[i]);
    }
}
int sosanh(int a[], int size_a, int b[], int size_b)
{
    if(size_a != size_b) return 0;
    else
    for(int i = 0; i < size_a; i++)
    {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}
