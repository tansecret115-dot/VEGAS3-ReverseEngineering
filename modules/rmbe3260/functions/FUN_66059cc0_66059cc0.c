/* Module: rmbe3260.dll
   Function: FUN_66059cc0
   Address: 66059cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_66059cc0(short *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  short *psVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  float *pfVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  uint uVar19;
  float *pfVar20;
  uint uVar21;
  float *pfVar22;
  undefined2 *local_3c;
  int local_c;
  
  iVar4 = param_4[2];
  uVar10 = param_4[5];
  iVar5 = param_4[1];
  iVar6 = param_4[4];
  iVar12 = *param_4;
  iVar7 = param_4[3];
  pfVar8 = (float *)param_4[6];
  if ((iVar7 == 1) && (iVar6 == 1)) {
    uVar10 = param_2;
    if (iVar12 == iVar5) {
      for (uVar19 = (iVar12 * param_2 & 0x7fffffff) >> 1; uVar19 != 0; uVar19 = uVar19 - 1) {
        *param_3 = *(undefined4 *)param_1;
        param_1 = param_1 + 2;
        param_3 = param_3 + 1;
      }
      for (uVar19 = iVar12 * param_2 * 2 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(char *)param_3 = (char)*param_1;
        param_1 = (short *)((int)param_1 + 1);
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
      return uVar10;
    }
    if ((iVar12 == 2) && (0 < (int)param_2)) {
      do {
        *(short *)param_3 = (short)((int)*param_1 + (int)param_1[1] >> 1);
        param_1 = param_1 + 2;
        param_3 = (undefined4 *)((int)param_3 + 2);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return uVar10;
    }
  }
  else {
    pfVar11 = (float *)param_4[9];
    pfVar22 = (float *)param_4[10];
    if (iVar12 == 1) {
      uVar21 = param_2;
      uVar19 = 0;
      if (0 < (int)param_2) {
        do {
          sVar3 = *param_1;
          param_1 = param_1 + 1;
          uVar21 = uVar21 - 1;
          *pfVar11 = (float)(int)sVar3;
          pfVar11 = pfVar11 + 1;
          uVar19 = param_2;
        } while (uVar21 != 0);
      }
    }
    else if (iVar5 == 2) {
      uVar19 = 0;
      uVar21 = param_2;
      if (0 < (int)param_2) {
        do {
          uVar21 = uVar21 - 1;
          *pfVar11 = (float)(int)*param_1;
          *pfVar22 = (float)(int)param_1[1];
          pfVar11 = pfVar11 + 1;
          param_1 = param_1 + 2;
          pfVar22 = pfVar22 + 1;
          uVar19 = param_2;
        } while (uVar21 != 0);
      }
    }
    else {
      uVar19 = 0;
      uVar21 = param_2;
      if (0 < (int)param_2) {
        do {
          sVar3 = *param_1;
          psVar1 = param_1 + 1;
          param_1 = param_1 + 2;
          uVar21 = uVar21 - 1;
          *pfVar11 = (float)((int)sVar3 + (int)*psVar1 >> 1);
          pfVar11 = pfVar11 + 1;
          uVar19 = param_2;
        } while (uVar21 != 0);
      }
    }
    pfVar11 = pfVar8 + iVar4;
    local_c = 0;
    if (0 < iVar5) {
      do {
        local_3c = (undefined2 *)((int)param_3 + local_c * 2);
        uVar19 = uVar10;
        if (iVar7 == 1) {
          if ((int)uVar10 < (int)param_2) {
            do {
              param_1 = (short *)0x0;
              pfVar20 = (float *)(param_4[local_c + 9] + uVar19 * 4);
              fVar9 = _DAT_66068be0;
              for (pfVar22 = pfVar8; pfVar22 < pfVar11 + -7; pfVar22 = pfVar22 + 8) {
                fVar9 = pfVar20[-6] * pfVar22[6] +
                        pfVar20[-4] * pfVar22[4] +
                        *pfVar22 * *pfVar20 + fVar9 + pfVar22[2] * pfVar20[-2];
                param_1 = (short *)(pfVar20[-7] * pfVar22[7] +
                                   pfVar20[-5] * pfVar22[5] +
                                   pfVar22[3] * pfVar20[-3] +
                                   pfVar22[1] * pfVar20[-1] + (float)param_1);
                pfVar20 = pfVar20 + -8;
              }
              for (; pfVar22 < pfVar11; pfVar22 = pfVar22 + 1) {
                fVar2 = *pfVar20;
                pfVar20 = pfVar20 + -1;
                fVar9 = *pfVar22 * fVar2 + fVar9;
              }
              iVar12 = (int)ROUND((float)param_1 + fVar9);
              if (iVar12 < 0x8000) {
                if (iVar12 < -0x8000) {
                  iVar12 = -0x8000;
                }
              }
              else {
                iVar12 = 0x7fff;
              }
              *local_3c = (short)iVar12;
              uVar19 = uVar19 + iVar6;
              local_3c = local_3c + iVar5;
            } while ((int)uVar19 < (int)param_2);
          }
        }
        else if (iVar7 == 2) {
          if ((int)uVar10 < (int)(param_2 * 2)) {
            do {
              param_1 = (short *)0x0;
              pfVar20 = (float *)(param_4[local_c + 9] + ((int)uVar19 >> 1) * 4);
              fVar9 = _DAT_66068be0;
              for (pfVar22 = pfVar8 + (uVar19 & 1); pfVar22 < pfVar11 + -0xe;
                  pfVar22 = pfVar22 + 0x10) {
                fVar9 = pfVar22[0xc] * pfVar20[-6] +
                        pfVar22[8] * pfVar20[-4] +
                        *pfVar22 * *pfVar20 + fVar9 + pfVar20[-2] * pfVar22[4];
                param_1 = (short *)(pfVar22[0xe] * pfVar20[-7] +
                                   pfVar22[10] * pfVar20[-5] +
                                   pfVar22[6] * pfVar20[-3] +
                                   pfVar22[2] * pfVar20[-1] + (float)param_1);
                pfVar20 = pfVar20 + -8;
              }
              for (; pfVar22 < pfVar11; pfVar22 = pfVar22 + 2) {
                fVar2 = *pfVar20;
                pfVar20 = pfVar20 + -1;
                fVar9 = *pfVar22 * fVar2 + fVar9;
              }
              iVar12 = (int)ROUND((float)param_1 + fVar9 + (float)param_1 + fVar9);
              if (iVar12 < 0x8000) {
                if (iVar12 < -0x8000) {
                  iVar12 = -0x8000;
                }
              }
              else {
                iVar12 = 0x7fff;
              }
              uVar19 = uVar19 + iVar6;
              *local_3c = (short)iVar12;
              local_3c = local_3c + iVar5;
            } while ((int)uVar19 < (int)(param_2 * 2));
          }
        }
        else if (iVar7 == 4) {
          if ((int)uVar10 < (int)(param_2 * 4)) {
            do {
              param_1 = (short *)0x0;
              pfVar20 = (float *)(param_4[local_c + 9] + ((int)uVar19 >> 2) * 4);
              fVar9 = _DAT_66068be0;
              for (pfVar22 = pfVar8 + (uVar19 & 3); pfVar22 < pfVar11 + -0x1c;
                  pfVar22 = pfVar22 + 0x20) {
                fVar9 = pfVar20[-6] * pfVar22[0x18] +
                        pfVar20[-4] * pfVar22[0x10] +
                        *pfVar22 * *pfVar20 + fVar9 + pfVar22[8] * pfVar20[-2];
                param_1 = (short *)(pfVar20[-7] * pfVar22[0x1c] +
                                   pfVar20[-5] * pfVar22[0x14] +
                                   pfVar22[0xc] * pfVar20[-3] +
                                   pfVar20[-1] * pfVar22[4] + (float)param_1);
                pfVar20 = pfVar20 + -8;
              }
              for (; pfVar22 < pfVar11; pfVar22 = pfVar22 + 4) {
                fVar2 = *pfVar20;
                pfVar20 = pfVar20 + -1;
                fVar9 = *pfVar22 * fVar2 + fVar9;
              }
              iVar12 = (int)ROUND(((float)param_1 + fVar9) * _DAT_66068be8);
              if (iVar12 < 0x8000) {
                if (iVar12 < -0x8000) {
                  iVar12 = -0x8000;
                }
              }
              else {
                iVar12 = 0x7fff;
              }
              uVar19 = uVar19 + iVar6;
              *local_3c = (short)iVar12;
              local_3c = local_3c + iVar5;
            } while ((int)uVar19 < (int)(param_2 * 4));
          }
        }
        else if (iVar7 == 8) {
          if ((int)uVar10 < (int)(param_2 * 8)) {
            do {
              param_1 = (short *)0x0;
              pfVar20 = (float *)(param_4[local_c + 9] + ((int)uVar19 >> 3) * 4);
              fVar9 = _DAT_66068be0;
              for (pfVar22 = pfVar8 + (uVar19 & 7); pfVar22 < pfVar11 + -0x38;
                  pfVar22 = pfVar22 + 0x40) {
                fVar9 = pfVar20[-6] * pfVar22[0x30] +
                        pfVar20[-4] * pfVar22[0x20] +
                        *pfVar22 * *pfVar20 + fVar9 + pfVar20[-2] * pfVar22[0x10];
                param_1 = (short *)(pfVar20[-7] * pfVar22[0x38] +
                                   pfVar20[-5] * pfVar22[0x28] +
                                   pfVar20[-3] * pfVar22[0x18] +
                                   pfVar22[8] * pfVar20[-1] + (float)param_1);
                pfVar20 = pfVar20 + -8;
              }
              for (; pfVar22 < pfVar11; pfVar22 = pfVar22 + 8) {
                fVar2 = *pfVar20;
                pfVar20 = pfVar20 + -1;
                fVar9 = *pfVar22 * fVar2 + fVar9;
              }
              iVar12 = (int)ROUND(((float)param_1 + fVar9) * _DAT_66068bec);
              if (iVar12 < 0x8000) {
                if (iVar12 < -0x8000) {
                  iVar12 = -0x8000;
                }
              }
              else {
                iVar12 = 0x7fff;
              }
              uVar19 = uVar19 + iVar6;
              *local_3c = (short)iVar12;
              local_3c = local_3c + iVar5;
            } while ((int)uVar19 < (int)(param_2 * 8));
          }
        }
        else if (iVar7 == 0xb) {
          if ((int)uVar10 < (int)(param_2 * 0xb)) {
            do {
              param_1 = (short *)0x0;
              pfVar20 = (float *)(param_4[local_c + 9] + ((int)uVar19 / 0xb) * 4);
              fVar9 = _DAT_66068be0;
              for (pfVar22 = pfVar8 + (int)uVar19 % 0xb; pfVar22 < pfVar11 + -0x4d;
                  pfVar22 = pfVar22 + 0x58) {
                fVar9 = pfVar20[-6] * pfVar22[0x42] +
                        pfVar20[-4] * pfVar22[0x2c] +
                        *pfVar22 * *pfVar20 + fVar9 + pfVar20[-2] * pfVar22[0x16];
                param_1 = (short *)(pfVar20[-7] * pfVar22[0x4d] +
                                   pfVar20[-5] * pfVar22[0x37] +
                                   pfVar20[-3] * pfVar22[0x21] +
                                   pfVar22[0xb] * pfVar20[-1] + (float)param_1);
                pfVar20 = pfVar20 + -8;
              }
              for (; pfVar22 < pfVar11; pfVar22 = pfVar22 + 0xb) {
                fVar2 = *pfVar20;
                pfVar20 = pfVar20 + -1;
                fVar9 = *pfVar22 * fVar2 + fVar9;
              }
              iVar12 = (int)ROUND(((float)param_1 + fVar9) * _DAT_66068bf0);
              if (iVar12 < 0x8000) {
                if (iVar12 < -0x8000) {
                  iVar12 = -0x8000;
                }
              }
              else {
                iVar12 = 0x7fff;
              }
              *local_3c = (short)iVar12;
              local_3c = local_3c + iVar5;
              uVar19 = uVar19 + iVar6;
            } while ((int)uVar19 < (int)(param_2 * 0xb));
          }
        }
        else if ((int)uVar10 < (int)(iVar7 * param_2)) {
          do {
            param_1 = (short *)0x0;
            pfVar22 = pfVar8 + (int)uVar19 % iVar7;
            pfVar20 = (float *)(param_4[local_c + 9] + ((int)uVar19 / iVar7) * 4);
            fVar9 = _DAT_66068be0;
            while (pfVar22 < pfVar11 + iVar7 * -7) {
              pfVar13 = pfVar22 + iVar7;
              pfVar14 = pfVar13 + iVar7;
              pfVar15 = pfVar14 + iVar7;
              pfVar16 = pfVar15 + iVar7;
              pfVar17 = pfVar16 + iVar7;
              pfVar18 = pfVar17 + iVar7;
              fVar9 = pfVar20[-6] * *pfVar18 +
                      pfVar20[-4] * *pfVar16 + pfVar20[-2] * *pfVar14 + *pfVar22 * *pfVar20 + fVar9;
              param_1 = (short *)(pfVar20[-7] * pfVar18[iVar7] +
                                 pfVar20[-5] * *pfVar17 +
                                 pfVar20[-3] * *pfVar15 + pfVar20[-1] * *pfVar13 + (float)param_1);
              pfVar20 = pfVar20 + -8;
              pfVar22 = pfVar18 + iVar7 + iVar7;
            }
            for (; pfVar22 < pfVar11; pfVar22 = pfVar22 + iVar7) {
              fVar2 = *pfVar20;
              pfVar20 = pfVar20 + -1;
              fVar9 = *pfVar22 * fVar2 + fVar9;
            }
            iVar12 = (int)ROUND(((float)param_1 + fVar9) * (float)iVar7);
            if (iVar12 < 0x8000) {
              if (iVar12 < -0x8000) {
                iVar12 = -0x8000;
              }
            }
            else {
              iVar12 = 0x7fff;
            }
            *local_3c = (short)iVar12;
            local_3c = local_3c + iVar5;
            uVar19 = uVar19 + iVar6;
          } while ((int)uVar19 < (int)(iVar7 * param_2));
        }
        memmove((void *)param_4[local_c + 7],(void *)(param_4[local_c + 9] + (param_2 - iVar4) * 4),
                iVar4 * 4);
        local_c = local_c + 1;
      } while (local_c < iVar5);
    }
    param_4[5] = uVar19 - iVar7 * param_2;
    param_2 = (int)uVar19 / iVar6;
  }
  return param_2;
}


