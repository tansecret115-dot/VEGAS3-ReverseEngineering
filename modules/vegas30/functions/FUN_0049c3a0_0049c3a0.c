/* Module: vegas30.exe
   Function: FUN_0049c3a0
   Address: 0049c3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049c3a0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if ((*(uint *)(param_1 + 0x18) & 0x1000000) == 0) {
    if ((*(uint *)(param_1 + 0x18) & 0x8000000) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0xce4) == 0) {
      return 0;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0xce4) + 0x69c);
    if ((*(int *)(iVar4 + 0x1c) + -4 <= param_3) && (param_3 <= *(int *)(iVar4 + 0x24) + 4)) {
      return 0;
    }
    iVar4 = **(int **)(param_1 + 0xcd8);
    if (*(int *)(param_1 + 0xcec) == 0) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0xbc8);
    FUN_005b83b0(uVar1,1);
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xcd8) + 8) + iVar5 * 4);
        FUN_005c97b0(uVar1,iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x218) + 0x80),
                     *(undefined4 *)(*(int *)(iVar2 + 0x218) + 0x84),0);
        iVar5 = iVar5 + 1;
        *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(*(int *)(iVar2 + 0x218) + 0xa4);
      } while (iVar5 < iVar4);
    }
    if (DAT_0064778c != 0) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      iVar4 = *piVar3;
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          iVar2 = *(int *)(piVar3[2] + iVar5 * 4);
          if ((*(uint *)(iVar2 + 0x10) & 0x100000) != 0) {
            FUN_0047f450(iVar2,1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
    FUN_005b84d0(uVar1,1);
    iVar4 = FUN_004aae50(param_1,*(undefined4 *)(param_1 + 0xcd8));
    *(int *)(param_1 + 0x16c) = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = FUN_005b8630(uVar1);
    *(undefined4 *)(iVar4 + 0x3b8) = 0;
    FUN_004ea040(uVar1,0);
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfbffffff | 0x1000000;
  }
  return 1;
}


