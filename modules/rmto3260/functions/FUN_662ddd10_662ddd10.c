/* Module: rmto3260.dll
   Function: FUN_662ddd10
   Address: 662ddd10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662ddd10(int param_1)

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


