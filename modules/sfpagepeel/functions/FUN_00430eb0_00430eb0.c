/* Module: sfpagepeel.dll
   Function: FUN_00430eb0
   Address: 00430eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00430eb0(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_0047cffc)(&DAT_0047e624);
      FUN_00430f40((uint *)&DAT_0047e61c);
      uVar1 = FUN_00430f20((uint *)&DAT_0047e61c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_0047e618 = 1;
      }
    }
  }
  return;
}


