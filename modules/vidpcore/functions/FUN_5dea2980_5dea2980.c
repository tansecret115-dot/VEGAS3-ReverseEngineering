/* Module: vidpcore.dll
   Function: FUN_5dea2980
   Address: 5dea2980
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5dea2980(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5df43170 == 0) {
    DAT_5df43170 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5df42eb0 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5df42eb0;
}


