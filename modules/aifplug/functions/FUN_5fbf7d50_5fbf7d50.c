/* Module: aifplug.dll
   Function: FUN_5fbf7d50
   Address: 5fbf7d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbf7d50(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5fc09604)(&DAT_5fc0ec04);
      FUN_5fbf7de0((uint *)&DAT_5fc0ebfc);
      uVar1 = FUN_5fbf7dc0((uint *)&DAT_5fc0ebfc);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5fc0ebf8 = 1;
      }
    }
  }
  return;
}


