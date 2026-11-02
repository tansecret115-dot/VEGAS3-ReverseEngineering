/* Module: vegas30.exe
   Function: FUN_004dad90
   Address: 004dad90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_004dad90(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  param_1[0xa3] = &PTR_LAB_00613acc;
  param_1[0x7a] = &PTR_LAB_00613acc;
  param_1[0x61] = &PTR_LAB_00613acc;
  param_1[0x48] = &PTR_LAB_00613acc;
  *param_1 = &PTR_LAB_00613acc;
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


