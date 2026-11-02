/* Module: rn5a3260.dll
   Function: FUN_628a1a00
   Address: 628a1a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a1a00(int param_1,int *param_2)

{
  int *piVar1;
  
  *(int **)(param_1 + 0x60) = param_2;
  if (param_2 != (int *)0x0) {
    (**(code **)(*param_2 + 4))(param_2);
  }
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  (**(code **)*param_2)(param_2,&DAT_628a6130,(undefined4 *)(param_1 + 0x58));
  return 0;
}


