/* Module: Setup.exe
   Function: FUN_00415770
   Address: 00415770
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00415770(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_00444084)(&DAT_00449844);
      FUN_00415800((uint *)&DAT_0044983c);
      uVar1 = FUN_004157e0((uint *)&DAT_0044983c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_00449838 = 1;
      }
    }
  }
  return;
}


