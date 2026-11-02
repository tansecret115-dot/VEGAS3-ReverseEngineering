/* Module: mp3rw.dll
   Function: FUN_00452850
   Address: 00452850
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452850(int param_1)

{
  *(undefined4 *)(param_1 + 0xf6) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0x1a5) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1bd) + 0x50) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1bd) + 0x51) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1bd) + 0x56) = 0;
  return;
}


