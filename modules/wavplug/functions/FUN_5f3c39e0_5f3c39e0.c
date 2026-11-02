/* Module: wavplug.dll
   Function: FUN_5f3c39e0
   Address: 5f3c39e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f3c39e0(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5f3e189c == 0) {
    DAT_5f3e189c = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5f3e1898 = 1;
      return 1;
    }
  }
  return DAT_5f3e1898;
}


