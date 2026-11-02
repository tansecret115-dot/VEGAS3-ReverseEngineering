/* Module: vidpcore.dll
   Function: FUN_5ded8aa0
   Address: 5ded8aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ded8aa0(void)

{
  uint uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_5df3e854)(&DAT_5dfc3b2c);
      FUN_5ded8b30(&DAT_5dfc3b24);
      uVar1 = FUN_5ded8b10(&DAT_5dfc3b24);
      if (uVar1 < 0x3e9) {
        DAT_5dfc3b20 = 1;
      }
    }
  }
  return;
}


