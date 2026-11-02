/* Module: sfs4rw.dll
   Function: FUN_004091e0
   Address: 004091e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004091e0(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x244) == 0) {
    FUN_00406a00(param_2);
    return;
  }
  *(undefined4 *)(param_2 + 0x1e0) = 1;
  return;
}


