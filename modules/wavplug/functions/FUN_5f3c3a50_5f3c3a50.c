/* Module: wavplug.dll
   Function: FUN_5f3c3a50
   Address: 5f3c3a50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3c3a50(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f3e18a4 == 0) {
    DAT_5f3e18a4 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5f3e18a0 = 1;
      return 1;
    }
  }
  return DAT_5f3e18a0;
}


