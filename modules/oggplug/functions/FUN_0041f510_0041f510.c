/* Module: oggplug.dll
   Function: FUN_0041f510
   Address: 0041f510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0041f510(void)

{
  undefined8 uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_00450c9c)(&DAT_0051187c);
      FUN_0041f5a0((uint *)&DAT_00511874);
      uVar1 = FUN_0041f580((uint *)&DAT_00511874);
      if ((uint)uVar1 < 0x3e9) {
        DAT_00511870 = 1;
      }
    }
  }
  return;
}


