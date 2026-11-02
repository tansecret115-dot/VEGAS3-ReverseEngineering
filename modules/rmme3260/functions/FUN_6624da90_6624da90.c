/* Module: rmme3260.dll
   Function: FUN_6624da90
   Address: 6624da90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6624da90(int param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x448), (uVar1 & 1) != 0)) {
    if ((uVar1 & 8) != 0) {
      if ((uVar1 & 0x20) != 0) {
        FUN_6624e780(param_1);
        DAT_6627e55c = DAT_6627e55c + -1;
      }
      (**(code **)(**(int **)(param_1 + 0x8b4) + 8))(*(int **)(param_1 + 0x8b4));
      if ((*(byte *)(param_1 + 0x448) & 0x40) == 0) {
        (**(code **)(**(int **)(param_1 + 0x8b0) + 0x70))(*(int **)(param_1 + 0x8b0),0);
        (**(code **)(**(int **)(param_1 + 0x8b8) + 8))(*(int **)(param_1 + 0x8b8));
      }
      (**(code **)(**(int **)(param_1 + 0x8b0) + 8))(*(int **)(param_1 + 0x8b0));
      if ((*(byte *)(param_1 + 0x448) & 0x80) != 0) {
        (**(code **)(**(int **)(param_1 + 0x8bc) + 8))(*(int **)(param_1 + 0x8bc));
      }
      (**(code **)(**(int **)(param_1 + 0x8ac) + 8))(*(int **)(param_1 + 0x8ac));
    }
    if (((*(byte *)(param_1 + 0x448) & 4) != 0) && (DAT_6627e550 != (code *)0x0)) {
      (*DAT_6627e550)(*(undefined4 *)(param_1 + 0x474));
    }
    if ((*(byte *)(param_1 + 0x448) & 2) != 0) {
      free(*(void **)(param_1 + 0x8a4));
    }
    *(undefined4 *)(param_1 + 0x448) = 0;
    return 0;
  }
  return 0x80004005;
}


