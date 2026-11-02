/* Module: sfcd.cdd
   Function: FUN_00424e90
   Address: 00424e90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424e90(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_004414e4)(&DAT_004422fc);
      FUN_00424f20((uint *)&DAT_004422f4);
      uVar1 = FUN_00424f00((uint *)&DAT_004422f4);
      if ((uint)uVar1 < 0x3e9) {
        DAT_004422f0 = 1;
      }
    }
  }
  return;
}


