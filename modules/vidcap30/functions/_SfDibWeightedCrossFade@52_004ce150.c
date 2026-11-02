/* Module: vidcap30.exe
   Function: _SfDibWeightedCrossFade@52
   Address: 004ce150
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibWeightedCrossFade_52
              (int param_1,undefined4 param_2,int param_3,int param_4,int param_5,undefined4 param_6
              ,int param_7,undefined4 param_8,int param_9,undefined4 param_10,int param_11,
              undefined4 param_12,int param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  byte *pbVar13;
  float10 extraout_ST0;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0xce150  346  _SfDibWeightedCrossFade@52 */
  iVar4 = _SfDibPrepareCopy_52
                    (&param_7,&local_8,&param_1,&local_10,param_1,param_2,param_3,param_4,param_7,
                     param_8,param_9,param_10,param_13);
  if (-1 < iVar4) {
    local_4 = iVar4;
    iVar5 = ftol();
    iVar6 = ftol();
    fVar1 = (float)extraout_ST0;
    fVar2 = (float)(double)CONCAT44(param_12,param_11);
    param_11 = 0;
    if (0 < local_8) {
      local_c = 0;
      param_5 = 0;
      do {
        if (param_13 == 4) {
          iVar11 = param_5 + param_1;
          iVar4 = local_c + local_10;
          if (iVar6 + iVar5 < 0x4001) {
            iVar7 = 0;
            if (0 < param_7) {
              pbVar13 = (byte *)(iVar4 + 1);
              pbVar9 = (byte *)(iVar11 + 3);
              do {
                iVar8 = (uint)pbVar9[-3] * iVar6 + (uint)pbVar13[-1] * iVar5;
                pbVar13[-1] = (byte)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
                iVar8 = (uint)(pbVar13 + 4)[(iVar11 - iVar4) + -4] * iVar6 + (uint)*pbVar13 * iVar5;
                *pbVar13 = (byte)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
                iVar8 = (uint)pbVar9[-1] * iVar6 + (uint)pbVar13[1] * iVar5;
                pbVar13[1] = (byte)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
                iVar8 = (uint)*pbVar9 * iVar6 + (uint)pbVar13[2] * iVar5;
                pbVar13[2] = (byte)((int)(iVar8 + (iVar8 >> 0x1f & 0x3fffU)) >> 0xe);
                iVar7 = iVar7 + 1;
                pbVar13 = pbVar13 + 4;
                pbVar9 = pbVar9 + 4;
              } while (iVar7 < param_7);
            }
          }
          else {
            param_4 = 0;
            if (0 < param_7) {
              pbVar9 = (byte *)(iVar4 + 1);
              pbVar13 = (byte *)(iVar11 + 3);
              do {
                iVar7 = (uint)pbVar13[-3] * iVar6 + (uint)pbVar9[-1] * iVar5;
                iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
                if (0xfe < iVar7) {
                  iVar7 = 0xff;
                }
                pbVar9[-1] = (byte)iVar7;
                iVar7 = (uint)pbVar9[iVar11 - iVar4] * iVar6 + (uint)*pbVar9 * iVar5;
                iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
                if (0xfe < iVar7) {
                  iVar7 = 0xff;
                }
                *pbVar9 = (byte)iVar7;
                iVar7 = (uint)pbVar13[-1] * iVar6 + (uint)pbVar9[1] * iVar5;
                iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
                if (0xfe < iVar7) {
                  iVar7 = 0xff;
                }
                pbVar9[1] = (byte)iVar7;
                iVar7 = (uint)*pbVar13 * iVar6 + (uint)pbVar9[2] * iVar5;
                iVar7 = (int)(iVar7 + (iVar7 >> 0x1f & 0x3fffU)) >> 0xe;
                if (0xfe < iVar7) {
                  iVar7 = 0xff;
                }
                pbVar9[2] = (byte)iVar7;
                param_4 = param_4 + 1;
                pbVar13 = pbVar13 + 4;
                pbVar9 = pbVar9 + 4;
              } while (param_4 < param_7);
            }
          }
        }
        else {
          param_4 = 0;
          if (0 < param_7) {
            pfVar12 = (float *)(param_1 + param_5 + 0xc);
            pfVar10 = (float *)(local_c + local_10 + 4);
            do {
              fVar3 = fVar1 * pfVar10[-1] + fVar2 * pfVar12[-3];
              if (_DAT_00595420 <= fVar3) {
                fVar3 = _DAT_00595420;
              }
              pfVar10[-1] = fVar3;
              fVar3 = fVar1 * *pfVar10 +
                      fVar2 * *(float *)(((param_1 + param_5) - (local_c + local_10)) + (int)pfVar10
                                        );
              if (_DAT_00595420 <= fVar3) {
                fVar3 = _DAT_00595420;
              }
              *pfVar10 = fVar3;
              fVar3 = fVar1 * pfVar10[1] + fVar2 * pfVar12[-1];
              if (_DAT_00595420 <= fVar3) {
                fVar3 = _DAT_00595420;
              }
              pfVar10[1] = fVar3;
              fVar3 = fVar1 * pfVar10[2] + fVar2 * *pfVar12;
              if (_DAT_00595420 <= fVar3) {
                fVar3 = _DAT_00595420;
              }
              pfVar12 = pfVar12 + 4;
              pfVar10[2] = fVar3;
              param_4 = param_4 + 1;
              pfVar10 = pfVar10 + 4;
            } while (param_4 < param_7);
          }
        }
        param_5 = param_5 + param_9;
        local_c = local_c + param_3;
        param_11 = param_11 + 1;
      } while (param_11 < local_8);
      return local_4;
    }
  }
  return iVar4;
}


