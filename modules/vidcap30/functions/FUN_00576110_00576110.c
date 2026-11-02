/* Module: vidcap30.exe
   Function: FUN_00576110
   Address: 00576110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00576110(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00663530 == 0) {
    DAT_00663530 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_0066352c = 1;
      return 1;
    }
  }
  return DAT_0066352c;
}


