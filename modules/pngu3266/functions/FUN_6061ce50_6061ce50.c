/* Module: pngu3266.dll
   Function: FUN_6061ce50
   Address: 6061ce50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061ce50(void)

{
  _SYSTEM_INFO local_28;
  
  if (DAT_6064b430 == 0) {
    GetSystemInfo(&local_28);
    DAT_6064b430 = local_28.dwAllocationGranularity;
  }
  return;
}


