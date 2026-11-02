/* Module: pncrt.dll
   Function: clock
   Address: 7802df40
   Source: Ghidra pseudocode (Stage 10 batch) */


clock_t __cdecl clock(void)

{
  int local_c;
  uint local_8;
  
                    /* 0x2df40  589  clock */
  ftime(&local_c);
  return ((local_8 & 0xffff) + (local_c - DAT_780426c8) * 1000) - (DAT_780426cc & 0xffff);
}


