/* Module: wmfplug2.dll
   Function: FUN_00421230
   Address: 00421230
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00421230(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0048a0c8 == 0) {
    DAT_0048a0c8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00489e08 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00489e08;
}


