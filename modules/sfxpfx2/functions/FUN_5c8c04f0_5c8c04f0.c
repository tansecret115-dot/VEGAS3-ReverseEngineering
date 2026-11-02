/* Module: sfxpfx2.dll
   Function: FUN_5c8c04f0
   Address: 5c8c04f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c8c04f0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5c8e8ab4)(&DAT_5c8ea07c);
      FUN_5c8c0580((uint *)&DAT_5c8ea074);
      uVar1 = FUN_5c8c0560((uint *)&DAT_5c8ea074);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5c8ea070 = 1;
      }
    }
  }
  return;
}


