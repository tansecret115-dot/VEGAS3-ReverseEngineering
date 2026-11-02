/* Module: rmme3260.dll
   Function: FUN_66255be0
   Address: 66255be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66255be0(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
  (**(code **)(*(int *)(param_1 + 8) + 0x14))((int *)(param_1 + 8));
  return;
}


