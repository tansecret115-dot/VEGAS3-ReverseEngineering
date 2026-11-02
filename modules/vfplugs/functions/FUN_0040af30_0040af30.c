/* Module: vfplugs.dll
   Function: FUN_0040af30
   Address: 0040af30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0040af30(int param_1,int param_2,int param_3,int param_4,double *param_5,int param_6)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  byte *pbVar11;
  float *pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  int local_40;
  int local_34;
  
  if (param_5 == (double *)0x0) {
    return 0x80004003;
  }
  iVar3 = *(int *)((int)param_5 + 0x1c);
  if (0 < param_4) {
    local_34 = param_4;
    pfVar12 = (float *)(param_1 + 8);
    do {
      if (param_6 == 4) {
        if (0 < param_3) {
          pbVar11 = (byte *)((int)pfVar12 + -6);
          local_40 = param_3;
          do {
            bVar2 = pbVar11[-2];
            if (iVar3 == 0) {
              iVar7 = ftol();
              iVar5 = ftol();
              iVar8 = ftol();
            }
            else {
              iVar5 = ftol();
              iVar6 = ftol();
              iVar7 = ftol();
              iVar8 = (iVar6 - iVar7) - iVar5;
              iVar7 = ftol();
              iVar9 = ftol();
              iVar5 = (-iVar9 - iVar7) - iVar5;
              iVar9 = ftol();
              iVar7 = (iVar6 - iVar9) - iVar7;
            }
            iVar7 = iVar7 + (uint)bVar2;
            if (iVar7 < 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = 0xff;
              if (iVar7 < 0x100) {
                iVar6 = iVar7;
              }
            }
            pbVar11[-2] = (byte)iVar6;
            if ((int)((uint)pbVar11[-1] + iVar5) < 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = 0xff;
              if ((int)(iVar5 + (uint)pbVar11[-1]) < 0x100) {
                iVar7 = iVar5 + (uint)pbVar11[-1];
              }
            }
            pbVar11[-1] = (byte)iVar7;
            if ((int)((uint)*pbVar11 + iVar8) < 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = iVar8 + (uint)*pbVar11;
              if (0xff < iVar8) {
                iVar8 = 0xff;
              }
            }
            *pbVar11 = (byte)iVar8;
            pbVar11 = pbVar11 + 4;
            local_40 = local_40 + -1;
          } while (local_40 != 0);
        }
      }
      else {
        pfVar10 = pfVar12;
        iVar7 = param_3;
        if (0 < param_3) {
          do {
            fVar13 = ((float10)pfVar10[-1] + (float10)*pfVar10 + (float10)pfVar10[-2]) *
                     (float10)_DAT_00487df0;
            if (*(int *)(param_5 + 3) == 0) {
LAB_0040b181:
              fVar13 = fVar13 * fVar13;
            }
            else {
              if (*(int *)(param_5 + 3) != 1) {
                fVar13 = (float10)_DAT_00487590 - fVar13;
                goto LAB_0040b181;
              }
              fVar13 = (fVar13 - (float10)_DAT_00487e20) * (fVar13 - (float10)_DAT_00487e20) *
                       (float10)_DAT_00487e18;
            }
            fVar13 = (float10)_DAT_00487590 - fVar13;
            fVar14 = fVar13 * (float10)param_5[2];
            if (iVar3 == 0) {
              fVar16 = fVar13 * (float10)param_5[1];
              fVar17 = fVar13 * (float10)*param_5;
              fVar15 = (float10)(double)fVar14;
            }
            else {
              dVar1 = (double)(fVar13 * (float10)param_5[1] * (float10)_DAT_00487e20);
              fVar17 = ((float10)(double)(fVar14 * (float10)_DAT_00487de8) - (float10)dVar1) +
                       fVar13 * (float10)*param_5;
              fVar15 = (float10)(double)(fVar13 * (float10)*param_5) * (float10)_DAT_00487e20;
              fVar16 = ((float10)(double)(fVar13 * (float10)param_5[1]) +
                       (float10)(double)(fVar14 * (float10)_DAT_00487de8)) - fVar15;
              fVar15 = ((float10)(double)fVar14 - (float10)dVar1) - fVar15;
            }
            fVar15 = fVar15 + (float10)pfVar10[-2];
            if ((float10)_DAT_00487598 <= fVar15) {
              if ((float10)_DAT_00487590 < fVar15) {
                fVar15 = (float10)_DAT_00487590;
              }
            }
            else {
              fVar15 = (float10)_DAT_00487598;
            }
            pfVar10[-2] = (float)fVar15;
            if ((float)_DAT_00487598 <= pfVar10[-1] + (float)fVar16) {
              fVar4 = pfVar10[-1] + (float)fVar16;
              if ((float)_DAT_00487590 < fVar4) {
                fVar4 = (float)_DAT_00487590;
              }
            }
            else {
              fVar4 = (float)_DAT_00487598;
            }
            pfVar10[-1] = fVar4;
            if ((float10)_DAT_00487598 <= (float10)*pfVar10 + fVar17) {
              fVar17 = fVar17 + (float10)*pfVar10;
              if ((float10)_DAT_00487590 < fVar17) {
                fVar17 = (float10)_DAT_00487590;
              }
            }
            else {
              fVar17 = (float10)_DAT_00487598;
            }
            *pfVar10 = (float)fVar17;
            iVar7 = iVar7 + -1;
            pfVar10 = pfVar10 + 4;
          } while (iVar7 != 0);
        }
      }
      pfVar12 = (float *)((int)pfVar12 + param_2);
      local_34 = local_34 + -1;
    } while (local_34 != 0);
  }
  return 0;
}


