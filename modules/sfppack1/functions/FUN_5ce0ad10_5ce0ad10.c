/* Module: sfppack1.dll
   Function: FUN_5ce0ad10
   Address: 5ce0ad10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ce0ad10(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5ce2a098 == 0) {
    DAT_5ce2a098 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5ce2a094 = 1;
      return 1;
    }
  }
  return DAT_5ce2a094;
}


