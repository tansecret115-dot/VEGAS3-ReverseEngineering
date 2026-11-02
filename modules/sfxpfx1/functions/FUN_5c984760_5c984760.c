/* Module: sfxpfx1.dll
   Function: FUN_5c984760
   Address: 5c984760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c984760(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5c99f018 == 0) {
    DAT_5c99f018 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5c99f014 = 1;
      return 1;
    }
  }
  return DAT_5c99f014;
}


