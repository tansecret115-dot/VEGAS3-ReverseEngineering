/* Module: vegas30.exe
   Function: FUN_00606c30
   Address: 00606c30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00606c30(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0065f5f0 == 0) {
    DAT_0065f5f0 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_0065f5ec = 1;
      return 1;
    }
  }
  return DAT_0065f5ec;
}


