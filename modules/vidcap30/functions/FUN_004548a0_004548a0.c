/* Module: vidcap30.exe
   Function: FUN_004548a0
   Address: 004548a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004548a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = **(int **)(param_1 + 0x2c);
  if (0 < iVar1) {
    iVar2 = *(int *)(*(int *)((*(int **)(param_1 + 0x2c))[2] + -4 + iVar1 * 4) + 0x1c) -
            *(int *)(param_1 + 0x14);
  }
  return iVar2;
}


