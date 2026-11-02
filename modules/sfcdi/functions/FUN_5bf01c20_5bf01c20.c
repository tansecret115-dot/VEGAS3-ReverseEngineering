/* Module: sfcdi.dll
   Function: FUN_5bf01c20
   Address: 5bf01c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf01c20(int *param_1)

{
  undefined4 local_64 [13];
  uint local_30;
  
  if (*param_1 != -1) {
    local_64[0] = 100;
    cdr_GetInterfaceCaps(*param_1,(cdrcaps_tag *)local_64);
    if ((local_30 & 0x8000) != 0) {
      return 1;
    }
  }
  return 0;
}


