/* Module: rmto3260.dll
   Function: FUN_662c5780
   Address: 662c5780
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_662c5780(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    return 0x80004003;
  }
  piVar1 = *(int **)(param_1 + 0x52);
  if (piVar1 != (int *)0x0) {
    *param_2 = (int)piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  *param_2 = 0;
  return 0;
}


