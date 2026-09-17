#include "../include/team_card.h"

#include <stdio.h>

void tampilkan_kartu_kelompok(void) {
  const Anggota anggota[6] = {{"I Ketut Kerta Mudiarta", "260530911044"},
                              {"Member Name", "260530911044"},
                              {"Member Name", "260530911044"},
                              {"Member Name", "260530911044"},
                              {"Member Name", "260530911044"},
                              {"Member Name", "260530911044"}};

  printf("\n");

  printf("┌─ Kelompok 4 ───────────────────────────────────────────────┐\n");
  printf("│                                                            │\n");
  printf("│  NO.   %-36s  %-14s│\n", "NAMA", "NIM / NO.");
  printf("│  ───────────────────────────────────────────────────────── │\n");

  for (int indeks = 0; indeks < 6; indeks++) {
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
