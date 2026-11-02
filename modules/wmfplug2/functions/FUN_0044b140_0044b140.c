/* Module: wmfplug2.dll
   Function: FUN_0044b140
   Address: 0044b140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044b140(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_00489aac)(&DAT_0048f12c);
      FUN_0044b1d0((uint *)&DAT_0048f124);
      uVar1 = FUN_0044b1b0((uint *)&DAT_0048f124);
      if ((uint)uVar1 < 0x3e9) {
        DAT_0048f120 = 1;
      }
    }
  }
  return;
}


