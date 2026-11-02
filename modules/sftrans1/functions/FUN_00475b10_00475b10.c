/* Module: sftrans1.dll
   Function: FUN_00475b10
   Address: 00475b10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00475b10(int param_1,double *param_2,uint *param_3,int param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  float *pfVar12;
  float10 fVar13;
  float10 fVar14;
  int local_c;
  
  iVar9 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x34);
  local_c = *(int *)(param_1 + 0x38);
  if ((param_1 != 0) && (param_2 != (double *)0x0)) {
    if (_DAT_00555910 < *param_2) {
      iVar8 = ftol();
      dVar1 = *param_2;
      param_1 = iVar9;
      if (0 < local_c) {
        do {
          if (param_4 == 4) {
            if (0 < iVar3) {
              pbVar11 = (byte *)(param_1 + 2);
              param_2 = (double *)iVar3;
              do {
                uVar4 = *param_3;
                uVar5 = param_3[1];
                uVar6 = param_3[uVar5 + 0x41];
                uVar7 = param_3[uVar4 + 0x41];
                param_3[uVar4 + 0x41] = uVar7 ^ uVar6;
                *param_3 = (uint)*(byte *)((int)param_3 + uVar4 + 8);
                iVar9 = (((uVar7 ^ uVar6) & 0xff) - 0x7f) * iVar8;
                param_3[1] = (uint)*(byte *)((int)param_3 + uVar5 + 8);
                iVar10 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
                iVar9 = (uint)pbVar11[-2] + iVar10;
                if (iVar9 < 0) {
                  iVar9 = 0;
                }
                else if (0xff < iVar9) {
                  iVar9 = 0xff;
                }
                pbVar11[-2] = (byte)iVar9;
                if ((int)((uint)pbVar11[-1] + iVar10) < 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = (uint)pbVar11[-1] + iVar10;
                  if (0xff < iVar9) {
                    iVar9 = 0xff;
                  }
                }
                pbVar11[-1] = (byte)iVar9;
                if ((int)((uint)*pbVar11 + iVar10) < 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = (uint)*pbVar11 + iVar10;
                  if (0xff < iVar9) {
                    iVar9 = 0xff;
                  }
                }
                *pbVar11 = (byte)iVar9;
                if ((int)((uint)pbVar11[1] + iVar10) < 0) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = iVar10 + (uint)pbVar11[1];
                  if (0xff < iVar10) {
                    iVar10 = 0xff;
                  }
                }
                pbVar11[1] = (byte)iVar10;
                pbVar11 = pbVar11 + 4;
                param_2 = (double *)((int)param_2 + -1);
              } while (param_2 != (double *)0x0);
            }
          }
          else if (0 < iVar3) {
            pfVar12 = (float *)(param_1 + 8);
            iVar9 = iVar3;
            do {
              fVar13 = (float10)FUN_00474340(param_3);
              fVar14 = fVar13 * (float10)(float)dVar1 * (float10)_DAT_0055c00c;
              fVar13 = fVar14 + (float10)pfVar12[-2];
              if ((float10)_DAT_00557840 <= fVar13) {
                if ((float10)_DAT_0055c008 < fVar13) {
                  fVar13 = (float10)_DAT_0055c008;
                }
              }
              else {
                fVar13 = (float10)_DAT_00557840;
              }
              pfVar12[-2] = (float)fVar13;
              if ((float10)_DAT_00557840 <= fVar14 + (float10)pfVar12[-1]) {
                fVar13 = fVar14 + (float10)pfVar12[-1];
                if ((float10)_DAT_0055c008 < fVar13) {
                  fVar13 = (float10)_DAT_0055c008;
                }
              }
              else {
                fVar13 = (float10)_DAT_00557840;
              }
              pfVar12[-1] = (float)fVar13;
              if ((float10)_DAT_00557840 <= fVar14 + (float10)*pfVar12) {
                fVar13 = fVar14 + (float10)*pfVar12;
                if ((float10)_DAT_0055c008 < fVar13) {
                  fVar13 = (float10)_DAT_0055c008;
                }
              }
              else {
                fVar13 = (float10)_DAT_00557840;
              }
              *pfVar12 = (float)fVar13;
              if ((float10)_DAT_00557840 <= fVar14 + (float10)pfVar12[1]) {
                fVar14 = fVar14 + (float10)pfVar12[1];
                if ((float10)_DAT_0055c008 < fVar14) {
                  fVar14 = (float10)_DAT_0055c008;
                }
              }
              else {
                fVar14 = (float10)_DAT_00557840;
              }
              pfVar12[1] = (float)fVar14;
              pfVar12 = pfVar12 + 4;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
          local_c = local_c + -1;
          param_1 = param_1 + iVar2;
        } while (local_c != 0);
      }
    }
    return 0;
  }
  return 0x80004003;
}


