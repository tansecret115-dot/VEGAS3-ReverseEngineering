/* Module: vegas30.exe
   Function: FUN_005db6e0
   Address: 005db6e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005db6e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = riff64_PrepareList(param_1,DAT_0062a7b0,DAT_0062a7b4,DAT_0062a7b8,DAT_0062a7bc,&local_8);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_005dac40(param_1,param_2,DAT_0062a7c0,DAT_0062a7c4,DAT_0062a7c8,DAT_0062a7cc,param_3
                        );
    if (-1 < (int)uVar1) {
      uVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


