/* Module: vegas30.exe
   Function: FUN_005dc750
   Address: 005dc750
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005dc750(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar5 = 0;
  piVar3 = (int *)FUN_005b87b0(param_3);
  iVar1 = *piVar3;
  if ((*(int *)(param_3 + 0x1d8) != 0) &&
     (piVar2 = *(int **)(*(int *)(param_3 + 0x1d8) + 0x24), piVar2 != (int *)0x0)) {
    iVar5 = *piVar2;
  }
  if ((iVar1 < 1) && (iVar5 < 1)) {
    return 0;
  }
  uVar4 = riff64_PrepareList(param_1,DAT_0062a540,DAT_0062a544,DAT_0062a548,DAT_0062a54c,&local_8);
  if (-1 < (int)uVar4) {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        uVar4 = FUN_005dc570(param_1,param_2,*(undefined4 *)(piVar3[2] + iVar5 * 4),0);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    uVar4 = riff64_CompleteChunk(param_1,local_8,local_4);
    uVar4 = uVar4 & (-1 < (int)uVar4) - 1;
  }
  return uVar4;
}


