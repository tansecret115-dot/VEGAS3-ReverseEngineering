/* Module: mcplugrw.dll
   Function: FUN_004180d0
   Address: 004180d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004180d0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004a9634 == 0) {
    DAT_004a9634 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_004a9630 = 1;
      return 1;
    }
  }
  return DAT_004a9630;
}


