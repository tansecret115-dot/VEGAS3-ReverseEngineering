/* Module: rn5a3260.dll
   Function: FUN_628a2650
   Address: 628a2650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2650(int param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80040009;
  }
  *(int **)(param_1 + 0x14) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),0x80004002,param_3);
    piVar1 = *(int **)(param_1 + 0x14);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    return 0x80004002;
  }
  if (param_1 != 0x34) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1 + 4,param_3);
    return 0;
  }
  (**(code **)(*piVar1 + 0x10))(piVar1,0,param_3);
  return 0;
}


