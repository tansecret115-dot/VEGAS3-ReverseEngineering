/* Module: sftrans1.dll
   Function: FUN_004958a0
   Address: 004958a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004958a0(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_005632f0;
  if (param_1[1] != 0) {
    FUN_00486040();
  }
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


