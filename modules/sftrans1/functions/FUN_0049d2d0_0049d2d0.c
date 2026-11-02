/* Module: sftrans1.dll
   Function: FUN_0049d2d0
   Address: 0049d2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0049d2d0(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_00563ef8;
  FUN_00546fd0();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


