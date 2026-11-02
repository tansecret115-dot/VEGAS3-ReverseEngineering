/* Module: sfcd.cdd
   Function: FUN_00401430
   Address: 00401430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00401430(int *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  byte *pbVar12;
  byte local_c [4];
  byte local_8;
  byte local_4;
  
  piVar9 = param_1;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  FUN_0041eec0((uint *)local_c,param_1[3]);
  pbVar12 = param_2 + 3;
  pbVar1 = param_2 + 4;
  *pbVar12 = local_c[0];
  pbVar2 = param_2 + 5;
  *pbVar1 = local_8;
  *pbVar2 = local_4;
  iVar6 = param_1[2];
  if (iVar6 != 0) {
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        return;
      }
      param_2[1] = 0xaa;
      param_2[2] = 1;
      *param_2 = *param_2 & 0xf1 | 1;
      FUN_0041eec0((uint *)local_c,param_1[4]);
      pbVar3 = param_2 + 7;
      *pbVar3 = local_c[0];
      pbVar4 = param_2 + 8;
      param_2[9] = local_4;
      *pbVar4 = local_8;
      param_1[3] = param_1[3] + 1;
      param_1[4] = param_1[4] + 1;
      param_2[0xf] = param_2[0xf] & 0x7f | (char)param_1[0xc] << 7;
      iVar6 = param_1[0xd];
      param_1[0xd] = iVar6 + 1;
      if (iVar6 + 1 == 0x13) {
        param_1[0xc] = (uint)(param_1[0xc] == 0);
        param_1[0xd] = 0;
      }
      FUN_0041f150(pbVar12,(uint)*pbVar12);
      FUN_0041f150(pbVar1,(uint)*pbVar1);
      FUN_0041f150(pbVar2,(uint)*pbVar2);
      FUN_0041f150(pbVar3,(uint)*pbVar3);
      FUN_0041f150(pbVar4,(uint)*pbVar4);
      FUN_0041f150(param_2 + 9,(uint)param_2[9]);
      return;
    }
    iVar6 = FUN_0041f470(param_1[0xb]);
    if (param_1[4] == param_1[6]) {
      iVar7 = FUN_0041f490(param_1[0xb],param_1[8]);
      param_1[9] = param_1[9] + 1;
      uVar8 = FUN_0041f3e0(iVar7);
      if (uVar8 < (uint)param_1[9]) {
        iVar7 = param_1[8];
        param_1[9] = 0;
        param_1[8] = iVar7 + 1U;
        iVar7 = FUN_0041f490(param_1[0xb],iVar7 + 1U);
        uVar8 = FUN_0041f3e0(iVar7);
        if (*(int *)(iVar7 + 0x14) == *(int *)(iVar7 + 0x10)) {
          param_1[9] = 1;
        }
        param_1[3] = *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10);
        if (*(int *)(param_1[0xb] + 0x1d78) == 0) {
          param_1[0xf] = 0x4b;
        }
        else {
          param_1[0xf] = param_1[0xe] + 0x19;
        }
      }
      if ((uint)param_1[9] < uVar8) {
        piVar9 = (int *)FUN_0041f3f0(iVar7,param_1[9]);
        iVar7 = *piVar9;
      }
      else {
        if (param_1[8] != iVar6 + -1) {
          iVar7 = FUN_0041f490(param_1[0xb],param_1[8] + 1);
          param_1[6] = *(int *)(iVar7 + 0x10);
          goto LAB_0040164d;
        }
        iVar7 = *(int *)(param_1[0xb] + 0x1d8c);
      }
      param_1[6] = iVar7;
    }
LAB_0040164d:
    if (param_1[4] != param_1[7]) goto LAB_004016d1;
    iVar7 = param_1[8];
    if (param_1[0xc] == 0) {
      if (iVar7 == iVar6 + -1) {
        param_1[7] = *(int *)(param_1[0xb] + 0x1d8c);
      }
      else {
        iVar6 = FUN_0041f490(param_1[0xb],iVar7 + 1);
        iVar6 = *(int *)(iVar6 + 0x14);
LAB_004016c1:
        param_1[7] = iVar6;
      }
    }
    else {
      if (iVar7 != iVar6 + -1) {
        iVar6 = FUN_0041f490(param_1[0xb],iVar7 + 1);
        uVar8 = *(int *)(iVar6 + 0x14) - *(int *)(iVar6 + 0x10);
        if (uVar8 < 0x96) {
          uVar8 = 0x96;
        }
        iVar6 = *(int *)(iVar6 + 0x14) - uVar8;
        goto LAB_004016c1;
      }
      param_1[7] = *(int *)(param_1[0xb] + 0x1d8c) + -0x96;
    }
    param_1[0xc] = (uint)(param_1[0xc] == 0);
LAB_004016d1:
    *param_2 = *param_2 & 0xf1 | 1;
    iVar6 = FUN_0041f490(param_1[0xb],param_1[8]);
    pbVar12 = param_2 + 1;
    pbVar1 = param_2 + 2;
    *param_2 = *(char *)(iVar6 + 8) << 4 | *param_2 & 0xf;
    *pbVar12 = (char)param_1[5] + (char)param_1[8];
    *pbVar1 = *(byte *)(param_1 + 9);
    FUN_0041eec0((uint *)local_c,param_1[4]);
    param_2[7] = local_c[0];
    param_2[8] = local_8;
    param_2[9] = local_4;
    FUN_0041f150(pbVar12,(uint)*pbVar12);
    FUN_0041f150(pbVar1,(uint)*pbVar1);
    FUN_0041f150(param_2 + 3,(uint)param_2[3]);
    FUN_0041f150(param_2 + 4,(uint)param_2[4]);
    FUN_0041f150(param_2 + 5,(uint)param_2[5]);
    FUN_0041f150(param_2 + 7,(uint)param_2[7]);
    FUN_0041f150(param_2 + 8,(uint)param_2[8]);
    FUN_0041f150(param_2 + 9,(uint)param_2[9]);
    param_2[0xf] = param_2[0xf] & 0x7f | (char)param_1[0xc] << 7;
    if (param_1[9] == 0) {
      iVar6 = param_1[3] + -1;
    }
    else {
      iVar6 = param_1[3] + 1;
    }
    param_1[3] = iVar6;
    FUN_00401230((int)param_1,param_2);
    FUN_00401320((int)param_1,param_2);
    iVar6 = param_1[4];
    param_1[4] = iVar6 + 1;
    if (*(int *)(param_1[0xb] + 0x1d8c) != iVar6 + 1) {
      return;
    }
    param_1[2] = 2;
    param_1[3] = 0;
    param_1[0xc] = 0;
    return;
  }
  *param_2 = *param_2 & 0xf1 | 1;
  switch(param_1[1]) {
  case 0:
    param_2[2] = (char)param_1[5] + (char)param_1[8];
    piVar10 = (int *)FUN_0041f490(param_1[0xb],param_1[8]);
    FUN_0041eec0((uint *)local_c,piVar10[5]);
    param_2[7] = local_c[0];
    param_2[8] = local_8;
    param_2[9] = local_4;
    iVar6 = *param_1;
    *param_1 = iVar6 + 1;
    if (iVar6 + 1 == 3) {
      *param_1 = 0;
      param_1[8] = param_1[8] + 1;
      iVar6 = FUN_0041f470(param_1[0xb]);
      if (iVar6 == param_1[8]) {
        param_1[1] = 1;
        param_1[8] = 0;
      }
    }
    *param_2 = (char)piVar10[2] << 4 | *param_2 & 0xf;
    FUN_0041f150(param_2 + 2,(uint)param_2[2]);
    FUN_0041f150(pbVar12,(uint)*pbVar12);
    FUN_0041f150(pbVar1,(uint)*pbVar1);
    FUN_0041f150(pbVar2,(uint)*pbVar2);
    FUN_0041f150(param_2 + 7,(uint)param_2[7]);
    FUN_0041f150(param_2 + 8,(uint)param_2[8]);
    pbVar12 = param_2 + 9;
    uVar8 = (uint)*pbVar12;
    param_1 = piVar10;
    break;
  case 1:
    param_2[2] = 0xa0;
    param_2[7] = *(byte *)(param_1 + 5);
    iVar6 = *param_1;
    *param_1 = iVar6 + 1;
    if (iVar6 + 1 == 3) {
      *param_1 = 0;
      param_1[1] = 2;
    }
    FUN_0041f150(pbVar12,(uint)*pbVar12);
    bVar5 = *pbVar1;
    goto LAB_0040196f;
  case 2:
    param_2[2] = 0xa1;
    uVar11 = FUN_0041f470(param_1[0xb]);
    param_2[7] = ((char)param_1[5] + (char)uVar11) - 1;
    iVar6 = *param_1;
    *param_1 = iVar6 + 1;
    if (iVar6 + 1 == 3) {
      *param_1 = 0;
      param_1[1] = 3;
    }
    FUN_0041f150(pbVar12,(uint)*pbVar12);
    bVar5 = *pbVar1;
LAB_0040196f:
    FUN_0041f150(pbVar1,(uint)bVar5);
    FUN_0041f150(pbVar2,(uint)*pbVar2);
    pbVar12 = param_2 + 7;
    uVar8 = (uint)*pbVar12;
    break;
  case 3:
    param_2[2] = 0xa2;
    FUN_0041eec0((uint *)local_c,*(uint *)(param_1[0xb] + 0x1d8c));
    param_2[7] = local_c[0];
    param_2[8] = local_8;
    param_2[9] = local_4;
    iVar6 = *param_1;
    *param_1 = iVar6 + 1;
    if (iVar6 + 1 == 3) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    FUN_0041f150(pbVar12,(uint)*pbVar12);
    FUN_0041f150(pbVar1,(uint)*pbVar1);
    FUN_0041f150(pbVar2,(uint)*pbVar2);
    FUN_0041f150(param_2 + 7,(uint)param_2[7]);
    FUN_0041f150(param_2 + 8,(uint)param_2[8]);
    pbVar12 = param_2 + 9;
    uVar8 = (uint)*pbVar12;
    break;
  default:
    goto switchD_0040180d_default;
  }
  FUN_0041f150(pbVar12,uVar8);
switchD_0040180d_default:
  FUN_00401230((int)piVar9,param_2);
  iVar6 = piVar9[3];
  piVar9[3] = iVar6 + 1;
  if (piVar9[10] == iVar6 + 1) {
    iVar6 = FUN_0041f490(piVar9[0xb],0);
    piVar9[8] = 0;
    piVar9[2] = 1;
    piVar9[0xc] = 1;
    piVar9[9] = 0;
    piVar9[4] = 0;
    piVar9[3] = param_1[5] - *(int *)(iVar6 + 0x10);
    piVar9[6] = *(int *)(iVar6 + 0x14);
    piVar9[7] = *(int *)(iVar6 + 0x14);
    piVar9[0xe] = 0x4b;
    if (*(int *)(piVar9[0xb] + 0x1d78) != 0) {
      piVar9[0xf] = 100;
      return;
    }
    piVar9[0xf] = 0x4b;
  }
  return;
}


