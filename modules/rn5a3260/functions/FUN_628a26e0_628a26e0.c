/* Module: rn5a3260.dll
   Function: FUN_628a26e0
   Address: 628a26e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a26e0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  *(int **)(param_1 + 0x14) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  piVar1 = param_3;
  if (*(int *)(param_1 + 0x18) == 0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(*(int **)(param_1 + 0x14),0x80004002,param_3);
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    return 0x80004002;
  }
  param_2 = (int *)0x0;
  FUN_628a2850(param_3,*(int **)(param_1 + 0x30),param_4,&param_2);
  if (param_1 == 0x34) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 4;
  }
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18),iVar2,piVar1,param_2);
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 8))(param_2);
  }
  return 0;
}


