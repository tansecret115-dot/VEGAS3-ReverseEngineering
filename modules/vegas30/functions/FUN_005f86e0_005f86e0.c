/* Module: vegas30.exe
   Function: FUN_005f86e0
   Address: 005f86e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_005f86e0(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_LAB_0062ce74;
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


