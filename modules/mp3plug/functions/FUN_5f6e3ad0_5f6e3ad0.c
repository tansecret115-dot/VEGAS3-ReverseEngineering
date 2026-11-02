/* Module: mp3plug.dll
   Function: FUN_5f6e3ad0
   Address: 5f6e3ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f6e3ad0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = in_EAX * 0x2704;
  FUN_5f6fcd00(in_EAX * 0x2704 + 0xc + param_2,in_EAX * 0x2704 + 0x120c + param_2,
               *(int *)(param_2 + 4 + iVar6));
  FUN_5f6fcf40(in_EAX * 0x2704 + 0x120c + param_2);
  FUN_5f6d8bb0(0,iVar6 + 0x120c + *(int *)(param_1 + 0x7d8) * 4 + param_2,
               0x240 - *(int *)(param_1 + 0x7d8));
  FUN_5f6fe000(in_EAX * 0x2704 + 0x120c + param_2,param_1 + 0x174,*(int *)(param_1 + 0x170),
               in_EAX * 0x2704 + 0x2348 + param_2);
  FUN_5f6d8bb0(0,iVar6 + 0x2348 + *(int *)(param_1 + 0x170) * 4 + param_2,
               *(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x170));
  FUN_5f6d5090((undefined4 *)(in_EAX * 0x2704 + 0x2348 + param_2),
               (undefined4 *)(in_EAX * 0x2704 + 0x1b0c + param_2),*(uint *)(param_1 + 0x170));
  if ((in_EAX == 1) && (*(int *)(param_1 + 0x21c) != 0)) {
    FUN_5f6fe0d0(param_2 + 0x120c,param_2 + 0x3910,param_1 + 0x174,*(int *)(param_1 + 0x170),
                 param_2 + 0x23e4,param_2 + 0x4ae8);
  }
  iVar3 = *(int *)(param_1 + 4);
  if (0 < iVar3) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar3 = iVar4 + iVar6;
      fVar2 = *(float *)(param_1 + 0x7e0) * *(float *)(param_2 + 0x1b0c + iVar3);
      *(float *)(param_2 + 0x1d7c + iVar3) = fVar2;
      fVar1 = *(float *)(param_1 + 0x7dc);
      if (fVar2 < fVar1) {
        fVar1 = fVar2;
      }
      *(float *)(param_2 + 0x1d7c + iVar3) = fVar1;
      iVar3 = *(int *)(param_1 + 4);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < iVar3);
  }
  FUN_5f6fa960(iVar3,param_1 + 0x7e4,param_1 + 0x944,in_EAX * 0x2704 + 0x1d7c + param_2);
  FUN_5f6d5f70((float *)(in_EAX * 0x2704 + 0x1d7c + param_2),(float *)(param_1 + 0x670),
               (float *)(in_EAX * 0x2704 + 0x1d7c + param_2),*(uint *)(param_1 + 4));
  if (*(int *)(param_2 + 4 + iVar6) == 3) {
    FUN_5f6d8bb0(0x60ad78ec,in_EAX * 0x2704 + 0x214c + param_2,*(uint *)(param_1 + 4));
  }
  FUN_5f6fe170(in_EAX * 0x2704 + 0x214c + param_2,*(int *)(param_1 + 4),*(float *)(param_1 + 2000),
               *(float *)(param_1 + 0x7d4),in_EAX * 0x2704 + 0x1d7c + param_2);
  if (*(int *)(param_2 + 4 + iVar6) == 1) {
    FUN_5f6d8bb0(0x60ad78ec,in_EAX * 0x2704 + 0x214c + param_2,*(uint *)(param_1 + 4));
  }
  FUN_5f6d5090((undefined4 *)(in_EAX * 0x2704 + 0x1d7c + param_2),
               (undefined4 *)(in_EAX * 0x2704 + 0x22ac + param_2),*(uint *)(param_1 + 0x170));
  FUN_5f6d8bb0(0x60ad78ec,iVar6 + 0x22ac + *(int *)(param_1 + 0x170) * 4 + param_2,
               *(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x170));
  if ((in_EAX == 1) && (*(int *)(param_1 + 0x22c) != 0)) {
    iVar6 = FUN_5f6fd8b0(*(int *)(param_1 + 0x218),param_2 + 0x120c,param_2 + 0x3910,
                         param_2 + 0x2348,param_2 + 0x4a4c,param_2 + 0x22ac,param_2 + 0x49b0,
                         param_1 + 0x174,*(int *)(param_1 + 0x234),*(int *)(param_1 + 0x170),0,
                         *(float *)(param_1 + 0x230),param_2 + 0x4b90,param_2 + 0x4c2c,
                         param_2 + 0x4cc8,param_2 + 0x4d64);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x170);
  }
  *(int *)(param_2 + 0x4b84) = iVar6;
  if ((in_EAX == 1) && (*(int *)(param_1 + 0x220) != 0)) {
    FUN_5f6fd4f0(*(uint *)(param_2 + 0x4b84),param_1,param_2 + 0x23e4,param_2 + 0x4ae8,
                 (float *)(param_2 + 0x4e04));
  }
  return 0;
}


