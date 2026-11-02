/* Module: rmme3260.dll
   Function: FUN_6625ba00
   Address: 6625ba00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6625ba00(void)

{
  _SYSTEM_INFO local_28;
  
  if (DAT_6627f220 == 0) {
    GetSystemInfo(&local_28);
    DAT_6627f220 = local_28.dwAllocationGranularity;
  }
  return;
}


