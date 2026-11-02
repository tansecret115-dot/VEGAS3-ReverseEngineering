/* Module: vidcap30.exe
   Function: FUN_005529d0
   Address: 005529d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005529d0(int param_1)

{
  *(undefined4 *)(param_1 + 0xf6) = 0;
  *(undefined4 *)(param_1 + 0xae) = 0;
  *(undefined4 *)(param_1 + 0x1a5) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1bd) + 0x50) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1bd) + 0x51) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1bd) + 0x56) = 0;
  return;
}


