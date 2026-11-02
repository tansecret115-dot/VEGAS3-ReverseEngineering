/* Module: sfxpfx2.dll
   Function: FUN_5c8a5b70
   Address: 5c8a5b70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5c8a5b70(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5c8e9690 == 0) {
    DAT_5c8e9690 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5c8e93d0 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5c8e93d0;
}


