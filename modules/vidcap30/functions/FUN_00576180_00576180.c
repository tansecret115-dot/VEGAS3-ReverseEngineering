/* Module: vidcap30.exe
   Function: FUN_00576180
   Address: 00576180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00576180(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00663538 == 0) {
    DAT_00663538 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_00663534 = 1;
      return 1;
    }
  }
  return DAT_00663534;
}


