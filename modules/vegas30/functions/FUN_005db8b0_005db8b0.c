/* Module: vegas30.exe
   Function: FUN_005db8b0
   Address: 005db8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005db8b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = riff64_PrepareList(param_1,DAT_0062a790,DAT_0062a794,DAT_0062a798,DAT_0062a79c,&local_8);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_005dac40(param_1,param_2,DAT_0062a7a0,DAT_0062a7a4,DAT_0062a7a8,DAT_0062a7ac,param_3
                         ,param_4);
    if (-1 < (int)uVar1) {
      uVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


