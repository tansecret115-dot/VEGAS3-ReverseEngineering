/* Module: sftrans1.dll
   Function: FUN_005371e0
   Address: 005371e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005371e0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00622434 == 0) {
    DAT_00622434 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_00622430 = 1;
      return 1;
    }
  }
  return DAT_00622430;
}


