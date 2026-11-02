/* Module: vfplugs.dll
   Function: FUN_0044ed30
   Address: 0044ed30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044ed30(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_0049407c)(&DAT_005356c4);
      FUN_0044edc0((uint *)&DAT_005356bc);
      uVar1 = FUN_0044eda0((uint *)&DAT_005356bc);
      if ((uint)uVar1 < 0x3e9) {
        DAT_005356b8 = 1;
      }
    }
  }
  return;
}


