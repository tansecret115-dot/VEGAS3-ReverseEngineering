/* Module: sftrans1.dll
   Function: FUN_0049d310
   Address: 0049d310
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_0049d310(undefined4 *param_1,byte param_2)

{
  HGLOBAL pvVar1;
  
  *param_1 = &PTR_FUN_00563f0c;
  FUN_0049b9f0();
  FUN_00546d70();
  if ((param_2 & 1) != 0) {
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return param_1;
  }
  return param_1;
}


