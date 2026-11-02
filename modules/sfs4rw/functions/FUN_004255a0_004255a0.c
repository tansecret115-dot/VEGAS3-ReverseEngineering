/* Module: sfs4rw.dll
   Function: FUN_004255a0
   Address: 004255a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004255a0(undefined4 *param_1)

{
  undefined4 uVar1;
  HGLOBAL pvVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_004254a0((int *)*param_1);
    pvVar2 = GlobalHandle(param_1);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(param_1);
    GlobalFree(pvVar2);
    return uVar1;
  }
  return 0x80070057;
}


