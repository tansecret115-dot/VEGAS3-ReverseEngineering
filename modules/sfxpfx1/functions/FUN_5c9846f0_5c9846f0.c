/* Module: sfxpfx1.dll
   Function: FUN_5c9846f0
   Address: 5c9846f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c9846f0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5c99f010 == 0) {
    DAT_5c99f010 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5c99f00c = 1;
      return 1;
    }
  }
  return DAT_5c99f00c;
}


