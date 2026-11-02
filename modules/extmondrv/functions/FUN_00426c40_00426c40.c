/* Module: extmondrv.dll
   Function: FUN_00426c40
   Address: 00426c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00426c40(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_0045ac84)(&DAT_0045bd6c);
      FUN_00426cd0((uint *)&DAT_0045bd64);
      uVar1 = FUN_00426cb0((uint *)&DAT_0045bd64);
      if ((uint)uVar1 < 0x3e9) {
        DAT_0045bd60 = 1;
      }
    }
  }
  return;
}


