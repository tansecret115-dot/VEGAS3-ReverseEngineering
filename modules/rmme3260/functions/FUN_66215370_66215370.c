/* Module: rmme3260.dll
   Function: FUN_66215370
   Address: 66215370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66215370(int param_1,int param_2)

{
  if (*(int *)(param_1 + 600) != 1) {
    if (*(int *)(param_1 + 600) == 2) {
      if (param_2 < 0) {
        *(undefined4 *)(param_1 + 0x2ae) = 0;
        *(int *)(param_1 + -0xb4) = param_2;
        (**(code **)(**(int **)(param_1 + 0x254) + 0x14))(*(int **)(param_1 + 0x254),param_2);
        return 0;
      }
      if (*(int *)(param_1 + 0x2ae) == 1) {
        *(undefined4 *)(param_1 + 0x2ae) = 2;
      }
      FUN_66215af0((int *)(param_1 + -0xd8));
    }
    return 0;
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 0x27c) = 0;
    *(int *)(param_1 + -0xb4) = param_2;
    (**(code **)(**(int **)(param_1 + 0x254) + 0x10))(*(int **)(param_1 + 0x254),param_2);
    return 0;
  }
  if (*(int *)(param_1 + 0x27c) == 1) {
    *(undefined4 *)(param_1 + 0x27c) = 2;
  }
  FUN_66214440((int *)(param_1 + -0xd8));
  return 0;
}


