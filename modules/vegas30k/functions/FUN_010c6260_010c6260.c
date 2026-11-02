/* Module: vegas30k.dll
   Function: FUN_010c6260
   Address: 010c6260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010c6260(void)

{
  uint uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_01206554)(&DAT_0128eb8c);
      FUN_010c62f0(&DAT_0128eb84);
      uVar1 = FUN_010c62d0(&DAT_0128eb84);
      if (uVar1 < 0x3e9) {
        DAT_0128eb80 = 1;
      }
    }
  }
  return;
}


