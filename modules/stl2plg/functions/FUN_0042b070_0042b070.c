/* Module: stl2plg.dll
   Function: FUN_0042b070
   Address: 0042b070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042b070(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_00472374)(&DAT_00478904);
      FUN_0042b100((uint *)&DAT_004788fc);
      uVar1 = FUN_0042b0e0((uint *)&DAT_004788fc);
      if ((uint)uVar1 < 0x3e9) {
        DAT_004788f8 = 1;
      }
    }
  }
  return;
}


