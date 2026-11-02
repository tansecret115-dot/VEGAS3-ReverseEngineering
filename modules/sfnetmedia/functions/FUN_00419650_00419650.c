/* Module: sfnetmedia.dll
   Function: FUN_00419650
   Address: 00419650
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00419650(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00441ff8 == 0) {
    DAT_00441ff8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00441d38 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00441d38;
}


