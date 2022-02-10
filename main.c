
//18320041
#include <stdio.h>
#include <stdlib.h>


struct siswa{
 char nama[20];
 int nim[10];
 int kehadiran[20];
 };

int main (void)
{
    int i;
    struct siswa kls[5];
    printf("=====Masukan Data Mahasiswa \n\n");

    for(i=0;i<5;i++)
    {
        printf("No. %i \n",i+1);
        printf("Nama = "); scanf("%s",&kls[i].nama);
        printf("Nim = "); scanf("%i",&kls[i].nim);
        printf("Kehadiran="); scanf("%i",&kls[i].kehadiran);
    }
    printf("Mahasiswa yang kurang dari 80 persen adalah ");

    for(i=0;i<5;i++)
    {
        if ((kls[i].kehadiran)<80){
            printf("%d. %s//%d//%.0f\n", i+1,kls[i].nama,kls[i].nim,kls[i].kehadiran);}
    }

}


