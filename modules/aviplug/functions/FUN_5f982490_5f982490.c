/* Module: aviplug.dll
   Function: FUN_5f982490
   Address: 5f982490
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f982490(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f9f5c10 == 0) {
    DAT_5f9f5c10 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5f9f5950 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5f9f5950;
}


