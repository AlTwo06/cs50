#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long long credit = get_long("number:");
    long long gecici = credit*10;
//KART GERÇELİK KONTROL ETME
    int toplam = 0;
    long long cift = 0;
    long long tek = credit;
    while(gecici > 10)
    {
        gecici = gecici/100;
        cift = 2 * (gecici%10);
        if(cift >= 10)
        {
            toplam = toplam + (cift%10) + (cift/10);
        }
        else
        {
            toplam = toplam + cift;
        }
        toplam = toplam + (tek%10);
        tek = tek/100;
    }
//HANGİ KART OLDUĞUNU BULMA
    if(toplam%10 == 0)
    {
        long long kontrol = credit;
        while (kontrol >= 100)
        {
            kontrol = kontrol / 10;
        }
        if(kontrol>=40 && kontrol<50)
        {
            printf("VİSA\n");
        }
        else if(kontrol == 34 | kontrol==37 )
        {
            printf("AMERİCAN EXPRESS\n");
        }
        else if(kontrol == 51 |kontrol == 52 |kontrol == 53 |kontrol == 54 |kontrol == 55)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

