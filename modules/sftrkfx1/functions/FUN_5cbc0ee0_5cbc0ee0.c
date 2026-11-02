/* Module: sftrkfx1.dll
   Function: FUN_5cbc0ee0
   Address: 5cbc0ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cbc0ee0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cc11790 == 0) {
    DAT_5cc11790 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5cc114d0 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5cc114d0;
}


