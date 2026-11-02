/* Module: vegas30k.dll
   Function: FUN_011b4940
   Address: 011b4940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011b4940(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x240) = param_2;
  *(undefined4 *)(param_1 + 0x248) = param_2;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  *(undefined4 *)(param_1 + 0x244) = param_3;
  *(undefined4 *)(param_1 + 0x24c) = param_3;
  (**(code **)(param_1 + 0x14))
            (param_1,2,*(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,param_2,param_3,0,0);
  (**(code **)(param_1 + 0x14))
            (param_1,3,*(undefined4 *)(param_1 + 0x18),0xffffffff,0,0,0,param_2,param_3,0,0);
  return;
}


