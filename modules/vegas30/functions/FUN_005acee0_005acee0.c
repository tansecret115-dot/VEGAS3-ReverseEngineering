/* Module: vegas30.exe
   Function: FUN_005acee0
   Address: 005acee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_005acee0(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,uint *param_5,
                  double param_6,int param_7)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 **ppuVar15;
  uint uVar16;
  undefined4 unaff_retaddr;
  byte local_52c;
  int local_528;
  undefined8 local_524;
  int *local_51c;
  undefined8 local_514;
  uint uStack_510;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined1 *local_4e0;
  undefined1 local_4dc [1064];
  uint local_b4;
  int local_b0;
  uint local_ac;
  int local_a8;
  undefined1 *local_90;
  uint local_8c;
  int local_88;
  int iStack_8;
  
  uVar14 = *(uint *)(param_1 + 0xb0);
  iVar7 = param_1 + 0x9c0;
  *param_2 = (int)(param_2 + 1);
  uVar14 = uVar14 >> 2 & 8;
  param_2[0x116] = param_7;
  param_2[0x10d] = param_2[0x10d] | 1;
  param_2[0x10c] = 0;
  param_2[0x10e] = param_2[0x10e] + 1;
  iVar3 = FUN_005ace00(param_7,param_2,0,param_5[2],param_5[3],uVar14,0);
  if (iVar3 != 0) {
    piVar5 = param_2;
    for (iVar7 = 0x118; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar5 = 0;
      piVar5 = piVar5 + 1;
    }
LAB_005ad256:
    return (int *)(~-(uint)(iVar3 != 0) & (uint)param_2);
  }
  param_2[0x115] = param_2[0x10b];
  if (param_2[0x10c] < 0) {
    param_2[0x10b] = param_2[0x10b] - (*(int *)(*param_2 + 8) + -1) * param_2[0x10c];
  }
  if ((param_5[0x12e] == 0) || (param_5[0x12e] == 0xffffffff)) {
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  param_2[0x10d] = param_2[0x10d] & 0xfffffffdU | iVar4 * 2;
  *param_3 = *(undefined4 *)(*param_2 + 4);
  param_3[1] = *(undefined4 *)(*param_2 + 8);
  if ((((*param_5 & 4) != 0) && (param_6 < *(double *)(param_5 + 0x128) * *(double *)(param_5 + 10))
      ) && (_DAT_00629de0 != *(double *)(param_5 + 0x128))) {
    (*(code *)param_2[0x114])(param_2,param_2[0x115],param_2[0x116]);
    iVar7 = iStack_8 + 0x740;
    ftol();
    FUN_005aa8f0(iVar7);
    *(undefined4 *)(iStack_8 + 0x9bc) = 2;
    FUN_005aa750(iVar7,*(double *)(param_5 + 10) / (double)CONCAT44(param_4,param_3),param_5[0x128],
                 param_5[0x129],param_5[0x127],unaff_retaddr,0xffffffff,0xffffffff);
    iVar3 = FUN_005aa9e0();
    if (-1 < iVar3) {
      local_528 = 0;
      if (0 < local_524._4_4_) {
        puVar13 = &local_8c;
        do {
          uVar14 = puVar13[1];
          if (((-1 < (int)uVar14) && ((int)uVar14 <= (int)param_5[7])) &&
             (((int)uVar14 < (int)param_5[7] || (*puVar13 < param_5[6])))) {
            param_2[0x10d] = param_2[0x10d] | 1;
            param_2[0x10e] = param_2[0x10e] + 1;
            param_2[0x116] = (int)param_5;
            param_2[0x10c] = 0;
            *param_2 = (int)(param_2 + 1);
            iVar3 = FUN_005ace00();
            if (iVar3 == 0) {
              param_2[0x115] = param_2[0x10b];
              if (param_2[0x10c] < 0) {
                param_2[0x10b] = param_2[0x10b] - (*(int *)(*param_2 + 8) + -1) * param_2[0x10c];
              }
              FUN_005aab60(iVar7,*param_2,param_2[0x10b],param_2[0x10c],*puVar13,puVar13[1]);
              (*(code *)param_2[0x114])(param_2,param_2[0x115],param_2[0x116]);
            }
          }
          local_528 = local_528 + 1;
          puVar13 = puVar13 + 2;
        } while (local_528 < local_524._4_4_);
      }
      iVar3 = FUN_005acbc0(param_1,unaff_retaddr);
      param_2 = (int *)FUN_005a5bd0(param_1,1,(undefined4)local_524);
      FUN_005ab510();
      param_2[0x10d] = param_2[0x10d] & 0xfffffffdU | uStack_510;
    }
    goto LAB_005ad256;
  }
  if ((((*param_5 & 4) == 0) || (_DAT_00610fd8 == *(double *)(param_5 + 8))) ||
     ((param_6 <= *(double *)(param_5 + 10) * *(double *)(param_5 + 0x128) ||
      ((_DAT_00629de0 == *(double *)(param_5 + 0x128) ||
       (iVar3 = FUN_005acbc0(param_4,param_3), iVar3 < 0)))))) goto LAB_005ad256;
  if ((param_5[0x127] == 1) || (bVar2 = false, param_5[0x127] == 2)) {
    bVar2 = true;
  }
  if ((*(double *)(param_5 + 8) <= _DAT_00610560) && (bVar2)) {
    piVar5 = (int *)FUN_005a5de0(param_4,param_2,0,iVar7);
    _SfGetPixelType_4(*piVar5);
    local_4f8 = *param_3;
    local_4f4 = param_3[1];
    local_500 = 0;
    local_4fc = 0;
    FUN_005acbf0();
    piVar5[0x10d] = piVar5[0x10d] & 0xfffffffdU | iVar4 * 2;
    param_5[0x127] = 0;
    return piVar5;
  }
  local_524 = *(double *)(param_5 + 8);
  ppuVar15 = &local_4e0;
  for (iVar3 = 0x118; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar15 = (undefined1 *)0x0;
    ppuVar15 = ppuVar15 + 1;
  }
  local_ac = local_ac | 1;
  local_88 = param_7;
  local_a8 = local_a8 + 1;
  uVar10 = param_5[6] - 1;
  local_90 = &LAB_005ac450;
  uStack_510 = param_5[7] - (uint)(param_5[6] == 0);
  uVar16 = param_5[2] + 1;
  uVar8 = param_5[3] + (uint)(0xfffffffe < param_5[2]);
  local_4e0 = (undefined1 *)0x0;
  local_b4 = 0;
  if (((int)uVar8 <= (int)uStack_510) && (((int)uVar8 < (int)uStack_510 || (uVar16 < uVar10)))) {
    uVar10 = uVar16;
    uStack_510 = uVar8;
  }
  piVar5 = (int *)FUN_005a5de0(param_4,param_2,0,iVar7);
  local_4e0 = local_4dc;
  iVar3 = FUN_005ace00(param_7,&local_4e0,0,uVar10,uStack_510,uVar14,0);
  if (iVar3 != 0) goto LAB_005ad7aa;
  local_8c = local_b4;
  if (local_b0 < 0) {
    local_b4 = local_b4 - (*(int *)(local_4e0 + 8) + -1) * local_b0;
  }
  piVar6 = (int *)FUN_005a5de0(param_4,&local_4e0,0,iVar7);
  if (bVar2) {
    uStack_510 = 0;
    _SfDibCopyInterlace_40();
    _SfDibCopyInterlace_40();
    local_524 = (local_524 - _DAT_00610560) + (local_524 - _DAT_00610560);
  }
  iVar3 = _SfGetPixelType_4(*piVar6);
  local_4f4 = *(undefined4 *)(*piVar6 + 8);
  local_4f8 = *(undefined4 *)(*piVar6 + 4);
  local_4e8 = *param_3;
  local_4e4 = param_3[1];
  local_500 = 0;
  local_4fc = 0;
  local_4f0 = 0;
  local_4ec = 0;
  iVar7 = piVar6[0x10c];
  piVar9 = (int *)*piVar6;
  if (iVar7 == 0) {
    uVar14 = (uint)*(ushort *)((int)piVar9 + 0xe) * piVar9[1] + 0x1f;
    iVar7 = (int)((uVar14 & 0xffffffe0) + ((int)uVar14 >> 0x1f & 7U)) >> 3;
  }
  local_51c = (int *)piVar6[0x10b];
  if (local_51c == (int *)0x0) {
    if (piVar9[4] == 0) {
      if (((piVar9[8] != 0) || (uVar1 = *(ushort *)((int)piVar9 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_005ad6be;
      local_51c = (int *)(*(int *)*piVar6 + (1 << ((byte)uVar1 & 0x1f)) * 4 + *piVar6);
    }
    else if (piVar9[4] == 3) {
      local_51c = piVar9 + 0xd;
    }
    else {
LAB_005ad6be:
      local_51c = (int *)(*piVar9 + piVar9[8] * 4 + (int)piVar9);
    }
  }
  iVar4 = piVar5[0x10c];
  piVar9 = (int *)*piVar5;
  if (iVar4 == 0) {
    uVar14 = (uint)*(ushort *)((int)piVar9 + 0xe) * piVar9[1] + 0x1f;
    iVar4 = (int)((uVar14 & 0xffffffe0) + ((int)uVar14 >> 0x1f & 7U)) >> 3;
  }
  piVar12 = (int *)piVar5[0x10b];
  if (piVar12 == (int *)0x0) {
    if (piVar9[4] == 0) {
      if (((piVar9[8] != 0) || (uVar1 = *(ushort *)((int)piVar9 + 0xe), uVar1 == 0)) || (8 < uVar1))
      goto LAB_005ad739;
      local_52c = (byte)uVar1;
      iVar11 = 1 << (local_52c & 0x1f);
      piVar9 = (int *)*piVar5;
    }
    else {
      if (piVar9[4] == 3) {
        piVar12 = piVar9 + 0xd;
        goto LAB_005ad741;
      }
LAB_005ad739:
      iVar11 = piVar9[8];
    }
    piVar12 = (int *)((int)piVar9 + *piVar9 + iVar11 * 4);
  }
LAB_005ad741:
  _SfDibWeightedCrossFade_52
            (piVar12,&local_500,iVar4,&local_4f0,_DAT_006106d0 - local_524,local_51c,&local_500,
             iVar7,&local_4f0,SUB84(local_524,0),(int)((ulonglong)local_524 >> 0x20),
             (-(uint)(iVar3 != 0x20) & 0xfffffff4) + 0x10);
  (*(code *)piVar6[0x114])(piVar6,piVar6[0x115],piVar6[0x116]);
  piVar5[0x10d] = piVar5[0x10d] & 0xfffffffdU | uStack_510;
LAB_005ad7aa:
  param_5[0x127] = 0;
  return piVar5;
}


