/* Module: sfmarket2.dll
   Function: FUN_0041c010
   Address: 0041c010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c010(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004aae0c == 0) {
    DAT_004aae0c = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_004aae08 = 1;
      return 1;
    }
  }
  return DAT_004aae08;
}


