/* Module: sfppack2.dll
   Function: FUN_5cd49c00
   Address: 5cd49c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd49c00(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cd764b8 == 0) {
    DAT_5cd764b8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5cd764b4 = 1;
      return 1;
    }
  }
  return DAT_5cd764b4;
}


