/* Module: sfcd.cdd
   Function: FUN_0041e380
   Address: 0041e380
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041e380(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00441bc8 == 0) {
    DAT_00441bc8 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00441908 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00441908;
}


