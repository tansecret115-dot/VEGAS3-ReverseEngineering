/* Module: oggplug.dll
   Function: FUN_0040c120
   Address: 0040c120
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040c120(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00511130 == 0) {
    DAT_00511130 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00510e70 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00510e70;
}


