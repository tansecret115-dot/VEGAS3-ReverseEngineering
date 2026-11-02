/* Module: vegas30k.dll
   Function: _SfDibRotate@40
   Address: 010e7300
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibRotate_40(int *param_1,int *param_2,RECT *param_3,int param_4,int *param_5,int *param_6,
                   RECT *param_7,int param_8,int *param_9,undefined4 param_10)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  HGLOBAL pvVar7;
  undefined8 local_10c;
  tagRECT local_f4;
  tagRECT local_e4;
  int local_d4;
  tagRECT local_d0;
  int local_c0;
  int local_bc;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_88;
  undefined4 local_84;
  double local_80;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  tagRECT *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int *local_2c;
  int local_28;
  tagRECT *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  LPCVOID local_10;
  undefined4 local_c;
  int local_8;
  
                    /* 0xe7300  881  _SfDibRotate@40 */
  local_d4 = 0;
  local_bc = _SfGetPixelType_4(param_5);
  if (local_bc < 0x10) {
    return -0x7fffbfff;
  }
  if (0x20 < local_bc) {
    return -0x7fffbfff;
  }
  if (param_6 == (int *)0x0) {
    if (param_5[4] == 0) {
      if (((param_5[8] != 0) || (uVar2 = *(ushort *)((int)param_5 + 0xe), uVar2 == 0)) ||
         (8 < uVar2)) goto LAB_010e7376;
      iVar4 = *param_5 + (1 << ((byte)uVar2 & 0x1f)) * 4;
    }
    else {
      if (param_5[4] == 3) {
        param_6 = param_5 + 0xd;
        goto LAB_010e7380;
      }
LAB_010e7376:
      iVar4 = *param_5 + param_5[8] * 4;
    }
    param_6 = (int *)(iVar4 + (int)param_5);
  }
LAB_010e7380:
  if (param_8 == 0) {
    uVar3 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
    param_8 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  SetRect(&local_e4,0,0,param_5[1],param_5[2]);
  if (param_7 == (RECT *)0x0) {
    local_f4.left = local_e4.left;
    local_f4.top = local_e4.top;
    local_f4.right = local_e4.right;
    local_f4.bottom = local_e4.bottom;
  }
  else {
    IntersectRect(&local_f4,&local_e4,param_7);
  }
  local_b0 = local_f4.right - local_f4.left;
  local_ac = local_f4.bottom - local_f4.top;
  if (local_b0 < 1) {
    return 0;
  }
  if (local_ac < 1) {
    return 0;
  }
  iVar4 = _SfGetPixelType_4(param_1);
  if ((iVar4 < 0x10) || (0x20 < iVar4)) {
    return -0x7fffbfff;
  }
  if (param_2 != (int *)0x0) goto LAB_010e749c;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar2 = *(ushort *)((int)param_1 + 0xe), uVar2 == 0)) || (8 < uVar2))
    goto LAB_010e7492;
    iVar5 = *param_1 + (1 << ((byte)uVar2 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_010e749c;
    }
LAB_010e7492:
    iVar5 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar5 + (int)param_1);
LAB_010e749c:
  if (param_4 == 0) {
    uVar3 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar3 & 0xffffffe0) + ((int)uVar3 >> 0x1f & 7U)) >> 3;
  }
  local_b4 = iVar4;
  SetRect(&local_e4,0,0,param_1[1],param_1[2]);
  if (param_3 == (RECT *)0x0) {
    local_d0.left = local_e4.left;
    local_d0.top = local_e4.top;
    local_d0.right = local_e4.right;
    local_d0.bottom = local_e4.bottom;
  }
  else {
    IntersectRect(&local_d0,&local_e4,param_3);
  }
  local_c0 = local_d0.right - local_d0.left;
  iVar5 = local_d0.bottom - local_d0.top;
  if ((0 < local_c0) && (0 < iVar5)) {
    if ((iVar4 == 0x17) || (iVar4 == 0x18)) {
      iVar4 = _SfDibCreateColorQuantizer_8(&local_10,param_1);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_d4 = 1;
    }
    local_a8 = 1;
    local_10c = (double)((float)param_9[5] / (float)param_9[7]);
    fVar1 = (float)param_9[6];
    if (local_10c < _DAT_011dbdc0) {
      local_10c = 0.001;
    }
    if (fVar1 < (float)_DAT_011dbdc0) {
      fVar1 = (float)_DAT_011dbdc0;
    }
    fcos((float10)(float)param_9[4]);
    local_88 = (undefined4)local_10c;
    local_84 = local_10c._4_4_;
    fsin((float10)(float)param_9[4]);
    local_80 = (double)fVar1;
    iVar4 = ftol();
    local_94 = iVar4;
    local_90 = ftol();
    local_9c = ftol();
    local_98 = ftol();
    local_a4 = (param_9[2] * 0x4000 - *param_9 * iVar4) - param_9[1] * local_9c;
    local_5c = param_9[10];
    local_a0 = (param_9[3] * 0x4000 - *param_9 * local_90) - param_9[1] * local_98;
    local_60 = param_9[9];
    local_58 = param_9[0xb];
    local_54 = param_9[0xc];
    local_8 = param_9[0xd];
    iVar4 = _SfGetPixelBitsPerChannel_8(local_bc,local_b8);
    iVar6 = _SfGetPixelBitsPerChannel_8(local_b4,local_b8);
    local_50 = param_1;
    local_44 = &local_d0;
    local_48 = (int)param_2 +
               ((int)(iVar6 * local_d0.left + (iVar6 * local_d0.left >> 0x1f & 7U)) >> 3) +
               (param_1[2] - local_d0.bottom) * param_4;
    local_40 = local_c0;
    if (param_1[8] == 0) {
      local_34 = 0;
    }
    else {
      local_34 = *param_1 + (int)param_1;
    }
    local_30 = param_5;
    local_28 = (int)param_6 +
               ((int)(iVar4 * local_f4.left + (iVar4 * local_f4.left >> 0x1f & 7U)) >> 3) +
               (param_5[2] - local_f4.bottom) * param_8;
    local_24 = &local_f4;
    local_20 = local_b0;
    local_1c = local_ac;
    if (param_5[8] == 0) {
      local_14 = 0;
    }
    else {
      local_14 = *param_5 + (int)param_5;
    }
    local_c = param_10;
    local_4c = param_2;
    local_3c = iVar5;
    local_38 = param_4;
    local_2c = param_6;
    local_18 = param_8;
    iVar4 = FUN_010e6bf0(&local_a8);
    if (local_d4 != 0) {
      pvVar7 = GlobalHandle(local_10);
      GlobalUnlock(pvVar7);
      pvVar7 = GlobalHandle(local_10);
      GlobalFree(pvVar7);
    }
    return iVar4;
  }
  return 0;
}


