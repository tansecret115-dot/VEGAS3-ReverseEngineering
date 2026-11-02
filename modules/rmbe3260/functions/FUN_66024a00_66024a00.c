/* Module: rmbe3260.dll
   Function: FUN_66024a00
   Address: 66024a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66024a00(int *param_1)

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


