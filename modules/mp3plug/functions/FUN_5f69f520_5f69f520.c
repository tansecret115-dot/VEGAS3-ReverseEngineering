/* Module: mp3plug.dll
   Function: FUN_5f69f520
   Address: 5f69f520
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f69f520(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f74d720 == 0) {
    DAT_5f74d720 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    DAT_5f74d460 = (uint)(local_94.dwPlatformId == 1);
    return (uint)(local_94.dwPlatformId == 1);
  }
  return DAT_5f74d460;
}


