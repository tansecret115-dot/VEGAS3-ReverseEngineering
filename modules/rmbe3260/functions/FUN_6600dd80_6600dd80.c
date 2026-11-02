/* Module: rmbe3260.dll
   Function: FUN_6600dd80
   Address: 6600dd80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6600dd80(int param_1,int *param_2)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 4) == 2) && (piVar1 = *(int **)(param_1 + 0x17), piVar1 != (int *)0x0)) {
    if (param_2 == (int *)0x0) {
      return 0x80004003;
    }
    *param_2 = (int)piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80040007;
}


