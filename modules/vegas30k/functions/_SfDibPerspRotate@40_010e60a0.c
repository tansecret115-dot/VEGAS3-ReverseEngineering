/* Module: vegas30k.dll
   Function: _SfDibPerspRotate@40
   Address: 010e60a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibPerspRotate_40
              (int *param_1,int *param_2,RECT *param_3,int param_4,int *param_5,int *param_6,
              RECT *param_7,int param_8,int param_9,undefined4 param_10)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  HGLOBAL pvVar6;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST1;
  undefined8 local_150;
  double local_148;
  tagRECT local_120;
  double local_110;
  int local_104;
  tagRECT local_100;
  int local_f0;
  tagRECT local_ec;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_cc [4];
  double local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_74;
  double local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int *local_58;
  int *local_54;
  int local_50;
  tagRECT *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  tagRECT *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  LPCVOID local_18;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* 0xe60a0  870  _SfDibPerspRotate@40 */
  local_104 = 0;
  local_d4 = _SfGetPixelType_4(param_5);
  if (local_d4 < 0x10) {
    return -0x7fffbfff;
  }
  if (0x20 < local_d4) {
    return -0x7fffbfff;
  }
  if (param_6 == (int *)0x0) {
    if (param_5[4] == 0) {
      if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_010e6116;
      iVar3 = *param_5 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_5[4] == 3) {
        param_6 = param_5 + 0xd;
        goto LAB_010e6120;
      }
LAB_010e6116:
      iVar3 = *param_5 + param_5[8] * 4;
    }
    param_6 = (int *)(iVar3 + (int)param_5);
  }
LAB_010e6120:
  if (param_8 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
    param_8 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  SetRect(&local_100,0,0,param_5[1],param_5[2]);
  if (param_7 == (RECT *)0x0) {
    local_120.left = local_100.left;
    local_120.top = local_100.top;
    local_120.right = local_100.right;
    local_120.bottom = local_100.bottom;
  }
  else {
    IntersectRect(&local_120,&local_100,param_7);
  }
  local_d0 = local_120.right - local_120.left;
  local_dc = local_120.bottom - local_120.top;
  if (local_d0 < 1) {
    return 0;
  }
  if (local_dc < 1) {
    return 0;
  }
  local_f0 = _SfGetPixelType_4(param_1);
  if ((local_f0 < 0x10) || (0x20 < local_f0)) {
    return -0x7fffbfff;
  }
  if (param_2 != (int *)0x0) goto LAB_010e6230;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_010e6226;
    iVar3 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_010e6230;
    }
LAB_010e6226:
    iVar3 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar3 + (int)param_1);
LAB_010e6230:
  if (param_4 == 0) {
    uVar2 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar2 & 0xffffffe0) + ((int)uVar2 >> 0x1f & 7U)) >> 3;
  }
  SetRect(&local_100,0,0,param_1[1],param_1[2]);
  if (param_3 == (RECT *)0x0) {
    local_ec.left = local_100.left;
    local_ec.top = local_100.top;
    local_ec.right = local_100.right;
    local_ec.bottom = local_100.bottom;
  }
  else {
    IntersectRect(&local_ec,&local_100,param_3);
  }
  local_d8 = local_ec.right - local_ec.left;
  iVar3 = local_ec.bottom - local_ec.top;
  if ((0 < local_d8) && (0 < iVar3)) {
    if ((local_f0 == 0x17) || (local_f0 == 0x18)) {
      iVar4 = _SfDibCreateColorQuantizer_8(&local_18,param_1);
      if (iVar4 != 0) {
        return iVar4;
      }
      local_104 = 1;
    }
    local_c0 = 1;
    local_150 = (double)(*(float *)(param_9 + 0x2c) * *(float *)(param_9 + 0x24));
    if (local_150 < _DAT_011dbdc0) {
      local_150 = 0.001;
    }
    fVar7 = (float10)fcos((float10)*(float *)(param_9 + 0x18));
    local_110 = (double)(fVar7 * (float10)_DAT_011e1da8);
    fVar7 = (float10)fsin((float10)*(float *)(param_9 + 0x18));
    fcos((float10)*(float *)(param_9 + 0x20));
    fVar8 = (float10)fcos((float10)*(float *)(param_9 + 0x1c));
    local_148 = (double)fVar8;
    if ((fVar8 < (float10)_DAT_011dbdc0) && (_DAT_011e3118 < local_148)) {
      local_148 = 0.001;
    }
    local_c8 = (double)(fVar7 * (float10)_DAT_011e1da8) / local_148;
    local_bc = ftol();
    local_110 = local_110 / local_148;
    local_b8 = ftol();
    local_ac = ftol();
    local_a8 = ftol();
    local_b4 = ftol();
    local_b0 = ftol();
    local_68 = *(undefined4 *)(param_9 + 0x30);
    local_78 = (undefined4)local_150;
    local_64 = *(undefined4 *)(param_9 + 0x34);
    local_74 = local_150._4_4_;
    local_60 = *(undefined4 *)(param_9 + 0x38);
    local_70 = (double)extraout_ST1;
    fsin((float10)*(float *)(param_9 + 0x20));
    local_5c = *(undefined4 *)(param_9 + 0x3c);
    local_10 = *(undefined4 *)(param_9 + 0x40);
    local_8c = *(int *)(param_9 + 0x10) << 0xe;
    local_88 = *(int *)(param_9 + 0x14) << 0xe;
    local_84 = ftol();
    fsin((float10)*(float *)(param_9 + 0x1c));
    local_80 = ftol();
    iVar4 = _SfGetPixelBitsPerChannel_8(local_d4,local_cc);
    iVar5 = _SfGetPixelBitsPerChannel_8(local_f0,local_cc);
    local_50 = (int)param_2 +
               ((int)(iVar5 * local_ec.left + (iVar5 * local_ec.left >> 0x1f & 7U)) >> 3) +
               (param_1[2] - local_ec.bottom) * param_4;
    local_4c = &local_ec;
    local_48 = local_d8;
    local_58 = param_1;
    if (param_1[8] == 0) {
      local_3c = 0;
    }
    else {
      local_3c = *param_1 + (int)param_1;
    }
    local_38 = param_5;
    local_30 = (int)param_6 +
               ((int)(iVar4 * local_120.left + (iVar4 * local_120.left >> 0x1f & 7U)) >> 3) +
               (param_5[2] - local_120.bottom) * param_8;
    local_2c = &local_120;
    local_28 = local_d0;
    local_24 = local_dc;
    if (param_5[8] == 0) {
      local_1c = 0;
    }
    else {
      local_1c = *param_5 + (int)param_5;
    }
    local_14 = param_10;
    local_54 = param_2;
    local_44 = iVar3;
    local_40 = param_4;
    local_34 = param_6;
    local_20 = param_8;
    iVar3 = FUN_010e5820(&local_c0);
    if (local_104 != 0) {
      pvVar6 = GlobalHandle(local_18);
      GlobalUnlock(pvVar6);
      pvVar6 = GlobalHandle(local_18);
      GlobalFree(pvVar6);
    }
    return iVar3;
  }
  return 0;
}


