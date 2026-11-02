/* Module: aviplug.dll
   Function: FUN_5f950b60
   Address: 5f950b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f950b60(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  FUN_5f950380(param_1);
  return;
}


