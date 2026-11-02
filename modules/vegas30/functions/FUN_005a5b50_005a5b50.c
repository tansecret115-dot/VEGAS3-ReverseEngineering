/* Module: vegas30.exe
   Function: FUN_005a5b50
   Address: 005a5b50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a5b50(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 int param_6,uint param_7)

{
  if ((*(uint *)(param_1 + 0xd0) & 1) != 0) {
    if (-1 < param_4) {
      *(undefined4 *)(param_1 + 0x28) = param_3;
      *(int *)(param_1 + 0x2c) = param_4;
    }
    if (-1 < param_6) {
      *(undefined4 *)(param_1 + 0x30) = param_5;
      *(int *)(param_1 + 0x34) = param_6;
    }
    *(undefined4 *)(param_1 + 0x20) = param_2;
    *(uint *)(param_1 + 0xd0) = (param_7 & 1) << 1 | *(uint *)(param_1 + 0xd0) & 0xfffffffd;
  }
  return;
}


