/* Module: vegas30.exe
   Function: FUN_00539d30
   Address: 00539d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00539d30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1 + 0xe80;
  FUN_005386a0(iVar1,0);
  FUN_00538700(iVar1);
  if (*(int *)(param_1 + 0xe8c) == 400) {
    iVar2 = FUN_00445d30(iVar1,0xffffffff);
    iVar4 = 0;
    if (*(int **)(iVar2 + 0x60) != (int *)0x0) {
      iVar4 = **(int **)(iVar2 + 0x60);
    }
    iVar4 = iVar4 + -1;
    iVar6 = 0;
    iVar5 = iVar4;
    if (-1 < iVar4) {
      while (iVar6 < iVar4) {
        if ((*(byte *)(*(int *)(*(int *)(iVar2 + 0x60) + 4) * iVar5 + 0x20 +
                      *(int *)(*(int *)(iVar2 + 0x60) + 8)) & 2) != 0) {
          FUN_0044db10(iVar1,iVar5);
          iVar6 = iVar6 + 1;
        }
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) {
          FUN_00538740(iVar1,0);
          return;
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0xe8c) == 0x191) {
    FUN_0050c130(iVar1);
    piVar3 = (int *)FUN_00522a00(0xffffffff);
    iVar4 = 0;
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
    }
    iVar5 = 0;
    iVar2 = iVar4 + -1;
    while ((-1 < iVar2 && (iVar5 < iVar4 + -1))) {
      if ((*(byte *)(piVar3[1] * iVar2 + 0x14 + piVar3[2]) & 2) != 0) {
        FUN_0050ce30(*(undefined4 *)(DAT_0064762c + 0xa4),iVar2);
        iVar5 = iVar5 + 1;
      }
      iVar2 = iVar2 + -1;
    }
  }
  FUN_00538740(iVar1,0);
  return;
}


