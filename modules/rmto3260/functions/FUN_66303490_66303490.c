/* Module: rmto3260.dll
   Function: FUN_66303490
   Address: 66303490
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66303490(int param_1)

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


