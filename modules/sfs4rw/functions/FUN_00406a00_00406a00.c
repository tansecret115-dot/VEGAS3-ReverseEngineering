/* Module: sfs4rw.dll
   Function: FUN_00406a00
   Address: 00406a00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00406a00(int param_1)

{
  if (*(int *)(param_1 + 0x244) == 0) {
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x230);
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x22c);
    if ((*(int *)(param_1 + 0x23c) != 0) && (*(int *)(param_1 + 0x22c) == 0)) {
      FUN_00406a50(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1e0) = 1;
  }
  return;
}


