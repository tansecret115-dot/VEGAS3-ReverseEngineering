/* Module: aviplug.dll
   Function: FUN_5f9c50f0
   Address: 5f9c50f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9c50f0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5f9f3abc)(&DAT_5fa16594);
      FUN_5f9c5180((uint *)&DAT_5fa1658c);
      uVar1 = FUN_5f9c5160((uint *)&DAT_5fa1658c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5fa16588 = 1;
      }
    }
  }
  return;
}


