#include <stdio.h>

int main() {
  int pilihan;
  long int desimal, oktal, biner;
  char str[100];

  // Menampilkan menu pilihan
  printf("Pilih jenis konversi:\n");
  printf("1. Desimal ke Biner\n");
  printf("2. Biner ke Desimal\n");
  printf("3. Desimal ke Oktal\n");
  printf("4. Oktal ke Desimal\n");
  printf("Masukkan pilihan Anda: ");
  scanf("%d", &pilihan);

  switch (pilihan) {
    case 1:
      // Konversi Desimal ke Biner
      printf("Masukkan bilangan desimal: ");
      scanf("%ld", &desimal);
      biner = 0;
      int i = 1;
      while (desimal != 0) {
        biner += (desimal % 2) * i;
        desimal /= 2;
        i *= 10;
      }
      printf("Bilangan binernya adalah: %ld\n", biner);
      break;

    case 2:
      // Konversi Biner ke Desimal
      printf("Masukkan bilangan biner: ");
      scanf("%s", str);
      desimal = 0;
      int j = 0, len = strlen(str);
      for (i = len - 1; i >= 0; i--) {
        desimal += (str[i] - '0') * pow(2, j);
        j++;
      }
      printf("Bilangan desimalnya adalah: %ld\n", desimal);
      break;

    case 3:
      // Konversi Desimal ke Oktal
      printf("Masukkan bilangan desimal: ");
      scanf("%ld", &desimal);
      oktal = 0;
      i = 1;
      while (desimal != 0) {
        oktal += (desimal % 8) * i;
        desimal /= 8;
        i *= 10;
      }
      printf("Bilangan oktalnya adalah: %ld\n", oktal);
      break;

    case 4:
      // Konversi Oktal ke Desimal
      printf("Masukkan bilangan oktal: ");
      scanf("%s", str);
      desimal = 0;
      j = 0;
      len = strlen(str);
      for (i = len - 1; i >= 0; i--) {
        desimal += (str[i] - '0') * pow(8, j);
        j++;
      }
      printf("Bilangan desimalnya adalah: %ld\n", desimal);
      break;

    default:
      printf("Pilihan tidak valid!");
  }

  return 0;
}
