/* Module: sfnetmedia.dll
   Function: FUN_0042e1b0
   Address: 0042e1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042e1b0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_00440344)(&DAT_0044722c);
      FUN_0042e240((uint *)&DAT_00447224);
      uVar1 = FUN_0042e220((uint *)&DAT_00447224);
      if ((uint)uVar1 < 0x3e9) {
        DAT_00447220 = 1;
      }
    }
  }
  return;
}


