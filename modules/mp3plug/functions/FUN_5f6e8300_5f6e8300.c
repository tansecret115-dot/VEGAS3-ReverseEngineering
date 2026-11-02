/* Module: mp3plug.dll
   Function: FUN_5f6e8300
   Address: 5f6e8300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e8300(int param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x530) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0x530));
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0xc));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0x10));
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0x18));
    }
    if (*(int *)(param_1 + 0x534) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0x534));
    }
    FUN_5f6d97a0(param_1);
  }
  return;
}


