/* Module: rmme3260.dll
   Function: FUN_66255c10
   Address: 66255c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66255c10(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x18))((int *)(param_1 + 8));
  return;
}


