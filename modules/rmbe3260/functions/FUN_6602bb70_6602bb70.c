/* Module: rmbe3260.dll
   Function: FUN_6602bb70
   Address: 6602bb70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602bb70(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x18))((int *)(param_1 + 0xc));
  return;
}


