#include "../include/program_header.h"

#include <stdio.h>
#include <string.h>

#define LEBAR_HEADER 60

void tampilkan_header_program_static(void) {
  printf("\n");

  printf("============================================================\n");
  printf("                       Konversi Suhu\n");
  printf("============================================================\n");

  printf("\n");
}

void tampilkan_header_program_dynamic(const char *judul) {
  int panjang_judul = strlen(judul);
  int jarak_kiri = (LEBAR_HEADER - panjang_judul) / 2;

  printf("\n");

  printf("============================================================\n");

  for (int i = 0; i < jarak_kiri; i++) {
    printf(" ");
  }

  printf("%s\n", judul);

  printf("============================================================\n");

  printf("\n");
}
