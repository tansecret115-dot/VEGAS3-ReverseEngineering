/* Module: vegas30.exe
   Function: FUN_005dbe20
   Address: 005dbe20
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dbe20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = riff64_PrepareList(param_1,DAT_0062a730,DAT_0062a734,DAT_0062a738,DAT_0062a73c,&local_8);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_005dac40(param_1,param_2,DAT_0062a740,DAT_0062a744,DAT_0062a748,DAT_0062a74c,param_3
                        );
    if (-1 < (int)uVar1) {
      uVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


