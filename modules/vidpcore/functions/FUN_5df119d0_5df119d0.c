/* Module: vidpcore.dll
   Function: FUN_5df119d0
   Address: 5df119d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df119d0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5dff1a9c == 0) {
    DAT_5dff1a9c = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5dff1a98 = 1;
      return 1;
    }
  }
  return DAT_5dff1a98;
}


