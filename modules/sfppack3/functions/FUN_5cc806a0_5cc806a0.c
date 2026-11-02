/* Module: sfppack3.dll
   Function: FUN_5cc806a0
   Address: 5cc806a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc806a0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cc9eb70 == 0) {
    DAT_5cc9eb70 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5cc9eb6c = 1;
      return 1;
    }
  }
  return DAT_5cc9eb6c;
}


