/* Module: gifplug.dll
   Function: FUN_5f6fb2b0
   Address: 5f6fb2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6fb2b0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5f70be54)(&DAT_5f7311fc);
      FUN_5f6fb340((uint *)&DAT_5f7311f4);
      uVar1 = FUN_5f6fb320((uint *)&DAT_5f7311f4);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5f7311f0 = 1;
      }
    }
  }
  return;
}


