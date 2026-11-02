/* Module: basc3260.dll
   Function: FUN_627f2350
   Address: 627f2350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_627f2350(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  *param_2 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return 0;
  }
  return 0x80004005;
}


