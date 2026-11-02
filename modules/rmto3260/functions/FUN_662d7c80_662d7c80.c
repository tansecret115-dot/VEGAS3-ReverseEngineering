/* Module: rmto3260.dll
   Function: FUN_662d7c80
   Address: 662d7c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662d7c80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    return;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}


