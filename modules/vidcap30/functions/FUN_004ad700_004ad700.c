/* Module: vidcap30.exe
   Function: FUN_004ad700
   Address: 004ad700
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004ad700(int param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x90) != -1) {
    if (*(int *)(param_1 + 0x90) == 5) {
      *(uint *)(param_1 + 0x7c) = (uint)((param_4 & 10) != 0);
      FUN_004ad200(param_1,param_2,param_3,5);
      return;
    }
    uVar1 = FUN_004ad0c0(param_1,param_2,param_3);
    FUN_004ad180(param_1,uVar1,0);
  }
  return;
}


