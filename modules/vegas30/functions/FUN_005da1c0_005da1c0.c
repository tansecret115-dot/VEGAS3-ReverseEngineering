/* Module: vegas30.exe
   Function: FUN_005da1c0
   Address: 005da1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_005da1c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  if (((*(int *)(param_1 + 0x18) != 0) && (param_2 != 0)) ||
     ((*(int *)(param_1 + 0x1c) != 0 && (param_3 != 0)))) {
    return 0x80070057;
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = param_6;
    *(undefined4 *)(param_1 + 8) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_7;
    *(undefined4 *)(param_1 + 0xc) = param_5;
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 8) = param_4;
    *(undefined4 *)(param_1 + 0xc) = param_5;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}


