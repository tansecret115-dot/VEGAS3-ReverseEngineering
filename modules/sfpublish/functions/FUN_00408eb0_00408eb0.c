/* Module: sfpublish.dll
   Function: FUN_00408eb0
   Address: 00408eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00408eb0(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 1;
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  *param_2 = 0;
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    if (*(int *)(param_1 + 0x90) != 0) {
      uVar3 = Ordinal_7(*(int *)(param_1 + 0x90));
      iVar2 = Ordinal_4(*(undefined4 *)(param_1 + 0x90),uVar3);
      *param_2 = iVar2;
      iVar2 = 0;
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,param_2,param_3);
    if ((iVar2 < 0) || (*param_2 == 0)) {
      return 1;
    }
  }
  return iVar2;
}


