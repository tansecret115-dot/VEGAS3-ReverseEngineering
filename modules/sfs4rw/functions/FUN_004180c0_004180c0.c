/* Module: sfs4rw.dll
   Function: FUN_004180c0
   Address: 004180c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004180c0(void)

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


