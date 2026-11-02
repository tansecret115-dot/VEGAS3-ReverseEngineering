/* Module: vegas30.exe
   Function: FUN_005dc4c0
   Address: 005dc4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dc4c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_3 + 0x24);
  iVar2 = *piVar1;
  if (iVar2 < 1) {
    return 0;
  }
  uVar3 = riff64_PrepareList(param_1,DAT_0062a570,DAT_0062a574,DAT_0062a578,DAT_0062a57c,&local_8);
  if (-1 < (int)uVar3) {
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = FUN_005dc1c0(param_1,param_2,*(undefined4 *)(piVar1[2] + iVar4 * 4));
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    uVar3 = riff64_CompleteChunk(param_1,local_8,local_4);
    uVar3 = uVar3 & (-1 < (int)uVar3) - 1;
  }
  return uVar3;
}


