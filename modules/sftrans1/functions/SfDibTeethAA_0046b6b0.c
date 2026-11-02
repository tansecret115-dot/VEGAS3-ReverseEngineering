/* Module: sftrans1.dll
   Function: SfDibTeethAA
   Address: 0046b6b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibTeethAA(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,void *,struct tagRECT *,long,struct tagRECT *,long,struct tTEETHPROP
   &,double) */

long SfDibTeethAA(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
                 tagRECT *param_6,long param_7,tagRECT *param_8,void *param_9,tagRECT *param_10,
                 long param_11,tagRECT *param_12,long param_13,tTEETHPROP *param_14,double param_15)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  tTEETHPROP *ptVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  byte *local_180;
  int local_17c;
  int local_178;
  int local_174;
  double local_170;
  uint local_168;
  int local_160;
  int local_15c;
  double local_158;
  double local_150;
  byte *local_148;
  char *local_144;
  char *local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  double local_128;
  double local_120;
  undefined8 local_118;
  undefined8 local_110;
  int local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  double local_e0;
  double local_d8;
  byte local_d0;
  undefined3 uStack_cf;
  byte local_cc;
  undefined3 uStack_cb;
  byte local_c8;
  undefined3 uStack_c7;
  byte local_c4;
  undefined3 uStack_c3;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  double local_a0;
  float local_98;
  double local_90 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  double local_70 [2];
  undefined1 local_60 [16];
  double local_50;
  undefined1 local_48 [68];
  
                    /* 0x6b6b0  23  ?SfDibTeethAA@@YGJPAXPAUtagRECT@@J101J101J1JAAUtTEETHPROP@@N@Z
                        */
  local_50 = (double)(*(float *)(param_14 + 0x108) * _DAT_00561370);
  local_170 = (double)(*(float *)(param_14 + 0x104) * _DAT_0055d650);
  FUN_004cdc70(local_60,&local_15c,&local_160,&local_13c,&local_144,param_1,param_2,param_3,param_4,
               param_5,param_6,param_7,param_8,param_13);
  local_104 = FUN_004cdc70(local_60,&local_15c,&local_160,&local_134,&local_144,param_1,param_2,
                           param_3,param_4,param_9,param_10,param_11,param_12,param_13);
  if (-1 < local_104) {
    if (DAT_00577adc == 0) {
      FUN_0046ac60(&DAT_005777d8);
      FUN_0046adb0(&DAT_005776d8);
      DAT_00577adc = 1;
    }
    if ((local_170 <= _DAT_00561368) || (_DAT_00561360 <= local_170)) {
      if ((_DAT_00561358 < local_170) && (local_170 < _DAT_00561350)) {
        local_170 = 269.99;
      }
    }
    else {
      local_170 = 89.99;
    }
    fVar10 = (float10)local_170 * (float10)_DAT_0055d680;
    local_80 = 0;
    local_7c = 0xbf800000;
    local_78 = 0;
    dVar12 = (double)fVar10;
    fVar11 = (float10)fcos(fVar10);
    iVar6 = param_6->right - param_6->left;
    iVar8 = param_6->bottom - param_6->top;
    local_74 = 0x3f800000;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0;
    local_a4 = 0x3f800000;
    local_150 = (double)fVar11;
    fVar11 = (float10)fsin((float10)dVar12);
    local_128 = (double)fVar11;
    FUN_004db0e0(local_48);
    if (_DAT_0055d660 <= local_170) {
      if (_DAT_00557d70 <= local_170) {
        if (_DAT_0055d658 <= local_170) {
          FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
          fVar10 = (float10)fptan((float10)_DAT_00560f48 - (float10)dVar12);
          fVar10 = ((float10)_DAT_00555908 / (float10)local_150 + (float10)iVar6 +
                   fVar10 * (float10)iVar8) * (float10)param_15 - fVar10 * (float10)iVar8;
        }
        else {
          FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
          fVar10 = (float10)fptan((float10)dVar12);
          fVar10 = fVar10 * (float10)iVar8 + (float10)iVar6;
          fVar10 = fVar10 - (fVar10 - (float10)_DAT_00555908 / (float10)local_150) *
                            (float10)param_15;
        }
      }
      else {
        FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
        fVar10 = (float10)fptan((float10)dVar12);
        fVar10 = (float10)iVar6 -
                 (((float10)iVar6 - fVar10 * (float10)iVar8) -
                 (float10)_DAT_00555908 / (float10)local_150) * (float10)param_15;
      }
    }
    else {
      FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
      fVar10 = (float10)fptan((float10)dVar12);
      fVar10 = ((float10)_DAT_00555908 / (float10)local_150 + fVar10 * (float10)iVar8 +
               (float10)iVar6) * (float10)param_15;
    }
    FUN_004dafa0((float)fVar10,0,0,local_48);
    FUN_004db1b0(&local_80,local_48);
    FUN_004db1b0(&local_b0,local_48);
    local_c0 = 0;
    local_bc = 0;
    local_b8 = 0;
    FUN_004dad00(&local_80,&local_b0,local_90);
    FUN_004dad00(&local_c0,&local_b0,local_70);
    FUN_004dad30(local_90,local_70,&local_a0);
    fVar10 = (float10)FUN_004dad90(&local_a0);
    fVar11 = (float10)FUN_004dad90(local_90);
    iVar6 = local_160;
    local_120 = (double)((float10)(float)fVar10 / fVar11);
    if (_DAT_00557840 < local_98) {
      local_120 = local_120 * _DAT_00557828;
    }
    fVar10 = (float10)fcos((float10)_DAT_00561320);
    local_178 = 0;
    fVar11 = (float10)fsin((float10)_DAT_00561320);
    local_e0 = (double)(fVar11 * (float10)local_160 + fVar10 * (float10)local_15c);
    if (0 < local_160) {
      iVar5 = ftol();
      iVar8 = local_15c;
      do {
        local_138 = ftol();
        local_12c = ftol();
        local_130 = ftol();
        if (0 < iVar8) {
          local_148 = (byte *)(local_134 + 2);
          local_70[0] = (double)local_178 * local_150;
          local_180 = (byte *)(local_13c + 2);
          local_17c = 1;
          local_140 = local_144;
          do {
            iVar6 = *(int *)(param_14 + 0x100);
            local_158 = ((local_70[0] - (double)(local_17c + -1) * local_128) * _DAT_00561348) /
                        local_e0;
            if (_DAT_00555910 <= local_158) {
              local_158 = modf(local_158,&local_a0);
            }
            else {
              local_158 = modf(local_158,&local_a0);
              local_158 = local_158 + _DAT_00555908;
            }
            iVar8 = 0;
            ptVar9 = param_14;
            if (0 < iVar6) {
              do {
                if (local_158 < *(double *)ptVar9) {
                  if (iVar8 < 1) {
                    local_110 = 0;
                  }
                  else {
                    local_110 = *(undefined8 *)(param_14 + iVar8 * 0x10 + -0x10);
                  }
                  local_e8 = *(undefined4 *)(param_14 + iVar8 * 0x10 + 8);
                  uStack_e4 = *(undefined4 *)(param_14 + iVar8 * 0x10 + 0xc);
                  break;
                }
                iVar8 = iVar8 + 1;
                ptVar9 = ptVar9 + 0x10;
              } while (iVar8 < iVar6);
            }
            iVar6 = ftol();
            local_d8 = (double)iVar6;
            iVar8 = ftol();
            iVar8 = local_138 - iVar8;
            iVar6 = *(int *)(param_14 + 0x100);
            local_158 = (double)CONCAT44(local_158._4_4_,iVar8);
            dVar12 = (((double)(int)(((int)(local_178 - 1U) < 1) - 1 & local_178 - 1U) * local_150 -
                      (double)(int)(((int)(local_17c - 2U) < 1) - 1 & local_17c - 2U) * local_128) *
                     _DAT_00561348) / local_e0;
            if (_DAT_00555910 <= dVar12) {
              dVar12 = modf(dVar12,local_90);
            }
            else {
              dVar12 = modf(dVar12,local_90);
              dVar12 = dVar12 + _DAT_00555908;
            }
            iVar7 = 0;
            ptVar9 = param_14;
            if (0 < iVar6) {
              do {
                if (dVar12 < *(double *)ptVar9) {
                  if (iVar7 < 1) {
                    local_100 = 0;
                  }
                  else {
                    local_100 = *(undefined8 *)(param_14 + iVar7 * 0x10 + -0x10);
                  }
                  local_f0 = *(undefined4 *)(param_14 + iVar7 * 0x10 + 8);
                  uStack_ec = *(undefined4 *)(param_14 + iVar7 * 0x10 + 0xc);
                  break;
                }
                iVar7 = iVar7 + 1;
                ptVar9 = ptVar9 + 0x10;
              } while (iVar7 < iVar6);
            }
            iVar6 = ftol();
            iVar6 = local_12c - iVar6;
            local_174 = local_178 + 1;
            if (local_160 + -1 <= local_178 + 1) {
              local_174 = local_160 + -1;
            }
            iVar7 = local_17c;
            if (local_15c + -1 <= local_17c) {
              iVar7 = local_15c + -1;
            }
            iVar2 = *(int *)(param_14 + 0x100);
            dVar12 = (((double)local_174 * local_150 - (double)iVar7 * local_128) * _DAT_00561348) /
                     local_e0;
            if (_DAT_00555910 <= dVar12) {
              dVar12 = modf(dVar12,(double *)&local_c0);
            }
            else {
              dVar12 = modf(dVar12,(double *)&local_c0);
              dVar12 = dVar12 + _DAT_00555908;
            }
            iVar7 = 0;
            ptVar9 = param_14;
            if (0 < iVar2) {
              do {
                if (dVar12 < *(double *)ptVar9) {
                  if (iVar7 < 1) {
                    local_118 = 0;
                  }
                  else {
                    local_118 = *(undefined8 *)(param_14 + iVar7 * 0x10 + -0x10);
                  }
                  local_f8 = *(undefined4 *)(param_14 + iVar7 * 0x10 + 8);
                  uStack_f4 = *(undefined4 *)(param_14 + iVar7 * 0x10 + 0xc);
                  break;
                }
                iVar7 = iVar7 + 1;
                ptVar9 = ptVar9 + 0x10;
              } while (iVar7 < iVar2);
            }
            iVar7 = ftol();
            local_174 = 0x6000;
            if ((local_130 - iVar7 <= iVar8) &&
               (iVar7 = iVar8 - (local_130 - iVar7), 0x5fff < iVar7)) {
              local_174 = iVar7;
            }
            if ((iVar6 <= iVar8) && (iVar6 = iVar8 - iVar6, local_174 <= iVar6)) {
              local_174 = iVar6;
            }
            if (iVar8 < local_174) {
              if (iVar8 < -0x2000) {
                *(undefined4 *)local_140 = *(undefined4 *)(local_180 + -2);
              }
              else {
                iVar6 = ftol();
                _local_cc = CONCAT31(uStack_cb,(&DAT_005776d8)[iVar6]);
                bVar1 = local_180[-2];
                _local_d0 = CONCAT31(uStack_cf,bVar1);
                uVar4 = (uint)(byte)(&DAT_005776d8)[iVar6];
                iVar6 = ((uint)local_148[-2] - (uint)bVar1) * uVar4;
                *local_140 = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar1;
                bVar1 = local_180[-1];
                _local_c8 = CONCAT31(uStack_c7,bVar1);
                iVar6 = ((uint)local_148[-1] - (uint)bVar1) * uVar4;
                local_140[1] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar1;
                bVar1 = *local_180;
                _local_c4 = CONCAT31(uStack_c3,bVar1);
                iVar6 = ((uint)*local_148 - (uint)bVar1) * uVar4;
                local_140[2] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + bVar1;
                local_168 = (uint)local_180[1];
                iVar6 = (local_148[1] - local_168) * uVar4;
                local_140[3] = (char)(iVar6 + (iVar6 >> 0x1f & 0xffU) >> 8) + local_180[1];
              }
            }
            else {
              *(undefined4 *)local_140 = *(undefined4 *)(local_148 + -2);
            }
            local_180 = local_180 + 4;
            local_148 = local_148 + 4;
            local_140 = local_140 + 4;
            local_138 = local_138 + iVar5;
            local_12c = local_12c + iVar5;
            local_130 = local_130 + iVar5;
            bVar3 = local_17c < local_15c;
            iVar8 = local_15c;
            iVar6 = local_160;
            local_17c = local_17c + 1;
          } while (bVar3);
        }
        local_144 = local_144 + param_3;
        local_13c = local_13c + param_7;
        local_134 = local_134 + param_11;
        local_178 = local_178 + 1;
      } while (local_178 < iVar6);
    }
  }
  return local_104;
}


