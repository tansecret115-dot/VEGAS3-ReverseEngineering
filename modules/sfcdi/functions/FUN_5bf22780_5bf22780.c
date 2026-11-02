/* Module: sfcdi.dll
   Function: FUN_5bf22780
   Address: 5bf22780
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf22780(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5bf76310 == 0) {
    DAT_5bf76310 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5bf76050 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5bf76050;
}


