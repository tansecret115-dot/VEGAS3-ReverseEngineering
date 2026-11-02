/* Module: vegas30.exe
   Function: FUN_005c68e0
   Address: 005c68e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c68e0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (((*(int **)(param_1 + 0x54) == (int *)0x0) || (iVar1 = **(int **)(param_1 + 0x54), iVar1 < 1))
     && (*(int *)(param_1 + 0x50) != 0)) {
    iVar1 = 1;
  }
  return iVar1;
}


