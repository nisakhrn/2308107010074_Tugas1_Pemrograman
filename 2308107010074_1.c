#include <stdio.h>

int main() {
  int pilihan;
  int desimal, biner, oktal;

  printf("Pilih jenis konversi:\n");
  printf("1. Desimal ke Biner\n");
  printf("2. Biner ke Desimal\n");
  printf("3. Desimal ke Oktal\n");
  printf("4. Oktal ke Desimal\n");
  printf("Masukkan pilihan: ");
  scanf("%d", &pilihan);

  // Memproses pilihan dan melakukan konversi
  switch (pilihan) {
    case 1:
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &desimal);
      biner = 0;
      int i = 1;
      while (desimal > 0) {
        biner += (desimal % 2) * i;
        desimal /= 2;
        i *= 10;
      }
      printf("Bilangan biner: %d\n", biner);
      break;
    case 2:
      printf("Masukkan bilangan biner: ");
      scanf("%d", &biner);
      desimal = 0;
      i = 1;
      while (biner > 0) {
        desimal += (biner % 10) * i;
        biner /= 10;
        i *= 2;
      }
      printf("Bilangan desimal: %d\n", desimal);
      break;
    case 3:
      printf("Masukkan bilangan desimal: ");
      scanf("%d", &desimal);
      oktal = 0;
      i = 1;
      while (desimal > 0) {
        oktal += (desimal % 8) * i;
        desimal /= 8;
        i *= 10;
      }
      printf("Bilangan oktal: %d\n", oktal);
      break;
    case 4:
      printf("Masukkan bilangan oktal: ");
      scanf("%d", &oktal);
      desimal = 0;
      i = 1;
      while (oktal > 0) {
        desimal += (oktal % 10) * i;
        oktal /= 10;
        i *= 8;
      }
      printf("Bilangan desimal: %d\n", desimal);
      break;
    default:
      printf("Pilihan tidak valid!");
  }

  return 0;
}
