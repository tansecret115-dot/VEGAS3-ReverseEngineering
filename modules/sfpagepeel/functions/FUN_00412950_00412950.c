/* Module: sfpagepeel.dll
   Function: FUN_00412950
   Address: 00412950
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00412950(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0047dc88 == 0) {
    DAT_0047dc88 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_0047d9c8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_0047d9c8;
}


