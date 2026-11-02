/* Module: sftrans1.dll
   Function: FUN_004c4840
   Address: 004c4840
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004c4840(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0057bb20 == 0) {
    DAT_0057bb20 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_0057b860 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_0057b860;
}


