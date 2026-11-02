/* Module: rmbe3260.dll
   Function: FUN_66050c30
   Address: 66050c30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66050c30(void)

{
  _SYSTEM_INFO local_28;
  
  if (DAT_660753dc == 0) {
    GetSystemInfo(&local_28);
    DAT_660753dc = local_28.dwAllocationGranularity;
  }
  return;
}


