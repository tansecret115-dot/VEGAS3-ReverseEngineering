/* Module: extmondrv.dll
   Function: FUN_004054e0
   Address: 004054e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004054e0(int param_1)

{
  int iVar1;
  
  InterlockedDecrement((LONG *)(param_1 + 4));
  iVar1 = *(LONG *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_004044a0(param_1 + 0xc);
    (**(code **)(**(int **)(param_1 + 8) + 0x20))(*(int **)(param_1 + 8),param_1);
    iVar1 = 0;
  }
  return iVar1;
}


