/* Module: sfmarket2.dll
   Function: FUN_00441dd0
   Address: 00441dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00441dd0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_004a8344)(&DAT_004b0204);
      FUN_00441e60((uint *)&DAT_004b01fc);
      uVar1 = FUN_00441e40((uint *)&DAT_004b01fc);
      if ((uint)uVar1 < 0x3e9) {
        DAT_004b01f8 = 1;
      }
    }
  }
  return;
}


