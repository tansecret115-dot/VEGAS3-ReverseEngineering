/* Module: mp3rw.dll
   Function: FUN_00409240
   Address: 00409240
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409240(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 0x244) == 0) {
    FUN_00406a60(param_2);
    return;
  }
  *(undefined4 *)(param_2 + 0x1e0) = 1;
  return;
}


