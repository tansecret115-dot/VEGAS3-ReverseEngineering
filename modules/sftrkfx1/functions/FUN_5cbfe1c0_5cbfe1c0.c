/* Module: sftrkfx1.dll
   Function: FUN_5cbfe1c0
   Address: 5cbfe1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbfe1c0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cc17d70 == 0) {
    DAT_5cc17d70 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5cc17d6c = 1;
      return 1;
    }
  }
  return DAT_5cc17d6c;
}


