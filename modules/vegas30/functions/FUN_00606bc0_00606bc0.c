/* Module: vegas30.exe
   Function: FUN_00606bc0
   Address: 00606bc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00606bc0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0065f5e8 == 0) {
    DAT_0065f5e8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_0065f5e4 = 1;
      return 1;
    }
  }
  return DAT_0065f5e4;
}


