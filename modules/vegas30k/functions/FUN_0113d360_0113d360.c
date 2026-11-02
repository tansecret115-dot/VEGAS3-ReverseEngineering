/* Module: vegas30k.dll
   Function: FUN_0113d360
   Address: 0113d360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113d360(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 300);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 300) = 0;
    piVar1 = *(int **)(param_1 + 0x138);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    return 0;
  }
  return 1;
}


