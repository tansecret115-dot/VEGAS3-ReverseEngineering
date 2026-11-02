/* Module: mp3rw.dll
   Function: FUN_00407b40
   Address: 00407b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00407b40(int param_1)

{
  *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x20c) = 1;
  if ((*(int *)(param_1 + 0x23c) != 0) && (*(int *)(param_1 + 0x228) == 0)) {
    FUN_00406ab0(param_1);
  }
  return;
}


