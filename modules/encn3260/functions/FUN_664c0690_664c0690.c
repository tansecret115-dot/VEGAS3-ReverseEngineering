/* Module: encn3260.dll
   Function: FUN_664c0690
   Address: 664c0690
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664c0690(int *param_1)

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


