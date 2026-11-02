/* Module: vegas30k.dll
   Function: FUN_010416c0
   Address: 010416c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010416c0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0x8000ffff;
  }
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_1 + 0x48) == 0) {
      (**(code **)(*piVar1 + 0x5c))(piVar1,0);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_01041030();
    (**(code **)(**(int **)(param_1 + 0x68) + 0x50))(*(int **)(param_1 + 0x68));
    FUN_01041030();
  }
  return 0;
}


