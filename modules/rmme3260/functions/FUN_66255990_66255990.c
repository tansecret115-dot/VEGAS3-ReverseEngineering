/* Module: rmme3260.dll
   Function: FUN_66255990
   Address: 66255990
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66255990(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    return;
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x18))((int *)(param_1 + 4));
  return;
}


