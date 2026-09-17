#ifndef TEAM_CARD_H
#define TEAM_CARD_H

typedef struct {
  const char *nama;
  const char *nim;
} Anggota;

void tampilkan_kartu_kelompok_static(void);
void tampilkan_kartu_kelompok_dynamic(void);

#endif
