/* Module: wavplug.dll
   Function: FUN_5f3b71d0
   Address: 5f3b71d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f3b71d0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5f3daf04)(&DAT_5f3e0854);
      FUN_5f3b7260((uint *)&DAT_5f3e084c);
      uVar1 = FUN_5f3b7240((uint *)&DAT_5f3e084c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5f3e0848 = 1;
      }
    }
  }
  return;
}


