/* Module: rmbe3260.dll
   Function: FUN_66014a00
   Address: 66014a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66014a00(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    return 0x80040007;
  }
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  *param_2 = (int)piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return 0;
}


