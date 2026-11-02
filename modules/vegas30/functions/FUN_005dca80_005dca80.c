/* Module: vegas30.exe
   Function: FUN_005dca80
   Address: 005dca80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dca80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar2 = (int *)FUN_005d9710(param_3);
  iVar1 = *piVar2;
  if (iVar1 < 1) {
    return 0;
  }
  uVar3 = riff64_PrepareList(param_1,DAT_0062a7d0,DAT_0062a7d4,DAT_0062a7d8,DAT_0062a7dc,&local_8);
  if (-1 < (int)uVar3) {
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        uVar3 = FUN_005dac40(param_1,param_2,DAT_0062a7e0,DAT_0062a7e4,DAT_0062a7e8,DAT_0062a7ec,
                             *(undefined4 *)(piVar2[2] + iVar4 * 4));
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    uVar3 = riff64_CompleteChunk(param_1,local_8,local_4);
    uVar3 = uVar3 & (-1 < (int)uVar3) - 1;
  }
  return uVar3;
}


