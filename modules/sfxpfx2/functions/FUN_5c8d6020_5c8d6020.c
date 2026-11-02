/* Module: sfxpfx2.dll
   Function: FUN_5c8d6020
   Address: 5c8d6020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c8d6020(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5c8efc68 == 0) {
    DAT_5c8efc68 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if ((local_94.dwPlatformId == 1) &&
       ((local_94.dwMajorVersion < 4 ||
        ((local_94.dwMajorVersion == 4 && (local_94.dwMinorVersion == 0)))))) {
      DAT_5c8efc64 = 1;
      return 1;
    }
  }
  return DAT_5c8efc64;
}


