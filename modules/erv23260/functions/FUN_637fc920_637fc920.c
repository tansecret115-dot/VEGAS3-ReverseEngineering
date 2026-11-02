/* Module: erv23260.dll
   Function: FUN_637fc920
   Address: 637fc920
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637fc920(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 4) = 7;
  if ((param_2 == 0x80) && (param_3 == 0x60)) {
    *(undefined4 *)(param_1 + 0x2c) = 1;
    return;
  }
  if ((param_2 == 0xb0) && (param_3 == 0x90)) {
    *(undefined4 *)(param_1 + 0x2c) = 2;
    return;
  }
  if ((param_2 == 0x160) && (param_3 == 0x120)) {
    *(undefined4 *)(param_1 + 0x2c) = 3;
    return;
  }
  if ((param_2 == 0x2c0) && (param_3 == 0x240)) {
    *(undefined4 *)(param_1 + 0x2c) = 4;
    return;
  }
  if ((param_2 == 0x580) && (param_3 == 0x480)) {
    *(undefined4 *)(param_1 + 0x2c) = 5;
    return;
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 6;
    *(int *)(param_1 + 0x80) = param_2;
    *(int *)(param_1 + 0x84) = param_3;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


