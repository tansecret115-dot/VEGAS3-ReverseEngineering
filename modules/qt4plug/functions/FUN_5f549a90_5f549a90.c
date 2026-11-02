/* Module: qt4plug.dll
   Function: FUN_5f549a90
   Address: 5f549a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f549a90(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5f5a3ce4)(&DAT_5f5a9454);
      FUN_5f549b20((uint *)&DAT_5f5a944c);
      uVar1 = FUN_5f549b00((uint *)&DAT_5f5a944c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5f5a9448 = 1;
      }
    }
  }
  return;
}


