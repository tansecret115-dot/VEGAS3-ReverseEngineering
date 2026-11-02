/* Module: vegas30.exe
   Function: FUN_005dbff0
   Address: 005dbff0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dbff0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = riff64_PrepareList(param_1,DAT_0062a750,DAT_0062a754,DAT_0062a758,DAT_0062a75c,&local_8);
  if (-1 < (int)uVar1) {
    uVar1 = FUN_005dac40(param_1,param_2,DAT_0062a760,DAT_0062a764,DAT_0062a768,DAT_0062a76c,param_3
                        );
    if (-1 < (int)uVar1) {
      uVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


