/* Module: sftrkfx1.dll
   Function: FUN_5cbfe230
   Address: 5cbfe230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbfe230(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cc17d78 == 0) {
    DAT_5cc17d78 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5cc17d74 = 1;
      return 1;
    }
  }
  return DAT_5cc17d74;
}


