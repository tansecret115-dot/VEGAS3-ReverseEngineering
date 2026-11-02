/* Module: sfppack1.dll
   Function: FUN_5cdda8f0
   Address: 5cdda8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cdda8f0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5ce23ac0 == 0) {
    DAT_5ce23ac0 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5ce23800 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5ce23800;
}


