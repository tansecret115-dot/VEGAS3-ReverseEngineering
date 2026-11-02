/* Module: rn5a3260.dll
   Function: FUN_628a2410
   Address: 628a2410
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_628a2410(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x3c);
  *param_2 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80004005;
}


