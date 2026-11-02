/* Module: vfplugs.dll
   Function: FUN_00417970
   Address: 00417970
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00417970(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00494d10 == 0) {
    DAT_00494d10 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00494a50 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00494a50;
}


