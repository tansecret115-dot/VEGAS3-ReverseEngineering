/* Module: wavplug.dll
   Function: FUN_5f398a10
   Address: 5f398a10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f398a10(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f3db618 == 0) {
    DAT_5f3db618 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5f3db358 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5f3db358;
}


