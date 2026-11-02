/* Module: gifplug.dll
   Function: FUN_5f6cd390
   Address: 5f6cd390
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f6cd390(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f70c188 == 0) {
    DAT_5f70c188 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5f70bec8 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5f70bec8;
}


