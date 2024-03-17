#include <stdio.h>

int main(){
    int tahun;
    char huruf;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    if(tahun != huruf && tahun >= 1000 && tahun <= 9999){
        if( (tahun %4 == 0 && tahun %100 != 0) || (tahun %400 == 0) ){

             printf("ini adalah tahun kabisat");
        }else{
             printf("ini bukan tahun kabisat");
            }
    }else{
        printf("Masukkan kembali tahunnya!");
    }
    return 0;
}