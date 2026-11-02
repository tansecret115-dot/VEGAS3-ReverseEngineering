/* Module: sfxpfx2.dll
   Function: FUN_5c8d6090
   Address: 5c8d6090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8d6090(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5c8efc70 == 0) {
    DAT_5c8efc70 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5c8efc6c = 1;
      return 1;
    }
  }
  return DAT_5c8efc6c;
}


