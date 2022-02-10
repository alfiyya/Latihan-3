
//18320041
#include <stdio.h>
#include <stdlib.h>

struct mhs {
    char nama[10];
    int nim;
    int kehadiran;
};

struct mhs kls[5]= {{"putri",183,100},{"tita",123,80},{"adi",890,70},{"weli",154,96},{"adi",150,98},{"husna",367,87},{"ica",245,25},{"qori",745,90},{"uul",457,80},{"ali",368,75}};

int main(){
    if (kls.kehadiran < 80 ){
        printf ("%d %s\n",kls.nim,kls.nama,kls.kehadiran);
    }
return(0);
}
