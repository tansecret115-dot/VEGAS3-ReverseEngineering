/* Module: sftrans1.dll
   Function: SfDibTeethDraw
   Address: 0046c320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibTeethDraw(void *,struct tagRECT *,long,struct tagRECT *,long,struct tSFRGBA
   *,struct tTEETHPROP &,double) */

long SfDibTeethDraw(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,long param_5,
                   tSFRGBA *param_6,tTEETHPROP *param_7,double param_8)

{
  double dVar1;
  double dVar2;
  undefined1 uVar3;
  long lVar4;
  int iVar5;
  tTEETHPROP *ptVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST0;
  double dVar12;
  undefined4 in_stack_00000020;
  int local_104;
  double local_100;
  int local_f4;
  double local_f0;
  undefined4 *local_d4;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  double local_c0;
  long local_b4;
  double local_b0 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  double local_80 [2];
  double local_70;
  float local_68;
  double local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [68];
  
                    /* 0x6c320  24
                       ?SfDibTeethDraw@@YGJPAXPAUtagRECT@@J1JPAUtSFRGBA@@AAUtTEETHPROP@@N@Z */
  local_c0 = (double)(*(float *)(param_7 + 0x108) * _DAT_00561374);
  local_100 = (double)(*(float *)(param_7 + 0x104) * _DAT_0055d650);
  lVar4 = FUN_004cd9a0(&local_d0,&local_cc,&local_d4,param_1,param_2,param_3,param_4,param_5);
  local_b4 = lVar4;
  if (DAT_00577ae0 == 0) {
    FUN_0046ac60(&DAT_005775d8);
    FUN_0046adb0(&DAT_005774d8);
    DAT_00577ae0 = 1;
  }
  if ((local_100 <= _DAT_00561368) || (_DAT_00561360 <= local_100)) {
    if ((_DAT_00561358 < local_100) && (local_100 < _DAT_00561350)) {
      local_100 = 269.99;
    }
  }
  else {
    local_100 = 89.99;
  }
  fVar10 = (float10)local_100 * (float10)_DAT_0055d680;
  iVar5 = param_2->right - param_2->left;
  local_58 = 0;
  dVar12 = (double)fVar10;
  fVar11 = (float10)fcos(fVar10);
  iVar7 = param_2->bottom - param_2->top;
  local_54 = 0xbf800000;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0x3f800000;
  dVar1 = (double)fVar11;
  fVar11 = (float10)fsin((float10)dVar12);
  local_60 = (double)fVar11;
  FUN_004db0e0(local_48);
  iVar8 = *(int *)(param_7 + 0x100);
  local_f0 = 0.0;
  dVar2 = _DAT_00555910;
  if (0 < iVar8) {
    ptVar6 = param_7 + 8;
    do {
      if (local_f0 <= *(double *)ptVar6) {
        local_f0 = *(double *)ptVar6;
      }
      if (*(double *)ptVar6 <= dVar2) {
        dVar2 = *(double *)ptVar6;
      }
      ptVar6 = ptVar6 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  local_f0 = local_f0 * local_c0;
  dVar2 = dVar2 * local_c0;
  if (_DAT_0055d660 <= local_100) {
    if (_DAT_00557d70 <= local_100) {
      if (_DAT_0055d658 <= local_100) {
        FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
        fVar10 = (float10)fptan((float10)_DAT_00560f48 - (float10)dVar12);
        fVar10 = ((((float10)local_f0 - (float10)dVar2) / (float10)dVar1 + (float10)iVar5 +
                  fVar10 * (float10)iVar7) *
                  (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020) -
                 (float10)local_f0 / (float10)dVar1) - fVar10 * (float10)iVar7;
      }
      else {
        FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
        fVar10 = (float10)fptan((float10)dVar12);
        fVar10 = fVar10 * (float10)iVar7 + (float10)iVar5;
        fVar10 = fVar10 - ((float10)local_f0 / (float10)dVar1 +
                          (fVar10 - ((float10)local_f0 - (float10)dVar2) / (float10)dVar1) *
                          (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020));
      }
    }
    else {
      FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
      fVar10 = (float10)fptan((float10)dVar12);
      fVar10 = (float10)iVar5 -
               ((float10)local_f0 / (float10)dVar1 +
               (((float10)iVar5 - fVar10 * (float10)iVar7) -
               ((float10)local_f0 - (float10)dVar2) / (float10)dVar1) *
               (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020));
    }
  }
  else {
    FUN_004dae70(0,0,0x3f800000,(float)fVar10,local_48);
    fVar10 = (float10)fptan((float10)dVar12);
    fVar10 = (((float10)local_f0 - (float10)dVar2) / (float10)dVar1 + fVar10 * (float10)iVar7 +
             (float10)iVar5) * (float10)(double)CONCAT44(param_8._0_4_,in_stack_00000020) -
             (float10)local_f0 / (float10)dVar1;
  }
  FUN_004dafa0((float)fVar10,0,0,local_48);
  FUN_004db1b0(&local_58,local_48);
  FUN_004db1b0(&local_90,local_48);
  local_a0._0_4_ = 0;
  local_a0._4_4_ = 0;
  local_98 = 0;
  FUN_004dad00(&local_58,&local_90,local_80);
  FUN_004dad00(&local_a0,&local_90,local_b0);
  FUN_004dad30(local_80,local_b0,&local_70);
  fVar10 = (float10)FUN_004dad90(&local_70);
  fVar11 = (float10)FUN_004dad90(local_80);
  local_b0[0] = (double)((float10)(float)fVar10 / fVar11);
  if (_DAT_00557840 < local_68) {
    local_b0[0] = local_b0[0] * _DAT_00557828;
  }
  fVar10 = (float10)fcos((float10)_DAT_00561320);
  local_f4 = 0;
  fVar11 = (float10)fsin((float10)_DAT_00561320);
  local_80[0] = (double)(fVar11 * (float10)local_cc + fVar10 * (float10)local_d0);
  if (0 < local_cc) {
    iVar5 = ftol();
    iVar8 = local_d0;
    do {
      local_100._0_4_ = ftol();
      local_104 = 0;
      if (0 < iVar8) {
        local_70 = (double)(extraout_ST0 * (float10)dVar1);
        puVar9 = local_d4;
        do {
          iVar8 = *(int *)(param_7 + 0x100);
          dVar12 = ((local_70 - (double)local_104 * local_60) * _DAT_00561348) / local_80[0];
          if (_DAT_00555910 <= dVar12) {
            dVar12 = modf(dVar12,(double *)&local_a0);
          }
          else {
            dVar12 = modf(dVar12,(double *)&local_a0);
            dVar12 = dVar12 + _DAT_00555908;
          }
          iVar7 = 0;
          ptVar6 = param_7;
          if (0 < iVar8) {
            do {
              if (dVar12 < *(double *)ptVar6) {
                local_c8 = *(undefined4 *)(param_7 + iVar7 * 0x10 + 8);
                uStack_c4 = *(undefined4 *)(param_7 + iVar7 * 0x10 + 0xc);
                break;
              }
              iVar7 = iVar7 + 1;
              ptVar6 = ptVar6 + 0x10;
            } while (iVar7 < iVar8);
          }
          ftol();
          iVar8 = ftol();
          iVar8 = iVar8 + local_100._0_4_;
          if (iVar8 < 0x2000) {
            if (-0x2001 < iVar8) {
              uVar3 = (&DAT_005776d7)[-(iVar8 + 0x2000 >> 6)];
              *puVar9 = *(undefined4 *)param_6;
              *(undefined1 *)((int)puVar9 + 3) = uVar3;
            }
          }
          else {
            *puVar9 = *(undefined4 *)param_6;
          }
          local_104 = local_104 + 1;
          puVar9 = puVar9 + 1;
          local_100._0_4_ = local_100._0_4_ + iVar5;
          iVar8 = local_d0;
          lVar4 = local_b4;
        } while (local_104 < local_d0);
      }
      local_d4 = (undefined4 *)((int)local_d4 + param_3);
      local_f4 = local_f4 + 1;
    } while (local_f4 < local_cc);
  }
  return lVar4;
}


