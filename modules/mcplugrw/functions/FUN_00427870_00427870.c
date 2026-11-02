/* Module: mcplugrw.dll
   Function: FUN_00427870
   Address: 00427870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00427870(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_004a64ac)(&DAT_004a9bac);
      FUN_00427900((uint *)&DAT_004a9ba4);
      uVar1 = FUN_004278e0((uint *)&DAT_004a9ba4);
      if ((uint)uVar1 < 0x3e9) {
        DAT_004a9ba0 = 1;
      }
    }
  }
  return;
}


