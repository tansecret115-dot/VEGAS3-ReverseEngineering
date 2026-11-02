/* Module: vidpcore.dll
   Function: FUN_5de7ae70
   Address: 5de7ae70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5de7ae70(int param_1,int param_2,int *param_3,int *param_4,uint *param_5)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  int local_4;
  
  local_4 = param_3[3] - param_3[1];
  fVar7 = (float)*(double *)(param_4 + 4);
  iVar11 = param_3[2] - *param_3;
  if (0 < local_4) {
    pfVar13 = (float *)(*param_3 * 0x10 + param_1 + param_3[1] * param_2 + 0xc);
    do {
      if (*param_4 == 1) {
        if (param_4[1] == 0) {
          iVar12 = iVar11;
          pfVar10 = pfVar13;
          if (0 < iVar11) {
            do {
              fVar15 = (float10)FUN_5de7a920(param_5);
              fVar14 = (float10)_DAT_5df1eec0;
              dVar2 = *(double *)(param_4 + 4);
              fVar16 = (float10)FUN_5de7a920(param_5);
              fVar1 = (float)((fVar16 - (float10)_DAT_5df1eec0) * (float10)*(double *)(param_4 + 4))
              ;
              fVar16 = (float10)FUN_5de7a920(param_5);
              fVar16 = (fVar16 - (float10)_DAT_5df1eec0) * (float10)*(double *)(param_4 + 4);
              fVar8 = (float)((fVar15 - fVar14) * (float10)dVar2) + pfVar10[-3];
              fVar9 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar8) && (fVar9 = fVar8, *pfVar10 < fVar8)) {
                fVar9 = *pfVar10;
              }
              pfVar10[-3] = fVar9;
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar1 + pfVar10[-2]) &&
                 (fVar8 = fVar1 + pfVar10[-2], *pfVar10 < fVar8)) {
                fVar8 = *pfVar10;
              }
              pfVar10[-2] = fVar8;
              if ((float10)_DAT_5df205cc <= fVar16 + (float10)pfVar10[-1]) {
                fVar16 = fVar16 + (float10)pfVar10[-1];
                if ((float10)*pfVar10 < fVar16) {
                  fVar16 = (float10)*pfVar10;
                }
              }
              else {
                fVar16 = (float10)_DAT_5df205cc;
              }
              pfVar10[-1] = (float)fVar16;
              iVar12 = iVar12 + -1;
              pfVar10 = pfVar10 + 4;
            } while (iVar12 != 0);
          }
        }
        else {
          iVar12 = iVar11;
          pfVar10 = pfVar13;
          if (0 < iVar11) {
            do {
              fVar14 = (float10)FUN_5de7a920(param_5);
              fVar15 = (fVar14 - (float10)_DAT_5df1eec0) * (float10)*(double *)(param_4 + 4);
              fVar14 = fVar15 + (float10)pfVar10[-3];
              if ((float10)_DAT_5df205cc <= fVar14) {
                if ((float10)*pfVar10 < fVar14) {
                  fVar14 = (float10)*pfVar10;
                }
              }
              else {
                fVar14 = (float10)_DAT_5df205cc;
              }
              pfVar10[-3] = (float)fVar14;
              if ((float10)_DAT_5df205cc <= fVar15 + (float10)pfVar10[-2]) {
                fVar14 = fVar15 + (float10)pfVar10[-2];
                if ((float10)*pfVar10 < fVar14) {
                  fVar14 = (float10)*pfVar10;
                }
              }
              else {
                fVar14 = (float10)_DAT_5df205cc;
              }
              pfVar10[-2] = (float)fVar14;
              if ((float10)_DAT_5df205cc <= fVar15 + (float10)pfVar10[-1]) {
                fVar15 = fVar15 + (float10)pfVar10[-1];
                if ((float10)*pfVar10 < fVar15) {
                  fVar15 = (float10)*pfVar10;
                }
              }
              else {
                fVar15 = (float10)_DAT_5df205cc;
              }
              pfVar10[-1] = (float)fVar15;
              iVar12 = iVar12 + -1;
              pfVar10 = pfVar10 + 4;
            } while (iVar12 != 0);
          }
        }
      }
      else if (*param_4 == 0) {
        if (param_4[1] == 1) {
          iVar12 = iVar11;
          pfVar10 = pfVar13;
          if (0 < iVar11) {
            do {
              uVar3 = *param_5;
              uVar4 = param_5[1];
              uVar5 = param_5[uVar4 + 0x41];
              uVar6 = param_5[uVar3 + 0x41];
              param_5[uVar3 + 0x41] = uVar6 ^ uVar5;
              *param_5 = (uint)*(byte *)((int)param_5 + uVar3 + 8);
              param_5[1] = (uint)*(byte *)((int)param_5 + uVar4 + 8);
              fVar1 = (float)(int)(((uVar6 ^ uVar5) & 0xffff) - 0x7fff) * fVar7 * _DAT_5df248b8;
              fVar8 = fVar1 + pfVar10[-3];
              fVar9 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar8) && (fVar9 = fVar8, *pfVar10 < fVar8)) {
                fVar9 = *pfVar10;
              }
              pfVar10[-3] = fVar9;
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar1 + pfVar10[-2]) &&
                 (fVar8 = fVar1 + pfVar10[-2], *pfVar10 < fVar1 + pfVar10[-2])) {
                fVar8 = *pfVar10;
              }
              pfVar10[-2] = fVar8;
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar1 + pfVar10[-1]) &&
                 (fVar8 = fVar1 + pfVar10[-1], *pfVar10 < fVar1 + pfVar10[-1])) {
                fVar8 = *pfVar10;
              }
              pfVar10[-1] = fVar8;
              iVar12 = iVar12 + -1;
              pfVar10 = pfVar10 + 4;
            } while (iVar12 != 0);
          }
        }
        else {
          pfVar10 = pfVar13;
          iVar12 = iVar11;
          if (0 < iVar11) {
            do {
              uVar3 = *param_5;
              uVar4 = param_5[1];
              uVar5 = param_5[uVar4 + 0x41];
              uVar6 = param_5[uVar3 + 0x41];
              param_5[uVar3 + 0x41] = uVar6 ^ uVar5;
              *param_5 = (uint)*(byte *)((int)param_5 + uVar3 + 8);
              param_5[1] = (uint)*(byte *)((int)param_5 + uVar4 + 8);
              fVar1 = (float)(int)(((uVar6 ^ uVar5) & 0xffff) - 0x7fff) * fVar7 * _DAT_5df248b8 +
                      pfVar10[-3];
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar1) && (fVar8 = fVar1, *pfVar10 < fVar1)) {
                fVar8 = *pfVar10;
              }
              pfVar10[-3] = fVar8;
              uVar3 = *param_5;
              uVar4 = param_5[1];
              uVar5 = param_5[uVar4 + 0x41];
              uVar6 = param_5[uVar3 + 0x41];
              param_5[uVar3 + 0x41] = uVar6 ^ uVar5;
              *param_5 = (uint)*(byte *)((int)param_5 + uVar3 + 8);
              param_5[1] = (uint)*(byte *)((int)param_5 + uVar4 + 8);
              fVar1 = (float)(int)(((uVar6 ^ uVar5) & 0xffff) - 0x7fff) * fVar7 * _DAT_5df248b8;
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar1 + pfVar10[-2]) &&
                 (fVar8 = fVar1 + pfVar10[-2], *pfVar10 < fVar8)) {
                fVar8 = *pfVar10;
              }
              pfVar10[-2] = fVar8;
              uVar3 = *param_5;
              uVar4 = param_5[1];
              uVar5 = param_5[uVar4 + 0x41];
              uVar6 = param_5[uVar3 + 0x41];
              param_5[uVar3 + 0x41] = uVar6 ^ uVar5;
              *param_5 = (uint)*(byte *)(uVar3 + 8 + (int)param_5);
              param_5[1] = (uint)*(byte *)((int)param_5 + uVar4 + 8);
              fVar1 = (float)(int)(((uVar6 ^ uVar5) & 0xffff) - 0x7fff) * fVar7 * _DAT_5df248b8;
              fVar8 = _DAT_5df205cc;
              if ((_DAT_5df205cc <= fVar1 + pfVar10[-1]) &&
                 (fVar8 = fVar1 + pfVar10[-1], *pfVar10 < fVar8)) {
                fVar8 = *pfVar10;
              }
              pfVar10[-1] = fVar8;
              iVar12 = iVar12 + -1;
              pfVar10 = pfVar10 + 4;
            } while (iVar12 != 0);
          }
        }
      }
      pfVar13 = (float *)((int)pfVar13 + param_2);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    return 0;
  }
  return 0;
}


