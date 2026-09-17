#include "../include/team_card.h"

#include <stdio.h>

void tampilkan_kartu_kelompok_static(void) {
  printf("\n");

  printf("┌─ KELOMPOK 4 ───────────────────────────────────────────────┐\n");
  printf("│                                                            │\n");
  printf("│  NO.   NAMA                              NIM / NO.         │\n");
  printf("│  ───────────────────────────────────────────────────────── │\n");

  printf("│  01    John Doe                          260530911501      │\n");
  printf("│  02    Jane Smith                        260530911502      │\n");
  printf("│  03    Michael Johnson                   260530911503      │\n");
  printf("│  04    Emily Davis                       260530911504      │\n");
  printf("│  05    Robert Brown                      260530911505      │\n");
  printf("│  06    Sarah Wilson                      260530911506      │\n");

  printf("│                                                            │\n");
  printf("└────────────────────────────────────────────────────────────┘\n");

  printf("\n");
  printf("Tekan ENTER untuk memulai...");
  getchar();

  printf("\033[2J\033[H");
}

void tampilkan_kartu_kelompok_dynamic(void) {
  const Anggota anggota[] = {
      {"John Doe", "260530911501"},        {"Jane Smith", "260530911502"},
      {"Michael Johnson", "260530911503"}, {"Emily Davis", "260530911504"},
      {"Robert Brown", "260530911505"},    {"Sarah Wilson", "260530911506"},
  };

  const int jumlah_anggota = sizeof(anggota) / sizeof(anggota[0]);

  printf("\n");

  printf("┌─ Kelompok 4 ───────────────────────────────────────────────┐\n");
  printf("│                                                            │\n");
  printf("│  NO.   %-36s  %-14s│\n", "NAMA", "NIM / NO.");
  printf("│  ───────────────────────────────────────────────────────── │\n");

  for (int indeks = 0; indeks < jumlah_anggota; indeks++) {
    printf("│  %02d    %-36s  %-14s│\n", indeks + 1, anggota[indeks].nama,
           anggota[indeks].nim);
  }

  printf("│                                                            │\n");
  printf("└────────────────────────────────────────────────────────────┘\n");

  printf("\n");
  printf("Tekan ENTER untuk memulai...");
  getchar();

  printf("\033[2J\033[H");
  fflush(stdout);
}
