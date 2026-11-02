/* Module: sfppack1.dll
   Function: FUN_5cdf5270
   Address: 5cdf5270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdf5270(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5ce22f0c)(&DAT_5ce244ac);
      FUN_5cdf5300((uint *)&DAT_5ce244a4);
      uVar1 = FUN_5cdf52e0((uint *)&DAT_5ce244a4);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5ce244a0 = 1;
      }
    }
  }
  return;
}


