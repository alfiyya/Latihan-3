
//18320041
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 int k;

struct{
 char nama[20];
 int nim[10];
 int kehadiran[20];
 }dt[5];

printf("=====Masukan Data Mahasiswa \n\n");

for(k=0;k<5;k++)
 {
 printf("No. %i \n",k+1);
 printf("Nama = "); scanf("%s",&dt[k].nama);
 printf("Nim = "); scanf("%i",&dt[k].nim);
 printf("Kehadiran="); scanf("%i",&dt[k].kehadiran);
 
 if ((dt[k].kehadiran)<80){
    printf("%d. %s//%d//%.0f\n", k+1,dt[k].nama,dt[k].nim,dt[k].kehadiran);}}
 return(0);
 }
