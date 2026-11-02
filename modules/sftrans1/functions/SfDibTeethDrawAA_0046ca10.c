/* Module: sftrans1.dll
   Function: SfDibTeethDrawAA
   Address: 0046ca10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibTeethDrawAA(void *,struct tagRECT *,long,struct tagRECT *,long,struct tSFRGBA
   *,struct tTEETHPROP &,double) */

long SfDibTeethDrawAA(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,long param_5,
                     tSFRGBA *param_6,tTEETHPROP *param_7,double param_8)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  tTEETHPROP *ptVar8;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  double dVar11;
  undefined4 in_stack_00000020;
  int local_144;
  int local_140;
  int local_13c;
  double local_138;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined4 *local_11c;
  double local_118;
  int local_110;
  undefined4 *local_10c;
  double local_108;
  double local_100;
  double local_f8;
  long local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  double local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  double local_90 [2];
  double local_80;
  float local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  double local_60 [2];
  double local_50;
  undefined1 local_48 [68];
  
                    /* 0x6ca10  25
                       ?SfDibTeethDrawAA@@YGJPAXPAUtagRECT@@J1JPAUtSFRGBA@@AAUtTEETHPROP@@N@Z */
  local_50 = (double)(*(float *)(param_7 + 0x108) * _DAT_00561374);
  local_138 = (double)(*(float *)(param_7 + 0x104) * _DAT_0055d650);
  local_ec = FUN_004cd9a0(&local_120,&local_128,&local_10c,param_1,param_2,param_3,param_4,param_5);
  if (DAT_00577ae4 == 0) {
    FUN_0046ac60(&DAT_005773d8);
    FUN_0046adb0(&DAT_005772d8);
    DAT_00577ae4 = 1;
  }
  if ((local_138 <= _DAT_00561368) || (_DAT_00561360 <= local_138)) {
    if ((_DAT_00561358 < local_138) && (local_138 < _DAT_00561350)) {
      local_138 = 269.99;
    }
  }
  else {
    local_138 = 89.99;
  }
  fVar9 = (float10)local_138 * (float10)_DAT_0055d680;
  iVar6 = param_2->right - param_2->left;
  dVar11 = (double)fVar9;
  fVar10 = (float10)fcos(fVar9);
  iVar7 = param_2->bottom - param_2->top;
  local_70 = 0;
  local_6c = 0xbf800000;
  local_68 = 0;
  local_64 = 0x3f800000;
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0x3f800000;
  local_118 = (double)fVar10;
  fVar10 = (float10)fsin((float10)dVar11);
  local_108 = (double)fVar10;
  FUN_004db0e0(local_48);
  if (_DAT_0055d660 <= local_138) {
    if (_DAT_00557d70 <= local_138) {
      if (_DAT_0055d658 <= local_138) {
        FUN_004dae70(0,0,0x3f800000,(float)fVar9,local_48);
        fVar9 = (float10)fptan((float10)_DAT_00560f48 - (float10)dVar11);
        fVar9 = ((float10)_DAT_00555908 / (float10)local_118 + (float10)iVar6 +
                fVar9 * (float10)iVar7) * (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020)
                - fVar9 * (float10)iVar7;
      }
      else {
        FUN_004dae70(0,0,0x3f800000,(float)fVar9,local_48);
        fVar9 = (float10)fptan((float10)dVar11);
        fVar9 = fVar9 * (float10)iVar7 + (float10)iVar6;
        fVar9 = fVar9 - (fVar9 - (float10)_DAT_00555908 / (float10)local_118) *
                        (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020);
      }
    }
    else {
      FUN_004dae70(0,0,0x3f800000,(float)fVar9,local_48);
      fVar9 = (float10)fptan((float10)dVar11);
      fVar9 = (float10)iVar6 -
              (((float10)iVar6 - fVar9 * (float10)iVar7) -
              (float10)_DAT_00555908 / (float10)local_118) *
              (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020);
    }
  }
  else {
    FUN_004dae70(0,0,0x3f800000,(float)fVar9,local_48);
    fVar9 = (float10)fptan((float10)dVar11);
    fVar9 = ((float10)_DAT_00555908 / (float10)local_118 + fVar9 * (float10)iVar7 + (float10)iVar6)
            * (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020);
  }
  FUN_004dafa0((float)fVar9,0,0,local_48);
  FUN_004db1b0(&local_70,local_48);
  FUN_004db1b0(&local_a0,local_48);
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  FUN_004dad00(&local_70,&local_a0,local_90);
  FUN_004dad00(&local_b0,&local_a0,local_60);
  FUN_004dad30(local_90,local_60,&local_80);
  fVar9 = (float10)FUN_004dad90(&local_80);
  fVar10 = (float10)FUN_004dad90(local_90);
  iVar6 = local_128;
  local_f8 = (double)((float10)(float)fVar9 / fVar10);
  if (_DAT_00557840 < local_78) {
    local_f8 = local_f8 * _DAT_00557828;
  }
  fVar9 = (float10)fcos((float10)_DAT_00561320);
  local_144 = 0;
  fVar10 = (float10)fsin((float10)_DAT_00561320);
  local_b8 = (double)(fVar10 * (float10)local_128 + fVar9 * (float10)local_120);
  if (0 < local_128) {
    iVar4 = ftol();
    iVar7 = local_120;
    do {
      local_124 = ftol();
      if (0 < iVar7) {
        local_60[0] = (double)local_144 * local_118;
        local_100 = (double)extraout_ST0;
        iVar7 = ftol();
        iVar5 = ftol();
        iVar6 = local_124;
        local_12c = (iVar5 - iVar7) + local_124;
        local_140 = 1;
        iVar7 = ftol();
        iVar5 = ftol();
        local_11c = local_10c;
        local_110 = (iVar5 - iVar7) + iVar6;
        do {
          iVar6 = *(int *)(param_7 + 0x100);
          dVar11 = ((local_60[0] - (double)(local_140 + -1) * local_108) * _DAT_00561348) / local_b8
          ;
          if (_DAT_00555910 <= dVar11) {
            dVar11 = modf(dVar11,&local_80);
          }
          else {
            dVar11 = modf(dVar11,&local_80);
            dVar11 = dVar11 + _DAT_00555908;
          }
          iVar7 = 0;
          ptVar8 = param_7;
          if (0 < iVar6) {
            do {
              if (dVar11 < *(double *)ptVar8) {
                if (iVar7 < 1) {
                  local_e0 = 0;
                }
                else {
                  local_e0 = *(undefined8 *)(param_7 + iVar7 * 0x10 + -0x10);
                }
                local_d0 = *(undefined4 *)(param_7 + iVar7 * 0x10 + 8);
                uStack_cc = *(undefined4 *)(param_7 + iVar7 * 0x10 + 0xc);
                break;
              }
              iVar7 = iVar7 + 1;
              ptVar8 = ptVar8 + 0x10;
            } while (iVar7 < iVar6);
          }
          iVar6 = ftol();
          local_100 = (double)iVar6;
          iVar7 = ftol();
          iVar7 = local_110 - iVar7;
          iVar6 = *(int *)(param_7 + 0x100);
          dVar11 = (((double)(int)(((int)(local_144 - 1U) < 1) - 1 & local_144 - 1U) * local_118 -
                    (double)(int)(((int)(local_140 - 2U) < 1) - 1 & local_140 - 2U) * local_108) *
                   _DAT_00561348) / local_b8;
          if (_DAT_00555910 <= dVar11) {
            dVar11 = modf(dVar11,local_90);
          }
          else {
            dVar11 = modf(dVar11,local_90);
            dVar11 = dVar11 + _DAT_00555908;
          }
          iVar5 = 0;
          ptVar8 = param_7;
          if (0 < iVar6) {
            do {
              if (dVar11 < *(double *)ptVar8) {
                if (iVar5 < 1) {
                  local_d8 = 0;
                }
                else {
                  local_d8 = *(undefined8 *)(param_7 + iVar5 * 0x10 + -0x10);
                }
                local_c0 = *(undefined4 *)(param_7 + iVar5 * 0x10 + 8);
                uStack_bc = *(undefined4 *)(param_7 + iVar5 * 0x10 + 0xc);
                break;
              }
              iVar5 = iVar5 + 1;
              ptVar8 = ptVar8 + 0x10;
            } while (iVar5 < iVar6);
          }
          iVar6 = ftol();
          iVar6 = local_124 - iVar6;
          local_13c = local_144 + 1;
          if (local_128 + -1 <= local_144 + 1) {
            local_13c = local_128 + -1;
          }
          iVar5 = local_140;
          if (local_120 + -1 <= local_140) {
            iVar5 = local_120 + -1;
          }
          iVar2 = *(int *)(param_7 + 0x100);
          dVar11 = (((double)local_13c * local_118 - (double)iVar5 * local_108) * _DAT_00561348) /
                   local_b8;
          if (_DAT_00555910 <= dVar11) {
            dVar11 = modf(dVar11,(double *)&local_b0);
          }
          else {
            dVar11 = modf(dVar11,(double *)&local_b0);
            dVar11 = dVar11 + _DAT_00555908;
          }
          iVar5 = 0;
          ptVar8 = param_7;
          if (0 < iVar2) {
            do {
              if (dVar11 < *(double *)ptVar8) {
                if (iVar5 < 1) {
                  local_e8 = 0;
                }
                else {
                  local_e8 = *(undefined8 *)(param_7 + iVar5 * 0x10 + -0x10);
                }
                local_c8 = *(undefined4 *)(param_7 + iVar5 * 0x10 + 8);
                uStack_c4 = *(undefined4 *)(param_7 + iVar5 * 0x10 + 0xc);
                break;
              }
              iVar5 = iVar5 + 1;
              ptVar8 = ptVar8 + 0x10;
            } while (iVar5 < iVar2);
          }
          iVar5 = ftol();
          local_13c = 0x6000;
          if ((local_12c - iVar5 <= iVar7) &&
             (iVar5 = (iVar7 - (local_12c - iVar5)) * 2 + 0x4000, 0x5fff < iVar5)) {
            local_13c = iVar5;
          }
          if ((iVar6 <= iVar7) && (iVar6 = (iVar7 - iVar6) * 2 + 0x4000, local_13c <= iVar6)) {
            local_13c = iVar6;
          }
          if (iVar7 < local_13c) {
            if (-0x2001 < iVar7) {
              iVar6 = ftol();
              uVar1 = (&DAT_005772d8)[iVar6];
              *local_11c = *(undefined4 *)param_6;
              *(undefined1 *)((int)local_11c + 3) = uVar1;
            }
          }
          else {
            *local_11c = *(undefined4 *)param_6;
          }
          local_11c = local_11c + 1;
          local_110 = local_110 + iVar4;
          local_124 = local_124 + iVar4;
          local_12c = local_12c + iVar4;
          bVar3 = local_140 < local_120;
          iVar7 = local_120;
          iVar6 = local_128;
          local_140 = local_140 + 1;
        } while (bVar3);
      }
      local_10c = (undefined4 *)((int)local_10c + param_3);
      local_144 = local_144 + 1;
    } while (local_144 < iVar6);
  }
  return local_ec;
}


