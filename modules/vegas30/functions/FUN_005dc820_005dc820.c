/* Module: vegas30.exe
   Function: FUN_005dc820
   Address: 005dc820
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dc820(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (*param_3 == 0) {
    return 0;
  }
  uVar1 = riff64_PrepareList(param_1,DAT_0062a610,DAT_0062a614,DAT_0062a618,DAT_0062a61c,&local_8);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_005dac40(param_1,param_2,DAT_0062a620,DAT_0062a624,DAT_0062a628,DAT_0062a62c,param_3
                        );
    if (-1 < (int)uVar1) {
      uVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


