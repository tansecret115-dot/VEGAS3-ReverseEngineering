/* Module: vegas30k.dll
   Function: FUN_01050ec0
   Address: 01050ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_01050ec0(int *param_1,int *param_2,int *param_3,undefined4 param_4,int param_5,int *param_6,
            int *param_7,undefined4 param_8,int param_9,int param_10)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined1 local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar11 = param_1;
  for (iVar6 = 0x24; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  iVar6 = _SfGetPixelType_4(param_6);
  if (iVar6 < 0x10) {
    return 0;
  }
  if (0x20 < iVar6) {
    return 0;
  }
  if (param_7 == (int *)0x0) {
    if (param_6[4] == 0) {
      if (((param_6[8] != 0) || (uVar1 = *(ushort *)((int)param_6 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_01050f34;
      iVar3 = *param_6 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_6[4] == 3) {
        param_7 = param_6 + 0xd;
        goto LAB_01050f3e;
      }
LAB_01050f34:
      iVar3 = *param_6 + param_6[8] * 4;
    }
    param_7 = (int *)(iVar3 + (int)param_6);
  }
LAB_01050f3e:
  if (param_9 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_6 + 0xe) * param_6[1] + 0x1f;
    param_9 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  _SfDibPrepareRects_28(param_2,&local_20,param_4,param_6,&local_10,param_8,param_1 + 0x1e);
  iVar3 = local_8 - local_10;
  iVar7 = local_4 - local_c;
  if (iVar3 < 1) {
    return 0;
  }
  if (iVar7 < 1) {
    return 0;
  }
  iVar4 = _SfGetPixelType_4(param_2);
  if (iVar4 < 0x10) {
    return 0;
  }
  if (0x20 < iVar4) {
    return 0;
  }
  if (param_3 != (int *)0x0) goto LAB_01051019;
  if (param_2[4] == 0) {
    if (((param_2[8] != 0) || (uVar1 = *(ushort *)((int)param_2 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_0105100f;
    iVar8 = *param_2 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_2[4] == 3) {
      param_3 = param_2 + 0xd;
      goto LAB_01051019;
    }
LAB_0105100f:
    iVar8 = *param_2 + param_2[8] * 4;
  }
  param_3 = (int *)(iVar8 + (int)param_2);
LAB_01051019:
  if (param_5 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_2 + 0xe) * param_2[1] + 0x1f;
    param_5 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  iVar10 = local_18 - local_20;
  iVar8 = local_14 - local_1c;
  if (((0 < iVar10) && (0 < iVar8)) &&
     (((iVar4 != 0x17 && (iVar4 != 0x18)) ||
      (iVar5 = _SfDibCreateColorQuantizer_8(param_1 + 0x1d,param_2), iVar5 == 0)))) {
    if ((iVar3 == iVar10) && (iVar7 == iVar8)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 1;
    }
    *param_1 = iVar5;
    param_1[1] = 0;
    param_1[2] = 0;
    if (iVar5 == 0) {
      iVar5 = 0x4000;
      param_1[3] = 0x4000;
    }
    else {
      if (iVar10 < 2) {
        param_1[3] = iVar3 * 0x4000 + -0x4000;
      }
      else {
        param_1[3] = (iVar3 * 0x4000 + -0x4000) / (iVar10 + -1);
      }
      if (iVar8 < 2) {
        iVar5 = iVar7 * 0x4000 + -0x4000;
      }
      else {
        iVar5 = (iVar7 * 0x4000 + -0x4000) / (iVar8 + -1);
      }
    }
    param_1[4] = iVar5;
    iVar6 = _SfGetPixelBitsPerChannel_8(iVar6,local_24);
    iVar4 = _SfGetPixelBitsPerChannel_8(iVar4,local_24);
    param_1[5] = (int)param_2;
    uVar2 = iVar4 * local_20;
    param_1[6] = (int)param_3;
    uVar9 = uVar2 & 0x80000007;
    param_1[7] = (int)param_3 +
                 ((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3) + (param_2[2] - local_14) * param_5
    ;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    param_1[8] = uVar9;
    param_1[9] = local_20;
    param_1[10] = local_1c;
    param_1[0xb] = local_18;
    param_1[0xe] = iVar8;
    param_1[0xc] = local_14;
    param_1[0xd] = iVar10;
    param_1[0xf] = param_5;
    if (param_2[8] == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2 + (int)param_2;
    }
    uVar2 = iVar6 * local_10;
    param_1[0x10] = iVar4;
    param_1[0x11] = (int)param_6;
    param_1[0x12] = (int)param_7;
    uVar9 = uVar2 & 0x80000007;
    param_1[0x13] =
         (int)param_7 +
         ((int)(uVar2 + ((int)uVar2 >> 0x1f & 7U)) >> 3) + (param_6[2] - local_4) * param_9;
    if ((int)uVar9 < 0) {
      uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
    }
    param_1[0x14] = uVar9;
    param_1[0x15] = local_10;
    param_1[0x16] = local_c;
    param_1[0x17] = local_8;
    param_1[0x1a] = iVar7;
    param_1[0x18] = local_4;
    param_1[0x19] = iVar3;
    param_1[0x1b] = param_9;
    if (param_6[8] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_6 + (int)param_6;
    }
    param_1[0x1c] = iVar6;
    param_1[0x22] = param_10;
    return 1;
  }
  return 0;
}


