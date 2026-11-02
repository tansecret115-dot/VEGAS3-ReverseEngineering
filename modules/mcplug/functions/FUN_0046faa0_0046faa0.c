/* Module: mcplug.dll
   Function: FUN_0046faa0
   Address: 0046faa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046faa0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004ae43c == 0) {
    DAT_004ae43c = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_004ae438 = 1;
      return 1;
    }
  }
  return DAT_004ae438;
}


