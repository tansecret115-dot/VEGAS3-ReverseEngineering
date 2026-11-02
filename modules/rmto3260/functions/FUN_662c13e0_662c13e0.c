/* Module: rmto3260.dll
   Function: FUN_662c13e0
   Address: 662c13e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662c13e0(int *param_1)

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


