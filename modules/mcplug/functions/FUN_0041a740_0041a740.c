/* Module: mcplug.dll
   Function: FUN_0041a740
   Address: 0041a740
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041a740(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00488170 == 0) {
    DAT_00488170 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00487eb0 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00487eb0;
}


