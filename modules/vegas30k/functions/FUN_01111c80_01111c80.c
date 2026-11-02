/* Module: vegas30k.dll
   Function: FUN_01111c80
   Address: 01111c80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01111c80(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    if (*(int *)(param_1 + 0x90) == 5) {
      *(uint *)(param_1 + 0x7c) = (uint)((param_4 & 10) != 0);
      FUN_01111780(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_01111640(param_1,param_2,param_3);
    FUN_01111700(param_1,uVar1,0);
  }
  return;
}


