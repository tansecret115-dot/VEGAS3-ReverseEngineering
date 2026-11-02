/* Module: qt4plug.dll
   Function: FUN_5f528d60
   Address: 5f528d60
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f528d60(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f5a43f0 == 0) {
    DAT_5f5a43f0 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5f5a4130 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5f5a4130;
}


