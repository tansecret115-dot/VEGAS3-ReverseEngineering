/* Module: enlv3260.dll
   Function: FUN_661d24a0
   Address: 661d24a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_661d24a0(int param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x56) != 0) {
    return *(int *)(param_1 + 0x56);
  }
  piVar1 = *(int **)(param_1 + 0x1c);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,param_2);
  }
  return iVar2;
}


