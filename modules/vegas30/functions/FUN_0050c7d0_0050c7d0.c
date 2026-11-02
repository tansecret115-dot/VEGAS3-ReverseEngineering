/* Module: vegas30.exe
   Function: FUN_0050c7d0
   Address: 0050c7d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050c7d0(int param_1)

{
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x50) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x70) = 0x3ccccccd;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 4;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


