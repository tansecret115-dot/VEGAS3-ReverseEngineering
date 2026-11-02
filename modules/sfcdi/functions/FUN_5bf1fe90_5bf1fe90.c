/* Module: sfcdi.dll
   Function: FUN_5bf1fe90
   Address: 5bf1fe90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5bf1fe90(int param_1)

{
  int iVar1;
  
  if ((*(int *)((*(uint **)(param_1 + 0x18))[0x13] + 0x28) == 0) &&
     (iVar1 = FUN_5bf40160(**(uint **)(param_1 + 0x18)), iVar1 < 0)) {
    return;
  }
  iVar1 = FUN_5bf3d430(*(int **)(param_1 + 0x18),0,0);
  if ((-1 < iVar1) &&
     (iVar1 = FUN_5bf1fc80((undefined4 *)(param_1 + 0x1c),*(int **)(param_1 + 0x18)), -1 < iVar1)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1da8);
  }
  return;
}


