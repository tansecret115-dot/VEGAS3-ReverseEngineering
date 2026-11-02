/* Module: sfmarket2.dll
   Function: FUN_004267b0
   Address: 004267b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004267b0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004ab158 == 0) {
    DAT_004ab158 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_004aae98 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_004aae98;
}


