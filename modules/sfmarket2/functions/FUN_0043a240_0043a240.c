/* Module: sfmarket2.dll
   Function: FUN_0043a240
   Address: 0043a240
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043a240(undefined4 *param_1)

{
  undefined4 uVar1;
  HGLOBAL pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_0043a140((int *)*param_1);
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return uVar1;
  }
  return 0x80070057;
}


