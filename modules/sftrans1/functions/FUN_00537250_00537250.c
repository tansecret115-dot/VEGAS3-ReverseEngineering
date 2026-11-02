/* Module: sftrans1.dll
   Function: FUN_00537250
   Address: 00537250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00537250(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0062243c == 0) {
    DAT_0062243c = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_00622438 = 1;
      return 1;
    }
  }
  return DAT_00622438;
}


