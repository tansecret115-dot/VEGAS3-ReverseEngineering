/* Module: sfs4rw.dll
   Function: FUN_00422cb0
   Address: 00422cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00422cb0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004a9b90 == 0) {
    DAT_004a9b90 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_004a98d0 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_004a98d0;
}


