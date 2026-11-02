/* Module: sfppack1.dll
   Function: FUN_5ce0ad80
   Address: 5ce0ad80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ce0ad80(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5ce2a0a0 == 0) {
    DAT_5ce2a0a0 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5ce2a09c = 1;
      return 1;
    }
  }
  return DAT_5ce2a09c;
}


