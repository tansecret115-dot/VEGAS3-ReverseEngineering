/* Module: vegas30.exe
   Function: FUN_0057fa40
   Address: 0057fa40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0057fa40(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_00628f94;
  FUN_00584ef0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


