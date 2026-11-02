/* Module: sctplug.dll
   Function: FUN_0040e3d0
   Address: 0040e3d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0040e3d0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0043cfc8 == 0) {
    DAT_0043cfc8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_0043cd08 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_0043cd08;
}


