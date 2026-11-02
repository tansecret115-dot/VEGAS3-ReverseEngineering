/* Module: vegas30.exe
   Function: FUN_005c66d0
   Address: 005c66d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_005c66d0(undefined4 *param_1,byte param_2)

{
  int *piVar1;
  HGLOBAL pvVar2;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_FUN_0062a0e8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if ((param_2 & 1) != 0) {
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return param_1;
  }
  return param_1;
}


