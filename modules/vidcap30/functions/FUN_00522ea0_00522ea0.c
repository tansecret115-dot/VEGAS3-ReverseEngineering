/* Module: vidcap30.exe
   Function: FUN_00522ea0
   Address: 00522ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00522ea0(void)

{
  uint uVar1;
  _SYSTEM_INFO local_b8;
  _OSVERSIONINFOA local_94;
  
  GetSystemInfo(&local_b8);
  if (local_b8.dwProcessorType == 0x24a) {
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId != 2) {
      (*(code *)PTR_FUN_005b866c)(&DAT_0066245c);
      FUN_00522f30(&DAT_00662454);
      uVar1 = FUN_00522f10(&DAT_00662454);
      if (uVar1 < 0x3e9) {
        DAT_00662450 = 1;
      }
    }
  }
  return;
}


