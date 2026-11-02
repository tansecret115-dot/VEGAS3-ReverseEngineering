/* Module: pngu3266.dll
   Function: FUN_6061cb60
   Address: 6061cb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061cb60(int *param_1)

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


