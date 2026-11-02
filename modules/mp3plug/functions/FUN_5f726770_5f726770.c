/* Module: mp3plug.dll
   Function: FUN_5f726770
   Address: 5f726770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f726770(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f75bb8c == 0) {
    DAT_5f75bb8c = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5f75bb88 = 1;
      return 1;
    }
  }
  return DAT_5f75bb88;
}


