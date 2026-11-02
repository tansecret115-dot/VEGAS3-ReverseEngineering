/* Module: sfppack3.dll
   Function: FUN_5cc80710
   Address: 5cc80710
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc80710(void)

{
  _OSVERSIONINFOA local_94;
  
  if (DAT_5cc9eb78 == 0) {
    DAT_5cc9eb78 = 1;
    local_94.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_94);
    if (local_94.dwPlatformId == 2) {
      DAT_5cc9eb74 = 1;
      return 1;
    }
  }
  return DAT_5cc9eb74;
}


