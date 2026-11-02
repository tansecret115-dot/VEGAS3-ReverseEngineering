/* Module: vegas30k.dll
   Function: FUN_0104bb90
   Address: 0104bb90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0104bb90(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_011dd4b4;
  param_1[1] = &PTR_LAB_011dd48c;
  param_1[2] = &PTR_LAB_011dd454;
  param_1[3] = &PTR_LAB_011dd43c;
  param_1[4] = &PTR_LAB_011dd424;
  param_1[5] = &PTR_LAB_011dd404;
  param_1[6] = &PTR_LAB_011dd3e8;
  param_1[7] = &PTR_LAB_011dd3d8;
  param_1[8] = &PTR_LAB_011dd3c4;
  FUN_01042fc0(param_1);
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


