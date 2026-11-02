/* Module: sfcdi.dll
   Function: FUN_5bf01dc0
   Address: 5bf01dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5bf01dc0(HSFCD__ *param_1,uint param_2)

{
  uint uVar1;
  undefined4 local_64 [15];
  uint local_28;
  
  if ((param_2 == 0) || (param_2 == 0xffff)) {
    param_2 = 200;
  }
  local_64[0] = 100;
  cdr_GetDeviceCaps(param_1,(cdrcaps_tag *)local_64);
  uVar1 = FUN_5bf01cc0(local_28);
  if (uVar1 <= param_2) {
    uVar1 = FUN_5bf01cc0(local_28);
    return uVar1;
  }
  return param_2;
}


