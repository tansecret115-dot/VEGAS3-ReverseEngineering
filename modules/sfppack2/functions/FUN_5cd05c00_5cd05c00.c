/* Module: sfppack2.dll
   Function: FUN_5cd05c00
   Address: 5cd05c00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cd05c00(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cd67cd0 == 0) {
    DAT_5cd67cd0 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5cd67a10 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5cd67a10;
}


