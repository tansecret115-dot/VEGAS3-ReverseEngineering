/* Module: sftrans1.dll
   Function: SfDibTeeth
   Address: 0046aea0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibTeeth(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tTEETHPROP
   &,double) */

long SfDibTeeth(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
               tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
               long param_11,tagRECT *param_12,long param_13,tTEETHPROP *param_14,double param_15)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  tTEETHPROP *ptVar6;
  byte *pbVar7;
  char *pcVar8;
  byte *pbVar9;
  float10 fVar10;
  float10 fVar11;
  int local_138;
  int local_134;
  double local_130;
  uint local_120;
  int local_114;
  int local_110;
  char *local_10c;
  double local_108;
  double local_100;
  int local_f4;
  int local_f0;
  int local_ec;
  byte local_e8;
  undefined3 uStack_e7;
  byte local_e4;
  undefined3 uStack_e3;
  undefined8 local_e0;
  byte local_d4;
  undefined3 uStack_d3;
  undefined4 local_d0;
  undefined4 uStack_cc;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  double local_b0 [2];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  double local_90;
  float local_88;
  double local_80 [2];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  double local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [68];
  
                    /* 0x6aea0  22  ?SfDibTeeth@@YGJPAXPAUtagRECT@@J101J101J1JAAUtTEETHPROP@@N@Z */
  local_130 = (double)(*(float *)(param_14 + 0x104) * _DAT_0055d650);
  FUN_004cdc70(local_58,&local_110,&local_114,&local_f0,&local_10c,param_1,param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_13);
  iVar3 = FUN_004cdc70(local_58,&local_110,&local_114,&local_f4,&local_10c,param_1,param_2,param_3,
                       param_4,param_9,param_10,param_11,param_12,param_13);
  if (-1 < iVar3) {
    local_c4 = iVar3;
    if (DAT_00577ad8 == 0) {
      FUN_0046ac60(&DAT_005779d8);
      FUN_0046adb0(&DAT_005778d8);
      DAT_00577ad8 = 1;
    }
    if ((local_130 <= _DAT_00561368) || (_DAT_00561360 <= local_130)) {
      if ((_DAT_00561358 < local_130) && (local_130 < _DAT_00561350)) {
        local_130 = 269.99;
      }
    }
    else {
      local_130 = 89.99;
    }
    fVar10 = (float10)local_130 * (float10)_DAT_0055d680;
    local_70 = 0;
    local_6c = 0xbf800000;
    local_68 = 0;
    dVar1 = (double)fVar10;
    fVar11 = (float10)fcos(fVar10);
    iVar5 = param_6->right - param_6->left;
    iVar4 = param_6->bottom - param_6->top;
    local_64 = 0x3f800000;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0x3f800000;
    local_100 = (double)fVar11;
    fVar11 = (float10)fsin((float10)dVar1);
    local_60 = (double)fVar11;
    FUN_004db0e0(local_48);
    if (_DAT_0055d660 <= local_130) {
      if (_DAT_00557d70 <= local_130) {
        if (_DAT_0055d658 <= local_130) {
          FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
          fVar10 = (float10)fptan((float10)_DAT_00560f48 - (float10)dVar1);
          fVar10 = ((float10)_DAT_00555908 / (float10)local_100 + (float10)iVar5 +
                   fVar10 * (float10)iVar4) * (float10)param_15 - fVar10 * (float10)iVar4;
        }
        else {
          FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
          fVar10 = (float10)fptan((float10)dVar1);
          fVar10 = fVar10 * (float10)iVar4 + (float10)iVar5;
          fVar10 = fVar10 - (fVar10 - (float10)_DAT_00555908 / (float10)local_100) *
                            (float10)param_15;
        }
      }
      else {
        FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
        fVar10 = (float10)fptan((float10)dVar1);
        fVar10 = (float10)iVar5 -
                 (((float10)iVar5 - fVar10 * (float10)iVar4) -
                 (float10)_DAT_00555908 / (float10)local_100) * (float10)param_15;
      }
    }
    else {
      FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
      fVar10 = (float10)fptan((float10)dVar1);
      fVar10 = ((float10)_DAT_00555908 / (float10)local_100 + fVar10 * (float10)iVar4 +
               (float10)iVar5) * (float10)param_15;
    }
    FUN_004dafa0((float)fVar10,0,0,local_48);
    FUN_004db1b0(&local_70,local_48);
    FUN_004db1b0(&local_a0,local_48);
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    FUN_004dad00(&local_70,&local_a0,local_80);
    FUN_004dad00(&local_c0,&local_a0,local_b0);
    FUN_004dad30(local_80,local_b0,&local_90);
    fVar10 = (float10)FUN_004dad90(&local_90);
    fVar11 = (float10)FUN_004dad90(local_80);
    local_b0[0] = (double)((float10)(float)fVar10 / fVar11);
    if (_DAT_00557840 < local_88) {
      local_b0[0] = local_b0[0] * _DAT_00557828;
    }
    fVar10 = (float10)fcos((float10)_DAT_00561320);
    iVar4 = 0;
    local_ec = 0;
    fVar11 = (float10)fsin((float10)_DAT_00561320);
    local_80[0] = (double)(fVar11 * (float10)local_114 + fVar10 * (float10)local_110);
    if (0 < local_114) {
      iVar5 = ftol();
      do {
        local_138 = ftol();
        local_134 = 0;
        if (0 < local_110) {
          local_90 = (double)local_ec * local_100;
          pbVar7 = (byte *)(local_f4 + 2);
          pbVar9 = (byte *)(local_f0 + 2);
          pcVar8 = local_10c;
          do {
            iVar3 = *(int *)(param_14 + 0x100);
            local_108 = ((local_90 - (double)local_134 * local_60) * _DAT_00561348) / local_80[0];
            if (_DAT_00555910 <= local_108) {
              local_108 = modf(local_108,(double *)&local_c0);
            }
            else {
              local_108 = modf(local_108,(double *)&local_c0);
              local_108 = local_108 + _DAT_00555908;
            }
            iVar4 = 0;
            ptVar6 = param_14;
            if (0 < iVar3) {
              do {
                if (local_108 < *(double *)ptVar6) {
                  if (iVar4 < 1) {
                    local_e0 = 0;
                  }
                  else {
                    local_e0 = *(undefined8 *)(param_14 + iVar4 * 0x10 + -0x10);
                  }
                  local_d0 = *(undefined4 *)(param_14 + iVar4 * 0x10 + 8);
                  uStack_cc = *(undefined4 *)(param_14 + iVar4 * 0x10 + 0xc);
                  break;
                }
                iVar4 = iVar4 + 1;
                ptVar6 = ptVar6 + 0x10;
              } while (iVar4 < iVar3);
            }
            iVar3 = ftol();
            if (local_138 - iVar3 < 0x6000) {
              if (local_138 - iVar3 < -0x2000) {
                *(undefined4 *)pcVar8 = *(undefined4 *)(pbVar9 + -2);
              }
              else {
                iVar3 = ftol();
                bVar2 = pbVar9[-2];
                _local_e4 = CONCAT31(uStack_e3,bVar2);
                local_120 = (uint)(byte)(&DAT_005778d8)[iVar3];
                iVar3 = ((uint)pbVar7[-2] - (uint)bVar2) * local_120;
                *pcVar8 = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar2;
                bVar2 = pbVar9[-1];
                _local_e8 = CONCAT31(uStack_e7,bVar2);
                iVar3 = ((uint)pbVar7[-1] - (uint)bVar2) * local_120;
                pcVar8[1] = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar2;
                bVar2 = *pbVar9;
                _local_d4 = CONCAT31(uStack_d3,bVar2);
                iVar3 = ((uint)*pbVar7 - (uint)bVar2) * local_120;
                pcVar8[2] = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + bVar2;
                iVar3 = ((uint)pbVar7[1] - (uint)pbVar9[1]) * local_120;
                pcVar8[3] = (char)(iVar3 + (iVar3 >> 0x1f & 0xffU) >> 8) + pbVar9[1];
              }
            }
            else {
              *(undefined4 *)pcVar8 = *(undefined4 *)(pbVar7 + -2);
            }
            local_138 = local_138 + iVar5;
            local_134 = local_134 + 1;
            pbVar9 = pbVar9 + 4;
            pbVar7 = pbVar7 + 4;
            pcVar8 = pcVar8 + 4;
            iVar3 = local_c4;
            iVar4 = local_ec;
          } while (local_134 < local_110);
        }
        local_f0 = local_f0 + param_7;
        local_10c = local_10c + param_3;
        local_f4 = local_f4 + param_11;
        iVar4 = iVar4 + 1;
        local_ec = iVar4;
      } while (iVar4 < local_114);
    }
  }
  return iVar3;
}


