#include<stdio.h>
#include"..\header\calc.h"
#include"..\header\convert.h"
#include"..\header\m_string.h"
int main(int argc, char const *argv[])
{
    int a[20]={1,2,3,4,5,6,7,8,9,0,10,11,12,13,14,15,16,17,18,19};
    int tongn, max, min, b[20]={1,2,3,4,5,6,7,8,9,0,10,11,12,13,14,15,16,17,18,19};
    tongn = tong(a, 20);
    max = lonnhat(a,  20);
    min = nhonhat(a, 20 );
    printf(" tong: %d\n",tongn);
    printf("lon nhat: %d\n" ,max);
    printf("nha nhat ; %d\n",min);
    vitri( a, 2 , 20);
    nhiphan(255);
    chuyendoihex(255);
    if(sosanh(a,20,b,20))
    {
        printf("bang nhau");
    }
    chenvitri(a,b,3,20,20);
}