/* Module: g2plug.dll
   Function: FUN_5f818a70
   Address: 5f818a70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f818a70(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f8777b8 == 0) {
    DAT_5f8777b8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5f8774f8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5f8774f8;
}


