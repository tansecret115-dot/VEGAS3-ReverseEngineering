/* Module: vidcap30.exe
   Function: FUN_00490f20
   Address: 00490f20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_00490f20(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_00594f04;
  param_1[1] = &PTR_LAB_00594edc;
  param_1[2] = &PTR_LAB_00594ea4;
  param_1[3] = &PTR_LAB_00594e8c;
  param_1[4] = &PTR_LAB_00594e74;
  param_1[5] = &PTR_LAB_00594e54;
  param_1[6] = &PTR_LAB_00594e38;
  param_1[7] = &PTR_LAB_00594e28;
  param_1[8] = &PTR_LAB_00594e14;
  FUN_00488350(param_1);
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


