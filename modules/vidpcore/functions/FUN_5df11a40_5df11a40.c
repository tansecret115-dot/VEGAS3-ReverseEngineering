/* Module: vidpcore.dll
   Function: FUN_5df11a40
   Address: 5df11a40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df11a40(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5dff1aa4 == 0) {
    DAT_5dff1aa4 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5dff1aa0 = 1;
      return 1;
    }
  }
  return DAT_5dff1aa0;
}


