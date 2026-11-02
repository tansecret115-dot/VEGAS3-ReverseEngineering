/* Module: sftrans1.dll
   Function: FUN_00508ca0
   Address: 00508ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00508ca0(void)

{
  uint uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_005764f4)(&DAT_005fc6ac);
      FUN_00508d30(&DAT_005fc6a4);
      uVar1 = FUN_00508d10(&DAT_005fc6a4);
      if (uVar1 < 0x3e9) {
        DAT_005fc6a0 = 1;
      }
    }
  }
  return;
}


