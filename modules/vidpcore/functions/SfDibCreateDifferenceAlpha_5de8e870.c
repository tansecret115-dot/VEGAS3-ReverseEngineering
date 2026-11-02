/* Module: vidpcore.dll
   Function: SfDibCreateDifferenceAlpha
   Address: 5de8e870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfDibCreateDifferenceAlpha(void *,struct tagRECT *,long,struct tagRECT *,struct
   tSFRGBADOUBLE *,struct tMASKSETTINGS *,long) */

long SfDibCreateDifferenceAlpha
               (void *param_1,tagRECT *param_2,long param_3,tagRECT *param_4,tSFRGBADOUBLE *param_5,
               tMASKSETTINGS *param_6,long param_7)

{
  byte bVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int local_60;
  int local_5c;
  float local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  double local_40;
  double local_38;
  double local_30;
  double local_20;
  double local_18;
  double local_10;
  
                    /* 0x8e870  17
                       ?SfDibCreateDifferenceAlpha@@YGJPAXPAUtagRECT@@J1PAUtSFRGBADOUBLE@@PAUtMASKSETTINGS@@J@Z
                        */
  iVar4 = FUN_5debbf10(&local_60,&local_5c,&param_2,param_1,param_2,param_3,param_4,param_7);
  if (-1 < iVar4) {
    param_4 = *(tagRECT **)param_6;
    fVar2 = *(float *)(param_6 + 4);
    local_58 = _DAT_5df205c8 / (fVar2 - (float)param_4);
    local_50 = (float)*(double *)param_5;
    local_4c = (float)*(double *)(param_5 + 8);
    local_48 = (float)*(double *)(param_5 + 0x10);
    local_44 = (float)*(double *)(param_5 + 0x18);
    local_54 = iVar4;
    FUN_5ded1aa0(&local_20,&local_50);
    param_6 = (tMASKSETTINGS *)0x0;
    iVar6 = local_60;
    if (0 < local_5c) {
      do {
        iVar7 = 0;
        if (0 < iVar6) {
          pbVar8 = (byte *)((int)&param_2->left + 3);
          do {
            bVar1 = *pbVar8;
            if (bVar1 != 0xff) {
              if (bVar1 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = ((uint)pbVar8[-3] * 0xff) / (uint)bVar1;
                if (0xfe < uVar5) {
                  uVar5 = 0xff;
                }
              }
              pbVar8[-3] = (byte)uVar5;
              if (*pbVar8 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = ((uint)pbVar8[-2] * 0xff) / (uint)*pbVar8;
                if (0xfe < uVar5) {
                  uVar5 = 0xff;
                }
              }
              pbVar8[-2] = (byte)uVar5;
              if (*pbVar8 == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = ((uint)pbVar8[-1] * 0xff) / (uint)*pbVar8;
                if (0xfe < uVar5) {
                  uVar5 = 0xff;
                }
              }
              pbVar8[-1] = (byte)uVar5;
            }
            FUN_5ded1830(&local_40,pbVar8 + -3);
            fVar9 = ABS((float10)local_40 - (float10)local_20);
            if ((float10)_DAT_5df2bbe0 < fVar9) {
              fVar9 = (float10)_DAT_5df205c8 - fVar9;
            }
            bVar1 = *pbVar8;
            fVar10 = (float10)local_48 - (float10)pbVar8[-1] * (float10)_DAT_5df2bd28;
            fVar11 = (float10)local_4c - (float10)pbVar8[-2] * (float10)_DAT_5df2bd28;
            fVar12 = (float10)local_50 - (float10)pbVar8[-3] * (float10)_DAT_5df2bd28;
            param_7 = (long)(float)(((fVar9 + fVar9 + ABS((float10)local_30 - (float10)local_10) +
                                     ABS((float10)local_38 - (float10)local_18)) *
                                     (float10)_DAT_5df231d8 +
                                    SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11) *
                                    (float10)_DAT_5df42a08) * (float10)_DAT_5df2bbe0);
            if ((float)param_4 <= (float)param_7) {
              if ((float)param_7 <= fVar2) {
                bVar3 = ftol();
                *pbVar8 = bVar3;
              }
              else {
                *pbVar8 = 0xff;
              }
            }
            else {
              *pbVar8 = 0;
            }
            bVar3 = *pbVar8;
            if (bVar1 < *pbVar8) {
              bVar3 = bVar1;
            }
            *pbVar8 = bVar3;
            pbVar8 = pbVar8 + 4;
            iVar7 = iVar7 + 1;
            iVar6 = local_60;
            iVar4 = local_54;
          } while (iVar7 < local_60);
        }
        param_2 = (tagRECT *)((int)&param_2->left + param_3);
        param_6 = param_6 + 1;
      } while ((int)param_6 < local_5c);
    }
  }
  return iVar4;
}


