/* Module: mp3rw.dll
   Function: FUN_00406a60
   Address: 00406a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406a60(int param_1)

{
  if (*(int *)(param_1 + 0x244) == 0) {
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x230);
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x22c);
    if ((*(int *)(param_1 + 0x23c) != 0) && (*(int *)(param_1 + 0x22c) == 0)) {
      FUN_00406ab0(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1e0) = 1;
  }
  return;
}


