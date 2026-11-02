/* Module: vegas30.exe
   Function: FUN_0050c820
   Address: 0050c820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050c820(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x40) = 0x3f000000;
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 4;
  *(undefined4 *)(param_1 + 0x80) = 1;
  return;
}


