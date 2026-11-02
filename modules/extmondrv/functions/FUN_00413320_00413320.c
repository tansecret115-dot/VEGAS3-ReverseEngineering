/* Module: extmondrv.dll
   Function: FUN_00413320
   Address: 00413320
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00413320(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0045b428 == 0) {
    DAT_0045b428 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_0045b168 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_0045b168;
}


