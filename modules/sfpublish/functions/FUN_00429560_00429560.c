/* Module: sfpublish.dll
   Function: FUN_00429560
   Address: 00429560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00429560(undefined4 *param_1)

{
  undefined4 uVar1;
  HGLOBAL pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_00429460((int *)*param_1);
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return uVar1;
  }
  return 0x80070057;
}


