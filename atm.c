#include "atm.h"

unsigned int get_money(unsigned short int amount)
{
  int notes[] = {2000, 500, 100, 50, 20, 10, 5, 1};
  unsigned int notes_count = 0x00;
  if(amount>31999)
    return notes_count;
  for (int index = 0; index < 8; index++)
  {
    notes_count = notes_count << 4;
    notes_count = notes_count | (amount / notes[index]);
    amount = amount % notes[index];
  }
  return notes_count;
};

