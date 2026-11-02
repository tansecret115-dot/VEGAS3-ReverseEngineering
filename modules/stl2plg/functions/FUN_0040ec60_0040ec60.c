/* Module: stl2plg.dll
   Function: FUN_0040ec60
   Address: 0040ec60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040ec60(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004738b8 == 0) {
    DAT_004738b8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_004735f8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_004735f8;
}


