/* Module: basc3260.dll
   Function: FUN_627f1960
   Address: 627f1960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_627f1960(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  return;
}


