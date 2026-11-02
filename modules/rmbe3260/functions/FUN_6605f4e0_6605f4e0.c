/* Module: rmbe3260.dll
   Function: FUN_6605f4e0
   Address: 6605f4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6605f4e0(int param_1)

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


