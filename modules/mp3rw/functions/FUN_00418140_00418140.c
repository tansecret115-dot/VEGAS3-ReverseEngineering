/* Module: mp3rw.dll
   Function: FUN_00418140
   Address: 00418140
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418140(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004a963c == 0) {
    DAT_004a963c = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_004a9638 = 1;
      return 1;
    }
  }
  return DAT_004a9638;
}


