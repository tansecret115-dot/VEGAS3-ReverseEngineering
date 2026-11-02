/* Module: sfppack3.dll
   Function: FUN_5cc6ac00
   Address: 5cc6ac00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cc6ac00(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5cc979ec)(&DAT_5cc98f84);
      FUN_5cc6ac90((uint *)&DAT_5cc98f7c);
      uVar1 = FUN_5cc6ac70((uint *)&DAT_5cc98f7c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_5cc98f78 = 1;
      }
    }
  }
  return;
}


