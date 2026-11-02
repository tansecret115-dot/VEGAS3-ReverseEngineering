/* Module: mcplug.dll
   Function: FUN_0046fa30
   Address: 0046fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0046fa30(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_004ae434 == 0) {
    DAT_004ae434 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_004ae430 = 1;
      return 1;
    }
  }
  return DAT_004ae430;
}


