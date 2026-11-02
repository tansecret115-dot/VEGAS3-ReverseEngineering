/* Module: rmbe3260.dll
   Function: FUN_6602bb40
   Address: 6602bb40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6602bb40(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x14))((int *)(param_1 + 0xc));
  return;
}


