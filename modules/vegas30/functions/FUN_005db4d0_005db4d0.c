/* Module: vegas30.exe
   Function: FUN_005db4d0
   Address: 005db4d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005db4d0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 == (int *)0x0) {
    return 0;
  }
  uVar2 = riff64_PrepareList(param_1,param_4,param_5,param_6,param_7,&param_4);
  if (-1 < (int)uVar2) {
    iVar1 = *param_3;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_005dac40(param_1,param_2,DAT_0062a6f0,DAT_0062a6f4,DAT_0062a6f8,DAT_0062a6fc,
                             *(undefined4 *)(param_3[2] + iVar3 * 4));
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    uVar2 = riff64_CompleteChunk(param_1,param_4,param_5);
    uVar2 = uVar2 & (-1 < (int)uVar2) - 1;
  }
  return uVar2;
}


