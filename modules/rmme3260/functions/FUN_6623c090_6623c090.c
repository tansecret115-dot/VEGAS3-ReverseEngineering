/* Module: rmme3260.dll
   Function: FUN_6623c090
   Address: 6623c090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c090(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  (**(code **)(*piVar1 + 0x10))(piVar1);
  piVar1 = *(int **)(param_1 + 0x90);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return 0;
}


