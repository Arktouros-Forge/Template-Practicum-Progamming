#include "include/exit_screen.h"
#include "include/program_header.h"
#include "include/team_card.h"

#include <stdio.h>

int main(void) {
  tampilkan_kartu_kelompok_static();

  tampilkan_header_program_dynamic("Konversi Suhu");

  float suhu_celsius;

  printf("Masukkan suhu Celsius: ");
  scanf("%f", &suhu_celsius);

  printf("Suhu: %.2f Celsius\n", suhu_celsius);

  tampilkan_logo();

  return 0;
}
