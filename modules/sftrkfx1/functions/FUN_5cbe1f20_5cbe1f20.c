/* Module: sftrkfx1.dll
   Function: FUN_5cbe1f20
   Address: 5cbe1f20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbe1f20(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5cc10f6c)(&DAT_5cc12364);
      FUN_5cbe1fb0((uint *)&DAT_5cc1235c);
      uVar1 = FUN_5cbe1f90((uint *)&DAT_5cc1235c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5cc12358 = 1;
      }
    }
  }
  return;
}


