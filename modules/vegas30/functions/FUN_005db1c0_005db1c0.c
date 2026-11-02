/* Module: vegas30.exe
   Function: FUN_005db1c0
   Address: 005db1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005db1c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if (*(int *)(param_3 + 0x18) != 0) {
    uVar1 = riff64_PrepareList(param_1,param_4,param_5,param_6,param_7,&param_4);
    if ((-1 < (int)uVar1) &&
       (uVar1 = FUN_005dac40(param_1,param_2,DAT_0062a690,DAT_0062a694,DAT_0062a698,DAT_0062a69c,
                             param_3), -1 < (int)uVar1)) {
      if (*(uint **)(param_3 + 0x18) != (uint *)0x0) {
        uVar1 = **(uint **)(param_3 + 0x18);
        uVar3 = 0;
        if (uVar1 != 0) {
          do {
            uVar2 = FUN_005dac40(param_1,param_2,DAT_0062a6a0,DAT_0062a6a4,DAT_0062a6a8,DAT_0062a6ac
                                 ,*(undefined4 *)
                                   (*(int *)(*(int *)(param_3 + 0x18) + 8) + uVar3 * 4));
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar1);
        }
      }
      uVar1 = riff64_CompleteChunk(param_1,param_4,param_5);
      uVar1 = uVar1 & (-1 < (int)uVar1) - 1;
    }
    return uVar1;
  }
  return 0;
}


