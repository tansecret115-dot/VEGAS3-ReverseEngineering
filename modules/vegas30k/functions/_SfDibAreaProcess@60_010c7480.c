/* Module: vegas30k.dll
   Function: _SfDibAreaProcess@60
   Address: 010c7480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
_SfDibAreaProcess_60
          (int *param_1,int *param_2,undefined4 param_3,int param_4,int *param_5,int *param_6,
          undefined4 param_7,int param_8,int param_9,int param_10,int param_11,undefined4 param_12,
          float param_13,undefined4 param_14,undefined4 param_15)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  HGLOBAL pvVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_134;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined4 *local_e0;
  undefined1 local_dc [4];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_cc;
  int local_c8;
  int *local_c4;
  int *local_c0;
  int local_bc;
  int *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  LPCVOID local_6c;
  undefined4 local_68;
  undefined4 local_64 [25];
  
                    /* 0xc7480  824  _SfDibAreaProcess@60 */
  bVar3 = false;
  if ((param_9 < 1) || (param_10 < 1)) {
LAB_010c7ae0:
    return &DAT_80070057;
  }
  if (param_11 == 0) {
    return (undefined1 *)0x80004003;
  }
  if (_DAT_011dd160 == param_13) goto LAB_010c7ae0;
  iVar4 = _SfGetPixelType_4(param_5);
  if (iVar4 < 0x10) {
    return (undefined1 *)0x80004001;
  }
  if (0x20 < iVar4) {
    return (undefined1 *)0x80004001;
  }
  if (param_6 == (int *)0x0) {
    if (param_5[4] == 0) {
      if (((param_5[8] != 0) || (uVar1 = *(ushort *)((int)param_5 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_010c7549;
      iVar6 = *param_5 + (1 << ((byte)uVar1 & 0x1f)) * 4;
    }
    else {
      if (param_5[4] == 3) {
        param_6 = param_5 + 0xd;
        goto LAB_010c7553;
      }
LAB_010c7549:
      iVar6 = *param_5 + param_5[8] * 4;
    }
    param_6 = (int *)(iVar6 + (int)param_5);
  }
LAB_010c7553:
  if (param_8 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_5 + 0xe) * param_5[1] + 0x1f;
    param_8 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  _SfDibPrepareRects_28(param_1,&local_100,param_3,param_5,&local_f0,param_7,0);
  iVar6 = local_e8 - local_f0;
  iVar12 = local_e4 - local_ec;
  if (iVar6 < 1) {
    return (undefined1 *)0x0;
  }
  if (iVar12 < 1) {
    return (undefined1 *)0x0;
  }
  iVar7 = _SfGetPixelType_4(param_1);
  if ((iVar7 < 0x10) || (0x20 < iVar7)) {
    return (undefined1 *)0x80004001;
  }
  if (param_2 != (int *)0x0) goto LAB_010c7639;
  if (param_1[4] == 0) {
    if (((param_1[8] != 0) || (uVar1 = *(ushort *)((int)param_1 + 0xe), uVar1 == 0)) || (8 < uVar1))
    goto LAB_010c762f;
    iVar15 = *param_1 + (1 << ((byte)uVar1 & 0x1f)) * 4;
  }
  else {
    if (param_1[4] == 3) {
      param_2 = param_1 + 0xd;
      goto LAB_010c7639;
    }
LAB_010c762f:
    iVar15 = *param_1 + param_1[8] * 4;
  }
  param_2 = (int *)(iVar15 + (int)param_1);
LAB_010c7639:
  if (param_4 == 0) {
    uVar5 = (uint)*(ushort *)((int)param_1 + 0xe) * param_1[1] + 0x1f;
    param_4 = (int)((uVar5 & 0xffffffe0) + ((int)uVar5 >> 0x1f & 7U)) >> 3;
  }
  iVar16 = local_f4 - local_fc;
  iVar15 = local_f8 - local_100;
  if ((0 < iVar15) && (0 < iVar16)) {
    if ((iVar7 == 0x17) || (iVar7 == 0x18)) {
      puVar8 = (undefined1 *)_SfDibCreateColorQuantizer_8(&local_6c,param_1);
      if (puVar8 != (undefined1 *)0x0) {
        return puVar8;
      }
      bVar3 = true;
    }
    if ((iVar6 == iVar15) && (iVar12 == iVar16)) {
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_cc = 0;
      local_c8 = 0;
    }
    else {
      local_d8 = 1;
      if ((iVar6 == iVar15 * 2) && (iVar12 == iVar16 * 2)) {
        local_d4 = 0x2000;
        local_d0 = 0x2000;
        local_cc = 0x8000;
        local_c8 = 0x8000;
      }
      else {
        local_d4 = 0;
        local_d0 = 0;
        if (iVar15 < 2) {
          local_cc = iVar6 * 0x4000 + -0x4000;
        }
        else {
          local_cc = (iVar6 * 0x4000 + -0x4000) / (iVar15 + -1);
        }
        if (iVar16 < 2) {
          local_c8 = iVar12 * 0x4000 + -0x4000;
        }
        else {
          local_c8 = (iVar12 * 0x4000 + -0x4000) / (iVar16 + -1);
        }
      }
    }
    iVar9 = param_9 * param_10;
    if (iVar9 < 0x1a) {
      local_134 = 0;
      if (0 < param_9) {
        do {
          if (0 < param_10) {
            puVar13 = local_64 + local_134;
            puVar10 = (undefined4 *)((param_10 * 4 + -4) * param_10 + local_134 * 4 + param_11);
            iVar14 = param_10;
            do {
              uVar2 = *puVar10;
              puVar10 = puVar10 + -param_10;
              *puVar13 = uVar2;
              puVar13 = puVar13 + param_10;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          local_134 = local_134 + 1;
        } while (local_134 < param_9);
      }
      local_7c = local_64;
    }
    else {
      pvVar11 = GlobalAlloc(2,iVar9 * 4);
      local_e0 = GlobalLock(pvVar11);
      if (local_e0 == (undefined4 *)0x0) {
        if (!bVar3) {
          return (undefined1 *)0x0;
        }
        pvVar11 = GlobalHandle(local_6c);
        GlobalUnlock(pvVar11);
        pvVar11 = GlobalHandle(local_6c);
        GlobalFree(pvVar11);
        return (undefined1 *)0x0;
      }
      local_134 = 0;
      local_7c = local_e0;
      if (0 < param_9) {
        do {
          if (0 < param_10) {
            puVar10 = local_e0 + local_134;
            puVar13 = (undefined4 *)((param_10 * 4 + -4) * param_10 + local_134 * 4 + param_11);
            iVar14 = param_10;
            do {
              uVar2 = *puVar13;
              puVar13 = puVar13 + -param_10;
              *puVar10 = uVar2;
              puVar10 = puVar10 + param_10;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
          local_134 = local_134 + 1;
        } while (local_134 < param_9);
      }
    }
    iVar4 = _SfGetPixelBitsPerChannel_8(iVar4,local_dc);
    iVar7 = _SfGetPixelBitsPerChannel_8(iVar7,local_dc);
    local_bc = (int)param_2 +
               ((int)((iVar7 * local_100 >> 0x1f & 7U) + iVar7 * local_100) >> 3) +
               (param_1[2] - local_f4) * param_4;
    local_b8 = &local_100;
    if (param_1[8] == 0) {
      local_a8 = 0;
    }
    else {
      local_a8 = *param_1 + (int)param_1;
    }
    local_a4 = param_5;
    local_9c = (int)param_6 +
               ((int)(iVar4 * local_f0 + (iVar4 * local_f0 >> 0x1f & 7U)) >> 3) +
               (param_5[2] - local_e4) * param_8;
    local_98 = &local_f0;
    if (param_5[8] == 0) {
      local_88 = 0;
    }
    else {
      local_88 = *param_5 + (int)param_5;
    }
    local_74 = param_13;
    local_84 = param_9;
    local_78 = param_12;
    local_80 = param_10;
    local_70 = param_14;
    local_68 = param_15;
    local_c4 = param_1;
    local_c0 = param_2;
    local_b4 = iVar15;
    local_b0 = iVar16;
    local_ac = param_4;
    local_a0 = param_6;
    local_94 = iVar6;
    local_90 = iVar12;
    local_8c = param_8;
    puVar8 = (undefined1 *)FUN_010c6a20(&local_d8);
    if (0x19 < iVar9) {
      pvVar11 = GlobalHandle(local_7c);
      GlobalUnlock(pvVar11);
      pvVar11 = GlobalHandle(local_7c);
      GlobalFree(pvVar11);
    }
    if (bVar3) {
      pvVar11 = GlobalHandle(local_6c);
      GlobalUnlock(pvVar11);
      pvVar11 = GlobalHandle(local_6c);
      GlobalFree(pvVar11);
    }
    return puVar8;
  }
  return (undefined1 *)0x0;
}


