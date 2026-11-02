/* Module: vegas30.exe
   Function: FUN_005caca0
   Address: 005caca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005caca0(int param_1,int param_2)

{
  int iVar1;
  
  FUN_00543290();
  FUN_005b83b0(param_1,1);
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = **(int **)(param_2 + 0x24);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_005c8970(param_1,param_2,iVar1,0,0);
    }
  }
  if (*(int *)(param_2 + 8) == param_1) {
    FUN_005cbf70(param_2,0);
  }
  FUN_005b84d0(param_1,1);
  FUN_005432d0();
  return 0;
}


