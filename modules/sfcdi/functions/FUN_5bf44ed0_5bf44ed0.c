/* Module: sfcdi.dll
   Function: FUN_5bf44ed0
   Address: 5bf44ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf44ed0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5bf65de4)(&DAT_5bf7b7a4);
      FUN_5bf44f60((uint *)&DAT_5bf7b79c);
      uVar1 = FUN_5bf44f40((uint *)&DAT_5bf7b79c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5bf7b798 = 1;
      }
    }
  }
  return;
}


