/* Module: vegas30.exe
   Function: FUN_005dc570
   Address: 005dc570
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dc570(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = riff64_PrepareList(param_1,DAT_0062a550,DAT_0062a554,DAT_0062a558,DAT_0062a55c,&local_8);
  if ((((-1 < (int)uVar1) &&
       (uVar1 = FUN_005dac40(param_1,param_2,DAT_0062a560,DAT_0062a564,DAT_0062a568,DAT_0062a56c,
                             param_3,param_4), -1 < (int)uVar1)) &&
      (uVar1 = FUN_005dc4c0(param_1,param_2,param_3), -1 < (int)uVar1)) &&
     (uVar1 = FUN_005db1c0(param_1,param_2,param_3 + 0x638,DAT_0062a680,DAT_0062a684,DAT_0062a688,
                           DAT_0062a68c), -1 < (int)uVar1)) {
    if (*(int *)(param_3 + 4) == 2) {
      uVar1 = FUN_005db8b0(param_1,param_2,param_3 + 0x38,param_3);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = FUN_005dba90(param_1,param_2,param_3);
    }
    else if (*(int *)(param_3 + 4) == 3) {
      uVar1 = FUN_005db6e0(param_1,param_2,param_3 + 0x38);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = FUN_005db4d0(param_1,param_2,*(undefined4 *)(param_3 + 0x78),DAT_0062a6c0,DAT_0062a6c4
                           ,DAT_0062a6c8,DAT_0062a6cc);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = FUN_005db4d0(param_1,param_2,*(undefined4 *)(param_3 + 0x7c),DAT_0062a6d0,DAT_0062a6d4
                           ,DAT_0062a6d8,DAT_0062a6dc);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar1 = FUN_005db2e0(param_1,param_2,param_3 + 0x80,DAT_0062a710,DAT_0062a714,DAT_0062a718,
                           DAT_0062a71c);
    }
    if (-1 < (int)uVar1) {
      uVar1 = riff64_CompleteChunk(param_1,local_8,local_4);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
  }
  return uVar1;
}


