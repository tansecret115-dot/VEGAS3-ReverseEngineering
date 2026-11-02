/* Module: vegas30k.dll
   Function: FUN_011591b0
   Address: 011591b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011591b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01158cd0(param_1,&DAT_01206fc4,param_2,param_3);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 4;
  return;
}


