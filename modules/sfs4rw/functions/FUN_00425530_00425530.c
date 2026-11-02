/* Module: sfs4rw.dll
   Function: FUN_00425530
   Address: 00425530
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00425530(int *param_1,undefined4 *param_2)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    hMem = GlobalAlloc(0x42,0x10);
    puVar1 = GlobalLock(hMem);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00425480(param_1);
      *puVar1 = param_1;
      puVar1[1] = 0xffffffff;
      puVar1[2] = 0;
      puVar1[3] = param_1[9];
      *param_2 = puVar1;
      return 0;
    }
    return 0x8007000e;
  }
  return 0x80070057;
}


