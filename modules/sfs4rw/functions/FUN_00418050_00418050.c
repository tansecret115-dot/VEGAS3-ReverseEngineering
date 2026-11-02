/* Module: sfs4rw.dll
   Function: FUN_00418050
   Address: 00418050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418050(void)

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


