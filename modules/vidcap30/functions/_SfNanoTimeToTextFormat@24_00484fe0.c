/* Module: vidcap30.exe
   Function: _SfNanoTimeToTextFormat@24
   Address: 00484fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfNanoTimeToTextFormat_24
              (undefined1 *param_1,undefined4 *param_2,uint param_3,int param_4,char *param_5,
              uint param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  double dVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int local_34;
  int local_30;
  int local_2c;
  double local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0x84fe0  576  _SfNanoTimeToTextFormat@24 */
  uVar3 = param_6 >> 1 & 1;
  local_2c = 0;
  if (uVar3 == 0) {
    bVar6 = param_3 < (uint)param_2[6];
    param_3 = param_3 - param_2[6];
    param_4 = (param_4 - param_2[7]) - (uint)bVar6;
  }
  if ((param_4 < 1) && (param_4 < 0)) {
    local_2c = 1;
    bVar6 = param_3 != 0;
    param_3 = -param_3;
    *param_1 = 0x2d;
    param_4 = -(param_4 + (uint)bVar6);
    param_1 = param_1 + 1;
  }
  dVar8 = (double)CONCAT44(param_4,param_3);
  local_28 = (double)CONCAT44(local_28._4_4_,*param_2);
  switch(*param_2) {
  case 0:
    local_28 = (double)(ulonglong)(uint)param_2[1];
    dVar8 = (double)ftol();
    goto LAB_004854c2;
  case 1:
    local_20 = 0;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,0,0x408f4000);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
    break;
  case 2:
    iVar2 = 5;
    local_28 = (double)CONCAT44(param_4,param_3) * _DAT_00589f40;
    bVar6 = false;
    iVar1 = 0;
    bVar7 = true;
    pbVar4 = (byte *)param_5;
    pbVar5 = &DAT_005949e4;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar7 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar1 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
    }
    dVar8 = local_28;
    if (iVar1 == 0) {
      dVar8 = (double)ftol();
      param_5 = "$I64d";
    }
    goto LAB_004854c2;
  case 3:
    local_20 = 0;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,param_2[2],param_2[3]);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
    break;
  case 4:
    iVar2 = 5;
    bVar6 = false;
    iVar1 = 0;
    bVar7 = true;
    pbVar4 = (byte *)param_5;
    pbVar5 = &DAT_005949e4;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar7 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar1 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
    }
    local_28 = (double)CONCAT44(param_4,param_3) * _DAT_00589f40 * *(double *)(param_2 + 2) +
               _DAT_00589f38;
    dVar8 = local_28;
    if (iVar1 == 0) {
      floor(local_28);
      dVar8 = (double)ftol();
      param_5 = "$I64d";
    }
    goto LAB_004854c2;
  case 5:
    _SfNanoTimeToMeasures_24(param_3,param_4,param_2,&local_30,&local_34,&local_28);
    if (uVar3 == 0) {
      local_30 = local_30 + 1;
      local_34 = local_34 + 1;
    }
    iVar1 = SfPrintF(param_1,param_5,local_30,local_34,local_28._0_4_);
    break;
  case 6:
    local_20 = 5;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,0xe2556b28,0x403df853);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
    break;
  case 7:
    local_20 = 1;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,0,0x403e0000);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
    break;
  case 8:
    local_20 = 2;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,0,0x403e0000);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
    break;
  case 9:
    local_20 = 3;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,0,0x40390000);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
    break;
  case 10:
    local_20 = 4;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,0,0x40380000);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
    break;
  default:
    goto LAB_004854c2;
  case 0xc:
    dVar8 = (double)__alldiv(param_3 + 5,param_4 + (uint)(0xfffffffa < param_3),10,0);
    goto LAB_004854c2;
  case 0xd:
    _SfNanoTimeToMeasures_24(param_3,param_4,param_2,&local_34,&local_30,&local_28);
    iVar1 = SfPrintF(param_1,param_5,local_34,local_30,local_28._0_4_);
    break;
  case 0xe:
    iVar2 = 5;
    bVar6 = false;
    iVar1 = 0;
    bVar7 = true;
    local_28 = (double)CONCAT44(param_4,param_3) * *(double *)(param_2 + 4) * _DAT_00594a98;
    pbVar4 = (byte *)param_5;
    pbVar5 = &DAT_005949e4;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pbVar4 < *pbVar5;
      bVar7 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar7);
    if (!bVar7) {
      iVar1 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
    }
    dVar8 = local_28;
    if (iVar1 == 0) {
      dVar8 = (double)ftol();
      param_5 = "$I64d";
    }
LAB_004854c2:
    iVar1 = SfPrintF(param_1,param_5,dVar8);
    break;
  case 0xf:
  case 0x10:
    uVar9 = ftol();
    if (local_28._0_4_ == 0xf) {
      local_28 = (double)__alldiv(uVar9,0x28,0);
      uVar10 = 0x28;
    }
    else {
      local_28 = (double)__alldiv(uVar9,0x10,0);
      uVar10 = 0x10;
    }
    uVar9 = __allrem(uVar9,uVar10,0);
    iVar1 = SfPrintF(param_1,param_5,local_28,uVar9);
    break;
  case 0x11:
    local_20 = 0;
    _SfNanoTimeToHMSF_20(param_3,param_4,&local_20,0,0x4052c000);
    iVar1 = SfPrintF(param_1,param_5,local_1c,local_18,local_14,local_10);
  }
  if (local_2c != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


