/* Module: vidpcore.dll
   Function: SfDibClock
   Address: 5de6da40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibClock(void *,struct tagRECT *,long,struct tagRECT *,void *,struct tagRECT
   *,long,struct tagRECT *,long,struct tCLOCKPROP const *,double) */

long SfDibClock(void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,void *param_5,
               tagRECT *param_6,long param_7,tagRECT *param_8,long param_9,tCLOCKPROP *param_10,
               double param_11)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  float *pfVar11;
  float10 fVar12;
  float10 fVar13;
  float *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  byte bStack_64;
  undefined3 uStack_63;
  double local_60;
  double local_58;
  undefined4 local_50;
  undefined4 local_4c;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  int local_18;
  int local_14;
  
                    /* 0x6da40  16  ?SfDibClock@@YGJPAXPAUtagRECT@@J101J1JPBUtCLOCKPROP@@N@Z */
  if (_DAT_5df18838 <= param_11) {
    if (_DAT_5df18830 < param_11) {
      param_11 = 1.0;
      local_78 = 1;
      goto LAB_5de6da76;
    }
    if (_DAT_5df18830 == param_11) {
      local_78 = 1;
      goto LAB_5de6da76;
    }
  }
  else {
    param_11 = 0.0;
  }
  local_78 = 0;
LAB_5de6da76:
  iVar8 = param_6->right;
  iVar2 = param_6->left;
  iVar3 = param_6->top;
  iVar4 = param_6->bottom;
  lVar7 = FUN_5debc1e0(&local_18,&local_70,&local_68,&local_7c,&local_80,param_1,param_2,param_3,
                       param_4,param_5,param_6,param_7,param_8,param_9);
  if (-1 < lVar7) {
    if (param_10 == (tCLOCKPROP *)0x0) {
      return -0x7fffbffd;
    }
    local_40 = *(double *)(param_10 + 8) * _DAT_5df20c98;
    local_38 = local_40 + _DAT_5df20c90;
    local_28 = local_38 * param_11;
    local_6c = 0;
    local_58 = (double)((iVar4 - iVar3) / 2 - local_14) + _DAT_5df1eec0;
    if (0 < local_68) {
      local_20 = (double)-((iVar8 - iVar2) / 2);
      do {
        local_4c = 0x3ff00000;
        local_60 = local_20;
        if (*(int *)param_10 != 0) {
          local_60 = -local_20;
          local_4c = 0xbff00000;
        }
        local_50 = 0;
        local_74 = 0;
        local_60 = (double)local_18 + local_60;
        if (0 < local_70) {
          pfVar11 = (float *)(local_80 + 4);
          local_84 = (float *)(local_7c + 4);
          pbVar10 = (byte *)(local_80 + 1);
          pbVar9 = (byte *)(local_7c + 1);
          do {
            fVar13 = (float10)fpatan((float10)local_60,(float10)local_58);
            if (fVar13 < (float10)_DAT_5df18838) {
              do {
                fVar13 = fVar13 + (float10)_DAT_5df20c90;
              } while (fVar13 < (float10)_DAT_5df18838);
            }
            local_30 = (double)fVar13;
            if (fVar13 <= (float10)local_28) {
              local_48 = SQRT(local_58 * local_58 + local_60 * local_60);
              if (local_48 < _DAT_5df20c88) {
                local_48 = 2.0;
              }
              fVar13 = (float10)_CIasin();
              local_48 = (double)fVar13;
              dVar1 = local_40;
              if (local_40 < local_48) {
                dVar1 = local_48;
              }
              fVar13 = (float10)local_28 - (float10)dVar1;
              if ((float10)local_38 < fVar13) {
                fVar13 = (float10)local_38;
              }
              if ((local_78 != 0) || ((float10)local_30 <= fVar13)) {
                if (param_9 == 4) {
                  *(undefined4 *)(pbVar10 + -1) = *(undefined4 *)(pbVar9 + -1);
                }
                else {
                  pfVar11[-1] = local_84[-1];
                  *pfVar11 = *local_84;
                  pfVar11[1] = local_84[1];
                  pfVar11[2] = local_84[2];
                }
              }
              else {
                fVar13 = (float10)_DAT_5df18830 - ((float10)local_30 - fVar13) / (float10)dVar1;
                fVar12 = fVar13 * fVar13 * fVar13;
                fVar13 = fVar13 * fVar13 * (float10)_DAT_5df20c78 - (fVar12 + fVar12);
                if (param_9 == 4) {
                  bVar6 = ftol();
                  _bStack_64 = CONCAT31(uStack_63,bVar6);
                  uVar5 = (uint)bVar6;
                  iVar8 = ((uint)pbVar9[2] - (uint)pbVar10[2]) * uVar5;
                  pbVar10[2] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar10[2];
                  iVar8 = ((uint)pbVar9[-1] - (uint)pbVar10[-1]) * uVar5;
                  pbVar10[-1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar10[-1];
                  iVar8 = ((uint)*pbVar9 - (uint)*pbVar10) * uVar5;
                  *pbVar10 = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *pbVar10;
                  iVar8 = ((uint)pbVar9[1] - (uint)pbVar10[1]) * uVar5;
                  pbVar10[1] = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + pbVar10[1];
                }
                else {
                  pfVar11[2] = (float)(((float10)local_84[2] - (float10)pfVar11[2]) * fVar13 +
                                      (float10)pfVar11[2]);
                  pfVar11[-1] = (float)(((float10)local_84[-1] - (float10)pfVar11[-1]) * fVar13 +
                                       (float10)pfVar11[-1]);
                  *pfVar11 = (float)(((float10)*local_84 - (float10)*pfVar11) * fVar13 +
                                    (float10)*pfVar11);
                  pfVar11[1] = (float)(((float10)local_84[1] - (float10)pfVar11[1]) * fVar13 +
                                      (float10)pfVar11[1]);
                }
              }
            }
            local_60 = (double)CONCAT44(local_4c,local_50) + local_60;
            local_84 = local_84 + 4;
            local_74 = local_74 + 1;
            pbVar9 = pbVar9 + 4;
            pbVar10 = pbVar10 + 4;
            pfVar11 = pfVar11 + 4;
          } while (local_74 < local_70);
        }
        local_58 = local_58 - _DAT_5df18830;
        local_7c = local_7c + param_7;
        local_80 = local_80 + param_3;
        local_6c = local_6c + 1;
      } while (local_6c < local_68);
    }
    lVar7 = 0;
  }
  return lVar7;
}


