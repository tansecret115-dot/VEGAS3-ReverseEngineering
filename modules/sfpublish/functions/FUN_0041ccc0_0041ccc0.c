/* Module: sfpublish.dll
   Function: FUN_0041ccc0
   Address: 0041ccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041ccc0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_00441f10 == 0) {
    DAT_00441f10 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_00441c50 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_00441c50;
}


