/* Module: sfpublish.dll
   Function: FUN_00427bb0
   Address: 00427bb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00427bb0(uchar *param_1,int *param_2,uint param_3,int param_4,char *param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  uint local_20 [7];
  
  bVar1 = false;
  if ((param_6 >> 1 & 1) == 0) {
    bVar8 = param_3 < (uint)param_2[6];
    param_3 = param_3 - param_2[6];
    param_4 = (param_4 - param_2[7]) - (uint)bVar8;
  }
  if ((param_4 < 1) && (param_4 < 0)) {
    bVar1 = true;
    bVar8 = param_3 != 0;
    param_3 = -param_3;
    *param_1 = '-';
    param_4 = -(param_4 + (uint)bVar8);
    param_1 = param_1 + 1;
  }
  iVar3 = *param_2;
  switch(iVar3) {
  case 0:
    ftol();
    goto LAB_00428092;
  case 1:
    local_20[0] = 0;
    FUN_00427a20(param_3,param_4,local_20,1000.0);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 2:
    iVar4 = 5;
    bVar8 = false;
    iVar3 = 0;
    bVar9 = true;
    pbVar6 = (byte *)param_5;
    pbVar7 = &DAT_0043b4d8;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar3 == 0) {
      ftol();
      param_5 = "$I64d";
    }
    goto LAB_00428092;
  case 3:
    local_20[0] = 0;
    FUN_00427a20(param_3,param_4,local_20,*(double *)(param_2 + 2));
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 4:
    iVar4 = 5;
    bVar8 = false;
    iVar3 = 0;
    bVar9 = true;
    pbVar6 = (byte *)param_5;
    pbVar7 = &DAT_0043b4d8;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar3 == 0) {
      floor((double)CONCAT44(param_4,param_3) * _DAT_0043b5d0 * *(double *)(param_2 + 2) +
            _DAT_0043b5e0);
      ftol();
      param_5 = "$I64d";
    }
    goto LAB_00428092;
  case 5:
    FUN_00427980();
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 6:
    local_20[0] = 5;
    FUN_00427a20(param_3,param_4,local_20,29.97002997002997);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 7:
    local_20[0] = 1;
    FUN_00427a20(param_3,param_4,local_20,30.0);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 8:
    local_20[0] = 2;
    FUN_00427a20(param_3,param_4,local_20,30.0);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 9:
    local_20[0] = 3;
    FUN_00427a20(param_3,param_4,local_20,25.0);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 10:
    local_20[0] = 4;
    FUN_00427a20(param_3,param_4,local_20,24.0);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  default:
    goto LAB_00428092;
  case 0xc:
    __alldiv(param_3 + 5,param_4 + (uint)(0xfffffffa < param_3),10,0);
    goto LAB_00428092;
  case 0xd:
    FUN_00427980();
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 0xe:
    iVar4 = 5;
    bVar8 = false;
    iVar3 = 0;
    bVar9 = true;
    pbVar6 = (byte *)param_5;
    pbVar7 = &DAT_0043b4d8;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar3 == 0) {
      ftol();
      param_5 = "$I64d";
    }
LAB_00428092:
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 0xf:
  case 0x10:
    uVar10 = ftol();
    uVar5 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar2 = (uint)uVar10;
    if (iVar3 == 0xf) {
      __alldiv(uVar2,uVar5,0x28,0);
      uVar11 = 0x28;
    }
    else {
      __alldiv(uVar2,uVar5,0x10,0);
      uVar11 = 0x10;
    }
    __allrem(uVar2,uVar5,uVar11,0);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
    break;
  case 0x11:
    local_20[0] = 0;
    FUN_00427a20(param_3,param_4,local_20,75.0);
    iVar3 = FUN_00418d60(param_1,(BYTE *)param_5);
  }
  if (bVar1) {
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}


