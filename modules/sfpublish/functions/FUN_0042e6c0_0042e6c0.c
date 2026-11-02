/* Module: sfpublish.dll
   Function: FUN_0042e6c0
   Address: 0042e6c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e6c0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_0044026c)(&DAT_0044712c);
      FUN_0042e750((uint *)&DAT_00447124);
      uVar1 = FUN_0042e730((uint *)&DAT_00447124);
      if ((uint)uVar1 < 0x3e9) {
        DAT_00447120 = 1;
      }
    }
  }
  return;
}


