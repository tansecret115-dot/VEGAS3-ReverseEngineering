/* Module: mcplug.dll
   Function: FUN_0043a0c0
   Address: 0043a0c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043a0c0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_00487714)(&DAT_0048d1d4);
      FUN_0043a150((uint *)&DAT_0048d1cc);
      uVar1 = FUN_0043a130((uint *)&DAT_0048d1cc);
      if ((uint)uVar1 < 0x3e9) {
        DAT_0048d1c8 = 1;
      }
    }
  }
  return;
}


