#include "../include/team_card.h"

#include <stdio.h>

void tampilkan_kartu_kelompok_static(void) {
  printf("\n");

  printf("┌─ KELOMPOK 4 ───────────────────────────────────────────────┐\n");
  printf("│                                                            │\n");
  printf("│  NO.   NAMA                              NIM / NO.         │\n");
  printf("│  ───────────────────────────────────────────────────────── │\n");

  printf("│  01    I Ketut Kerta Mudiarta            260530911044      │\n");
  printf("│  02    I Putu Raditya Satya Ananta       260530911048      │\n");
  printf("│  03    Arya Bhayangkara Sangker          260530911083      │\n");
  printf("│  04    Ni Kadek Hardiana Wijayanti       260530911085      │\n");
  printf("│  05    Sarah Nafila Hawwa                260530911100      │\n");
  printf("│  06    Putu Riko Aditya Nugraha          260530911145      │\n");

  printf("│                                                            │\n");
  printf("└────────────────────────────────────────────────────────────┘\n");

  printf("\n");
  printf("Tekan ENTER untuk memulai...");
  getchar();

  printf("\033[2J\033[H");
}

void tampilkan_kartu_kelompok_dynamic(void) {
  const Anggota anggota[] = {
      {"I Ketut Kerta Mudiarta", "260530911044"},
      {"I Putu Raditya Satya Ananta", "260530911048"},
      {"Arya Bhayangkara Sangker", "260530911083"},
      {"Ni Kadek Hardiana Wijayanti", "260530911085"},
      {"Sarah Nafila Hawwa", "260530911100"},
      {"Putu Riko Aditya Nugraha", "260530911145"},
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
