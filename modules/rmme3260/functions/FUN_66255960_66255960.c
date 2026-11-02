/* Module: rmme3260.dll
   Function: FUN_66255960
   Address: 66255960
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66255960(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x14))((int *)(param_1 + 4));
  return;
}


