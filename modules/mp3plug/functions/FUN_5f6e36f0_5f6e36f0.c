/* Module: mp3plug.dll
   Function: FUN_5f6e36f0
   Address: 5f6e36f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f6e36f0(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int local_1c;
  
  iVar10 = in_EAX * 0x2704;
  local_1c = 0;
  local_20 = 0;
  do {
    iVar5 = local_1c * 0x300;
    iVar7 = iVar5 + 0x120c + iVar10 + param_2;
    FUN_5f6fce90(in_EAX * 0x2704 + 0xc + param_2,iVar7,local_1c);
    FUN_5f6d8bb0(0,iVar5 + *(int *)(param_1 + 0x7d8) * 4 + 0x120c + iVar10 + param_2,
                 0xc0 - *(int *)(param_1 + 0x7d8));
    iVar8 = local_1c * 0x34;
    puVar4 = (undefined4 *)(iVar8 + 0x2348 + iVar10 + param_2);
    FUN_5f6fe000(iVar7,param_1 + 0x174,*(int *)(param_1 + 0x170),(int)puVar4);
    FUN_5f6d8bb0(0,iVar8 + *(int *)(param_1 + 0x170) * 4 + 0x2348 + iVar10 + param_2,
                 *(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x170));
    FUN_5f6d5090(puVar4,(undefined4 *)(local_20 + 0x1b0c + iVar10 + param_2),
                 *(uint *)(param_1 + 0x170));
    if ((in_EAX == 1) && (*(int *)(param_1 + 0x21c) != 0)) {
      FUN_5f6fe0d0(param_2 + 0x120c + iVar5,param_2 + 0x3910 + iVar5,param_1 + 0x174,
                   *(int *)(param_1 + 0x170),param_2 + 0x23e4 + iVar8,param_2 + 0x4ae8 + iVar8);
    }
    iVar7 = *(int *)(param_1 + 4);
    if (0 < iVar7) {
      iVar9 = 0;
      iVar6 = local_20;
      do {
        iVar7 = iVar6 + iVar10;
        fVar3 = *(float *)(param_1 + 0x7e0) * *(float *)(param_2 + 0x1b0c + iVar7);
        *(float *)(param_2 + 0x1d7c + iVar7) = fVar3;
        fVar2 = *(float *)(param_1 + 0x7dc);
        if (fVar3 < fVar2) {
          fVar2 = fVar3;
        }
        *(float *)(param_2 + 0x1d7c + iVar7) = fVar2;
        iVar7 = *(int *)(param_1 + 4);
        iVar9 = iVar9 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar9 < iVar7);
    }
    pfVar1 = (float *)(param_2 + 0x1d7c + local_20 + iVar10);
    FUN_5f6fa960(iVar7,param_1 + 0x7e4,param_1 + 0x944,(int)pfVar1);
    FUN_5f6d5f70(pfVar1,(float *)(param_1 + 0x670),pfVar1,*(uint *)(param_1 + 4));
    FUN_5f6fe170(in_EAX * 0x2704 + 0x214c + param_2,*(int *)(param_1 + 4),*(float *)(param_1 + 2000)
                 ,*(float *)(param_1 + 0x7d4),(int)pfVar1);
    FUN_5f6d5090(pfVar1,(undefined4 *)(param_2 + 0x22ac + iVar8 + iVar10),*(uint *)(param_1 + 0x170)
                );
    FUN_5f6d8bb0(0x60ad78ec,iVar8 + *(int *)(param_1 + 0x170) * 4 + 0x22ac + iVar10 + param_2,
                 *(int *)(param_1 + 0x16c) - *(int *)(param_1 + 0x170));
    if ((in_EAX == 1) && (*(int *)(param_1 + 0x22c) != 0)) {
      iVar5 = FUN_5f6fd8b0(*(int *)(param_1 + 0x218),param_2 + 0x120c + iVar5,
                           param_2 + 0x3910 + iVar5,param_2 + 0x2348 + iVar8,
                           param_2 + 0x4a4c + iVar8,param_2 + 0x22ac + iVar8,
                           param_2 + 0x49b0 + iVar8,param_1 + 0x174,*(int *)(param_1 + 0x234),
                           *(int *)(param_1 + 0x170),1,*(float *)(param_1 + 0x230),
                           param_2 + 0x4b90 + iVar8,param_2 + 0x4c2c + iVar8,
                           param_2 + 0x4cc8 + iVar8,param_2 + 0x4d64 + iVar8);
    }
    else {
      iVar5 = *(int *)(param_1 + 0x170);
    }
    local_20 = local_20 + 0xd0;
    iVar7 = local_1c + 1;
    *(int *)(param_2 + 0x4b84 + local_1c * 4) = iVar5;
    local_1c = iVar7;
  } while (iVar7 < 3);
  return 0;
}


