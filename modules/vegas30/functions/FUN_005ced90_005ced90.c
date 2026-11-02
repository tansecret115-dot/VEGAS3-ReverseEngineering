/* Module: vegas30.exe
   Function: FUN_005ced90
   Address: 005ced90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ced90(undefined4 param_1,int param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  uVar1 = param_3 - *(uint *)(param_2 + 0x18);
  FUN_005ceab0(param_1,param_2,uVar1 + 2,
               ((param_4 - *(int *)(param_2 + 0x1c)) - (uint)(param_3 < *(uint *)(param_2 + 0x18)))
               + (uint)(0xfffffffd < uVar1),param_7,param_8,0,0);
  return;
}


