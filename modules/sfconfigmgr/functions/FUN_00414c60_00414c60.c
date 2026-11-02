/* Module: sfconfigmgr.dll
   Function: FUN_00414c60
   Address: 00414c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00414c60(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_00422e94)(&DAT_004283a4);
      FUN_00414cf0((uint *)&DAT_0042839c);
      uVar1 = FUN_00414cd0((uint *)&DAT_0042839c);
      if ((uint)uVar1 < 0x3e9) {
        DAT_00428398 = 1;
      }
    }
  }
  return;
}


