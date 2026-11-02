/* Module: auth3260.dll
   Function: FUN_627a2f40
   Address: 627a2f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627a2f40(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (param_2 != (int *)0x0) {
    *(int **)(param_1 + 0x1c) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
  }
  FUN_627a3ee0((void *)(param_1 + -0x10));
  return 0;
}


