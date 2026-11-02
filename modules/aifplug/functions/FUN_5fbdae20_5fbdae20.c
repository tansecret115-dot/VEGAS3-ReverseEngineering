/* Module: aifplug.dll
   Function: FUN_5fbdae20
   Address: 5fbdae20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbdae20(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5fc09ba8 == 0) {
    DAT_5fc09ba8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5fc098e8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5fc098e8;
}


