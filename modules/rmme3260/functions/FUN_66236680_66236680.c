/* Module: rmme3260.dll
   Function: FUN_66236680
   Address: 66236680
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66236680(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 == (int *)0x0) {
    return 0x80040009;
  }
  (**(code **)(*piVar1 + 0x10))(piVar1);
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return 0;
}


