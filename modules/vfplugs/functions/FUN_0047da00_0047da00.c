/* Module: vfplugs.dll
   Function: FUN_0047da00
   Address: 0047da00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0047da00(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_0053b238 == 0) {
    DAT_0053b238 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_0053b234 = 1;
      return 1;
    }
  }
  return DAT_0053b234;
}


