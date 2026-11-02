/* Module: vegas30.exe
   Function: FUN_004d54b0
   Address: 004d54b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_004d54b0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5)

{
  *(uint *)(param_1 + 0x110) = param_4;
  *(undefined4 *)(param_1 + 0x114) = param_5;
  *(undefined4 *)(param_1 + 0x118) = param_2;
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  if (param_4 >> 0x10 < 4) {
    (**(code **)(**(int **)(param_1 + 0x34 + (param_4 >> 0x10) * 4) + 0x14))(param_1,0x7b,0,0);
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  return;
}


