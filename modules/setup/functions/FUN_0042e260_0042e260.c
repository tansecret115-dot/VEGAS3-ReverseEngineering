/* Module: Setup.exe
   Function: FUN_0042e260
   Address: 0042e260
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042e260(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0044f388 == 0) {
    DAT_0044f388 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_0044f384 = 1;
      return 1;
    }
  }
  return DAT_0044f384;
}


