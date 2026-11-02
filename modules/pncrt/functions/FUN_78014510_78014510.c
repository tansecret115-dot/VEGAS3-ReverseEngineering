/* Module: pncrt.dll
   Function: FUN_78014510
   Address: 78014510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_78014510(void)

{
  BOOL BVar1;
  _OSVERSIONINFOA local_94;
  
  local_94.dwOSVersionInfoSize = 0x94;
  BVar1 = GetVersionExA(&local_94);
  if ((BVar1 != 0) && (local_94.dwPlatformId == 2)) {
    return 1;
  }
  return 0;
}


