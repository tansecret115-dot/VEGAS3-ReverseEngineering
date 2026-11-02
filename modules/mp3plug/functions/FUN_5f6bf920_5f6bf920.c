/* Module: mp3plug.dll
   Function: FUN_5f6bf920
   Address: 5f6bf920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6bf920(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5f73e58c)(&DAT_5f75277c);
      FUN_5f6bf9b0((uint *)&DAT_5f752774);
      uVar1 = FUN_5f6bf990((uint *)&DAT_5f752774);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5f752770 = 1;
      }
    }
  }
  return;
}


