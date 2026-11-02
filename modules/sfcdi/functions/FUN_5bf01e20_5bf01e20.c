/* Module: sfcdi.dll
   Function: FUN_5bf01e20
   Address: 5bf01e20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf01e20(HSFCD__ *param_1)

{
  uint uVar1;
  undefined4 local_64 [15];
  uint local_28;
  
  uVar1 = cdr_GetSpeed(param_1,1);
  uVar1 = FUN_5bf01cc0(uVar1);
  if (uVar1 == 0) {
    return 1;
  }
  if (uVar1 == 0xffff) {
    local_64[0] = 100;
    cdr_GetDeviceCaps(param_1,(cdrcaps_tag *)local_64);
    uVar1 = FUN_5bf01cc0(local_28);
  }
  return uVar1;
}


