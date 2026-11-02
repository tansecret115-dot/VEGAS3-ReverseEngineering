/* Module: pngu3266.dll
   Function: FUN_60620e40
   Address: 60620e40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_60620e40(int param_1)

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


