/* Module: sfxpfx1.dll
   Function: FUN_5c96ebc0
   Address: 5c96ebc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c96ebc0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5c997e7c)(&DAT_5c999424);
      FUN_5c96ec50((uint *)&DAT_5c99941c);
      uVar1 = FUN_5c96ec30((uint *)&DAT_5c99941c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5c999418 = 1;
      }
    }
  }
  return;
}


