/* Module: mp3plug.dll
   Function: FUN_5f6ddb50
   Address: 5f6ddb50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6ddb50(int param_1)

{
  if ((param_1 != 0) && (param_1 == *(int *)(param_1 + 0x5c))) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      FUN_5f6d97a0(*(int *)(param_1 + 0x50));
    }
    *(undefined4 *)(param_1 + 0x50) = 0;
    if (*(int *)(param_1 + 0x58) == 0) {
      FUN_5f6dd9e0(param_1);
      return;
    }
  }
  return;
}


