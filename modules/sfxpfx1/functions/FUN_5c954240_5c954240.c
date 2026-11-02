/* Module: sfxpfx1.dll
   Function: FUN_5c954240
   Address: 5c954240
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c954240(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5c998a38 == 0) {
    DAT_5c998a38 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5c998778 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5c998778;
}


