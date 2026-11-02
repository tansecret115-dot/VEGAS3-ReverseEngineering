/* Module: sfpublish.dll
   Function: FUN_00408fb0
   Address: 00408fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408fb0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    *param_2 = *(int *)(param_1 + 0x24);
    piVar1 = *(int **)(param_1 + 0x24);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,param_2);
    if ((iVar2 < 0) || (*param_2 == 0)) {
      return -0x7fffbffe;
    }
  }
  return iVar2;
}


