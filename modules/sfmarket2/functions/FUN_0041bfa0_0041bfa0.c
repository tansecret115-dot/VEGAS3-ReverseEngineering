/* Module: sfmarket2.dll
   Function: FUN_0041bfa0
   Address: 0041bfa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041bfa0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004aae04 == 0) {
    DAT_004aae04 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_004aae00 = 1;
      return 1;
    }
  }
  return DAT_004aae00;
}


