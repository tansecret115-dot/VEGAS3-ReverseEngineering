/* Module: sfppack3.dll
   Function: FUN_5cc4c140
   Address: 5cc4c140
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cc4c140(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cc98598 == 0) {
    DAT_5cc98598 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5cc982d8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5cc982d8;
}


