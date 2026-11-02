/* Module: rmto3260.dll
   Function: FUN_662f1930
   Address: 662f1930
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662f1930(void)

{
  _SYSTEM_INFO local_28;
  
  if (DAT_66311d10 == 0) {
    GetSystemInfo(&local_28);
    DAT_66311d10 = local_28.dwAllocationGranularity;
  }
  return;
}


