/* Module: pngu3266.dll
   Function: FUN_60621fc0
   Address: 60621fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_60621fc0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)(*param_1 + -4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,piVar2);
    return;
  }
  operator_delete(piVar2);
  return;
}


