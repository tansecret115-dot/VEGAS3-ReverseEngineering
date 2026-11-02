/* Module: mp3plug.dll
   Function: FUN_5f701d20
   Address: 5f701d20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** __cdecl
FUN_5f701d20(undefined4 *param_1,int param_2,undefined4 param_3,float param_4,float param_5,
            float param_6,int param_7,int param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float *pfVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float fVar8;
  uint uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float local_cc;
  float local_c8;
  int local_c4;
  float local_c0 [7];
  uint local_a4;
  uint uStack_a0;
  uint local_94;
  uint uStack_90;
  uint local_84;
  uint uStack_80;
  uint local_74;
  uint uStack_70;
  uint local_64;
  uint uStack_60;
  uint local_54;
  uint uStack_50;
  int local_48;
  undefined4 *local_44;
  int local_40;
  float local_3c;
  double local_34;
  
  local_cc = 0.0;
  local_c8 = 0.0;
  *param_1 = 0;
  local_44 = param_1;
  pfVar4 = (float *)FUN_5f6d9720(1,0x28);
  if (pfVar4 == (float *)0x0) {
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75f610,(char *)0x36,(undefined *)0x0
                           ,s_out_of_memory_5f75c330);
    return ppuVar5;
  }
  local_34 = (double)param_4;
  local_40 = param_8;
  local_3c = param_6;
  local_48 = param_2;
  *pfVar4 = param_4;
  pfVar4[1] = param_5;
  if (((param_7 == 0) || (param_7 == 1)) || (param_7 == 3)) {
    pfVar4[2] = (float)(param_2 >> 1);
    puVar6 = FUN_5f70d300(0,param_4);
    pfVar4[8] = (float)puVar6;
    puVar6 = FUN_5f70d5d0(0,(int)param_5,local_3c,local_40);
    pfVar4[7] = (float)puVar6;
    pfVar7 = FUN_5f70d7c0(0,(uint)param_5,param_4,local_3c);
    pfVar4[9] = (float)pfVar7;
  }
  else {
    if (param_7 != 2) {
      FUN_5f702ae4();
      ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75f610,(char *)0x51,
                             (undefined *)0x0,s_invalid_block_type_parameter_5f75f660);
      return ppuVar5;
    }
    pfVar4[2] = (float)(param_2 >> 1);
    puVar6 = FUN_5f70d300(2,param_4);
    pfVar4[8] = (float)puVar6;
    puVar6 = FUN_5f70d5d0(2,(int)param_5,local_3c,local_40);
    pfVar4[7] = (float)puVar6;
    pfVar7 = FUN_5f70d7c0(2,(uint)param_5,param_4,local_3c);
    pfVar4[9] = (float)pfVar7;
  }
  if (pfVar4[8] == 0.0) {
    FUN_5f702ae4();
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75f610,(char *)0x56,(undefined *)0x0
                           ,s_error_initializing_sfbParam_5f75f680);
    return ppuVar5;
  }
  if (pfVar4[7] == 0.0) {
    FUN_5f702ae4();
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75f610,(char *)0x5a,(undefined *)0x0
                           ,s_error_initializing_thrParam_5f75f6a0);
    return ppuVar5;
  }
  if (pfVar4[9] == 0.0) {
    FUN_5f702ae4();
    ppuVar5 = FUN_5f6d94e0(s_U__mp3_uptodate_ciEncoder_l3Enc__5f75f610,(char *)0x5e,(undefined *)0x0
                           ,s_error_initializing_codParam__no_p_5f75f6c0);
    return ppuVar5;
  }
  if (((param_7 == 0) || (param_7 == 1)) || (param_7 == 3)) {
    FUN_5f6df410(&DAT_5f75f740,1,0.0,3.4028235e+38,0x5f75f750,"",(float *)((int)pfVar4[7] + 0x158));
    FUN_5f6df410(&DAT_5f75f780,1,0.0,3.4028235e+38,0x5f75f790,"",(float *)((int)pfVar4[7] + 0x14c));
    FUN_5f6df410(s_masklow_5f75f7c0,1,0.0,3.4028235e+38,0x5f75f7d0,"",
                 (float *)((int)pfVar4[7] + 0xd8));
    FUN_5f6df410(s_maskhigh_5f75f800,1,0.0,3.4028235e+38,0x5f75f810,"",
                 (float *)((int)pfVar4[7] + 0xdc));
    FUN_5f6e0300(s_maskNoHole_5f75f850,0x5f75f860,s_disable_the_suspension_hole_in_t_5f75f890,
                 &local_c4);
    if (local_c4 != 0) {
      *(undefined4 *)((int)pfVar4[7] + 0xd4) = 1;
    }
    FUN_5f6df410(s_TONE_LIMIT_FREQ_5f75f8d0,1,0.0,3.4028235e+38,0x5f75f8e0,"",(float *)pfVar4[7]);
    FUN_5f6de860(s_CB_MODE_5f75f910,1,0,local_48,0x5f75f920,
                 s_Normally__the_mean_threshold_of_a_5f74ac20,(long *)((int)pfVar4[7] + 0x1d8));
    FUN_5f6de860(s_CHAOS_METHOD_5f75f960,1,0,4,0x5f75f970,
                 s_long_block_chaos_method_0__eucli_5f75f990,(long *)((int)pfVar4[7] + 0x1dc));
    FUN_5f6df410(s_TONE_COMB_LIMIT_FREQ_5f75fa20,1,0.0,3.4028235e+38,0x5f75fa40,"",
                 (float *)((int)pfVar4[7] + 0x1e0));
    FUN_5f6df410(s_rpmin_5f75fab0,1,0.0,1.0,0x5f75fac0,"",(float *)((int)pfVar4[7] + 0x16c));
    FUN_5f6df410(&DAT_5f75faf0,1,1.0,3.4028235e+38,0x5f75fb00,"",&local_cc);
    FUN_5f6dee10(s_peMin_5f75fb30,0,10000,0x5f75fb40,"",(long *)((int)pfVar4[9] + 4));
    FUN_5f6dee10(s_peMax_5f75fb70,0,10000,0x5f75fb80,"",(long *)((int)pfVar4[9] + 8));
    FUN_5f6df410(s_minBitSp_5f75fbb0,1,0.0,10000.0,0x5f75fbc0,"",(float *)((int)pfVar4[9] + 0x24));
    FUN_5f6df410(s_maxBitSp_5f75fbf0,1,0.0,10000.0,0x5f75fc00,"",(float *)((int)pfVar4[9] + 0x28));
    if (local_cc != _DAT_5f75f558) {
      FUN_5f6d8bb0(local_cc,(int)pfVar4[7] + 0x170,0x19);
    }
  }
  else if (param_7 == 2) {
    FUN_5f6df410(s_NMT_S_5f75fc30,1,0.0,3.4028235e+38,0x5f75fc40,"",
                 (float *)((int)pfVar4[7] + 0x158));
    FUN_5f6df410(s_TMN_S_5f75fc70,1,0.0,3.4028235e+38,0x5f75fc80,"",
                 (float *)((int)pfVar4[7] + 0x14c));
    FUN_5f6df410(s_masklow_S_5f75fcb0,1,0.0,3.4028235e+38,0x5f75f7d0,"",
                 (float *)((int)pfVar4[7] + 0xd8));
    FUN_5f6df410(s_maskhigh_S_5f75fcc0,1,0.0,3.4028235e+38,0x5f75f810,"",
                 (float *)((int)pfVar4[7] + 0xdc));
    FUN_5f6e0300(s_maskNoHole_S_5f75fcd0,0x5f75fce0,s_disable_the_suspension_hole_in_t_5f75f890,
                 &local_c4);
    if (local_c4 != 0) {
      *(undefined4 *)((int)pfVar4[7] + 0xd4) = 1;
    }
    FUN_5f6df410(s_TONE_LIMIT_FREQ_S_5f75fd10,1,0.0,3.4028235e+38,0x5f75f8e0,"",(float *)pfVar4[7]);
    FUN_5f6de860(s_CB_MODE_S_5f75fd30,1,0,local_48,0x5f75fd40,
                 s_Normally__the_mean_threshold_of_a_5f74ac20,(long *)((int)pfVar4[7] + 0x1d8));
    FUN_5f6de860(s_CHAOS_METHOD_S_5f75fd80,1,0,4,0x5f75fd90,
                 s_short_block_chaos_method_0__eucl_5f75fdb0,(long *)((int)pfVar4[7] + 0x1dc));
    FUN_5f6df410(s_TONE_COMB_LIMIT_FREQ_S_5f75fe40,1,0.0,3.4028235e+38,0x5f75fe60,"",
                 (float *)((int)pfVar4[7] + 0x1e0));
    FUN_5f6df410(s_rpmin_s_5f75fed0,1,0.0,1.0,0x5f75fee0,"",(float *)((int)pfVar4[7] + 0x16c));
    FUN_5f6df410(s_rpre_s_5f75ff10,1,1.0,3.4028235e+38,0x5f75ff20,"",&local_c8);
    FUN_5f6dee10(s_peMin_s_5f75ff50,0,10000,0x5f75ff60,"",(long *)((int)pfVar4[9] + 4));
    FUN_5f6dee10(s_peMax_s_5f75ff90,0,10000,0x5f75ffa0,"",(long *)((int)pfVar4[9] + 8));
    FUN_5f6df410(s_minBitSp_s_5f75ffd0,1,0.0,10000.0,0x5f75ffe0,"",(float *)((int)pfVar4[9] + 0x24))
    ;
    FUN_5f6df410(s_maxBitSp_s_5f760010,1,0.0,10000.0,0x5f760020,"",(float *)((int)pfVar4[9] + 0x28))
    ;
    if (local_c8 != _DAT_5f75f600) {
      FUN_5f6d8bb0(local_c8,(int)pfVar4[7] + 0x170,0x19);
    }
  }
  local_c0[0] = *(float *)pfVar4[9];
  FUN_5f6df9a0(&DAT_5f75c290,0.0,48000.0,0x5f760050,"",local_c0);
  fVar12 = _DAT_5f75f568;
  *(float *)pfVar4[9] = local_c0[0];
  piVar10 = (int *)pfVar4[8];
  dVar1 = (double)((fVar12 / *pfVar4) * local_c0[0] * (float)*piVar10);
  uStack_a0 = (uint)((ulonglong)dVar1 >> 0x20);
  local_a4 = SUB84(dVar1,0);
  uVar9 = uStack_a0 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)((uStack_a0 << 0xb | local_a4 >> 0x15 | 0x80000000) >>
                    (0x1eU - (char)uVar9 & 0x1f));
    if ((longlong)dVar1 < 0) {
      fVar12 = (float)-(int)fVar12;
    }
  }
  fVar8 = *pfVar4 * _DAT_5f75f56c;
  pfVar4[4] = fVar12;
  if ((fVar8 / (float)*piVar10) * (float)piVar10[2] < local_c0[0]) {
    dVar1 = (double)((local_c0[0] / fVar8) * (float)*piVar10 + _DAT_5f75f578);
    uStack_90 = (uint)((ulonglong)dVar1 >> 0x20);
    local_94 = SUB84(dVar1,0);
    uVar9 = uStack_90 >> 0x14 & 0x7ff;
    if (uVar9 < 0x3ff) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uStack_90 << 0xb | local_94 >> 0x15 | 0x80000000) >> (0x1eU - (char)uVar9 & 0x1f);
      if ((longlong)dVar1 < 0) {
        uVar9 = -uVar9;
      }
    }
    piVar10[2] = uVar9;
    piVar10 = (int *)pfVar4[8];
  }
  dVar2 = (double)(int)pfVar4[2];
  dVar1 = (double)piVar10[2] * (dVar2 / (double)*piVar10) + (double)_DAT_5f75f57c;
  uStack_80 = (uint)((ulonglong)dVar1 >> 0x20);
  local_84 = SUB84(dVar1,0);
  uVar9 = uStack_80 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)((uStack_80 << 0xb | local_84 >> 0x15 | 0x80000000) >>
                    (0x1eU - (char)uVar9 & 0x1f));
    if ((longlong)dVar1 < 0) {
      fVar12 = (float)-(int)fVar12;
    }
  }
  pfVar4[3] = fVar12;
  dVar1 = (dVar2 / (double)*piVar10) * (double)(int)pfVar4[4] + (double)_DAT_5f75f588;
  uStack_70 = (uint)((ulonglong)dVar1 >> 0x20);
  local_74 = SUB84(dVar1,0);
  uVar9 = uStack_70 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)((uStack_70 << 0xb | local_74 >> 0x15 | 0x80000000) >>
                   (0x1eU - (char)uVar9 & 0x1f));
    if ((longlong)dVar1 < 0) {
      fVar8 = (float)-(int)fVar8;
    }
  }
  if ((int)fVar12 < (int)fVar8) {
    fVar8 = fVar12;
  }
  dVar1 = _DAT_5f75f590 / (_DAT_5f75f598 * local_34);
  pfVar4[3] = fVar8;
  dVar3 = (double)*(float *)pfVar4[7] * dVar1 * dVar2 + _DAT_5f75f5a0;
  uStack_60 = (uint)((ulonglong)dVar3 >> 0x20);
  local_64 = SUB84(dVar3,0);
  uVar9 = uStack_60 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)((uStack_60 << 0xb | local_64 >> 0x15 | 0x80000000) >>
                    (0x1eU - (char)uVar9 & 0x1f));
    if ((longlong)dVar3 < 0) {
      fVar12 = (float)-(int)fVar12;
    }
  }
  pfVar4[5] = fVar12;
  dVar1 = dVar1 * (double)((float *)pfVar4[7])[0x78] * dVar2 + _DAT_5f75f5a8;
  uStack_50 = (uint)((ulonglong)dVar1 >> 0x20);
  local_54 = SUB84(dVar1,0);
  uVar9 = uStack_50 >> 0x14 & 0x7ff;
  if (uVar9 < 0x3ff) {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)((uStack_50 << 0xb | local_54 >> 0x15 | 0x80000000) >>
                    (0x1eU - (char)uVar9 & 0x1f));
    if ((longlong)dVar1 < 0) {
      fVar11 = (float)-(int)fVar11;
    }
  }
  pfVar4[6] = fVar11;
  fVar11 = fVar8;
  if ((int)fVar12 < (int)fVar8) {
    fVar11 = fVar12;
  }
  pfVar4[5] = fVar11;
  fVar12 = pfVar4[6];
  if ((int)fVar8 <= (int)pfVar4[6]) {
    fVar12 = fVar8;
  }
  pfVar4[6] = fVar12;
  *local_44 = pfVar4;
  return (undefined **)0x0;
}


