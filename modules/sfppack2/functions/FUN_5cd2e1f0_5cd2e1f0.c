/* Module: sfppack2.dll
   Function: FUN_5cd2e1f0
   Address: 5cd2e1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd2e1f0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5cd63694)(&DAT_5cd68884);
      FUN_5cd2e280((uint *)&DAT_5cd6887c);
      uVar1 = FUN_5cd2e260((uint *)&DAT_5cd6887c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5cd68878 = 1;
      }
    }
  }
  return;
}


