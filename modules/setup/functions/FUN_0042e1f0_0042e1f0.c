/* Module: Setup.exe
   Function: FUN_0042e1f0
   Address: 0042e1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e1f0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0044f380 == 0) {
    DAT_0044f380 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_0044f37c = 1;
      return 1;
    }
  }
  return DAT_0044f37c;
}


