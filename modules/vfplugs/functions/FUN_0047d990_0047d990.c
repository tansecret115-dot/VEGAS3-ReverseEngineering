/* Module: vfplugs.dll
   Function: FUN_0047d990
   Address: 0047d990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047d990(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0053b230 == 0) {
    DAT_0053b230 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_0053b22c = 1;
      return 1;
    }
  }
  return DAT_0053b22c;
}


