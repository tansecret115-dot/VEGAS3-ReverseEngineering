/* Module: mp3plug.dll
   Function: FUN_5f726700
   Address: 5f726700
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f726700(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f75bb84 == 0) {
    DAT_5f75bb84 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5f75bb80 = 1;
      return 1;
    }
  }
  return DAT_5f75bb80;
}


