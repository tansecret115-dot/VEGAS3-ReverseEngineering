/* Module: vidcap30.exe
   Function: FUN_004448e0
   Address: 004448e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004448e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_0042f4b0(param_1,1);
  if (*(int **)(param_2 + 0x10) != (int *)0x0) {
    iVar1 = **(int **)(param_2 + 0x10);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_00444920(param_1,param_2,iVar1,0);
    }
  }
  FUN_0042f5d0(param_1,1);
  return 0;
}


