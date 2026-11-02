/* Module: sfpaplug.dll
   Function: FUN_00442d90
   Address: 00442d90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00442d90(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_0045be74)(&DAT_0046166c);
      FUN_00442e20((uint *)&DAT_00461664);
      uVar1 = FUN_00442e00((uint *)&DAT_00461664);
      if ((uint)uVar1 < 0x3e9) {
        DAT_00461660 = 1;
      }
    }
  }
  return;
}


