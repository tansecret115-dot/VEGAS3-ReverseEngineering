/* Module: vegas30k.dll
   Function: FUN_0113afd0
   Address: 0113afd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_0113afd0(int param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 0xc) = *param_4;
  *(undefined4 *)(param_1 + 0x10) = param_4[1];
  *(undefined4 *)(param_1 + 0x14) = param_4[2];
  *(undefined4 *)(param_1 + 0x18) = param_4[3];
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(uint *)(param_1 + 0x48) = param_3 & 1;
  *(uint *)(param_1 + 0x44) = ~param_3 & 1;
  return 1;
}


