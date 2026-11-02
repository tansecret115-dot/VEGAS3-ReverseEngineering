/* Module: sfconfigmgr.dll
   Function: FUN_00409ff0
   Address: 00409ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00409ff0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00423368 == 0) {
    DAT_00423368 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_004230a8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_004230a8;
}


