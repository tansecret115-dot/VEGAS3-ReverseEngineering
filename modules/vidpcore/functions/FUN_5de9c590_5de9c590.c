/* Module: vidpcore.dll
   Function: FUN_5de9c590
   Address: 5de9c590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5de9c590(int param_1,int *param_2,int param_3,uint param_4,double param_5,double param_6,
                 int param_7,undefined4 param_8,int param_9,undefined4 param_10,int param_11,
                 undefined4 param_12,float *param_13)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float10 extraout_ST0;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 extraout_ST0_00;
  float10 fVar15;
  float10 fVar16;
  float10 extraout_ST1;
  int local_c;
  
  if (_DAT_5df1f300 <= (double)CONCAT44(param_8,param_7)) {
    dVar1 = (double)CONCAT44(param_8,param_7) + (double)CONCAT44(param_12,param_11);
    iVar2 = ftol();
    iVar3 = ftol();
    iVar4 = ftol();
    iVar5 = ftol();
    fVar16 = extraout_ST0 * extraout_ST0;
    fVar11 = (float10)dVar1 * (float10)dVar1;
    fVar12 = fVar11 - fVar16;
    if (fVar12 < (float10)_DAT_5df18830) {
      fVar12 = (float10)_DAT_5df18830;
    }
    dVar1 = _DAT_5df18830 / (double)CONCAT44(param_10,param_9);
    param_7 = *param_2;
    param_11 = param_7;
    if ((param_7 <= iVar2) && (param_11 = iVar2, param_2[2] + -1 < iVar2)) {
      param_11 = param_2[2] + -1;
    }
    if ((param_7 <= iVar3) && (param_7 = iVar3, param_2[2] + -1 < iVar3)) {
      param_7 = param_2[2] + -1;
    }
    local_c = param_2[1];
    param_9 = local_c;
    if ((local_c <= iVar4) && (param_9 = iVar4, param_2[3] + -1 < iVar4)) {
      param_9 = param_2[3] + -1;
    }
    if ((local_c <= iVar5) && (local_c = iVar5, param_2[3] + -1 < iVar5)) {
      local_c = param_2[3] + -1;
    }
    if (param_9 <= local_c) {
      pfVar7 = (float *)(param_11 * param_4 + param_1 + param_9 * param_3);
      do {
        fVar13 = ((float10)param_9 - (float10)param_6) * (float10)dVar1;
        fVar13 = fVar13 * fVar13;
        pfVar8 = pfVar7;
        for (iVar2 = param_11; iVar2 <= param_7; iVar2 = iVar2 + 1) {
          fVar14 = ((float10)iVar2 - (float10)param_5) * ((float10)iVar2 - (float10)param_5) +
                   fVar13;
          if (fVar14 < fVar11) {
            if (fVar16 <= fVar14) {
              fVar14 = (float10)_DAT_5df18830 - (fVar14 - fVar16) / fVar12;
              if ((float10)_DAT_5df18838 <= fVar14) {
                if ((float10)_DAT_5df18830 < fVar14) {
                  fVar14 = (float10)_DAT_5df18830;
                }
              }
              else {
                fVar14 = (float10)_DAT_5df18838;
              }
              if (param_4 == 4) {
                iVar3 = ftol();
                iVar3 = 0x4000 - iVar3;
                fVar11 = fVar13;
                fVar16 = fVar12;
                iVar4 = ftol();
                iVar5 = (uint)*(byte *)((int)pfVar8 + 2) * iVar3 -
                        (uint)*(byte *)((int)param_13 + 2) * iVar4;
                *(char *)((int)pfVar8 + 2) = (char)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe)
                ;
                iVar5 = (uint)*(byte *)((int)pfVar8 + 1) * iVar3 -
                        (uint)*(byte *)((int)param_13 + 1) * iVar4;
                *(char *)((int)pfVar8 + 1) = (char)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe)
                ;
                iVar5 = (uint)*(byte *)pfVar8 * iVar3 - (uint)*(byte *)param_13 * iVar4;
                *(char *)pfVar8 = (char)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe);
                iVar3 = (uint)*(byte *)((int)pfVar8 + 3) * iVar3 -
                        (uint)*(byte *)((int)param_13 + 3) * iVar4;
                *(char *)((int)pfVar8 + 3) = (char)((int)(iVar3 + (iVar3 >> 0x1f & 0x3fffU)) >> 0xe)
                ;
                fVar13 = extraout_ST0_00;
                fVar12 = extraout_ST1;
              }
              else {
                fVar15 = (float10)_DAT_5df205c8 - fVar14;
                pfVar8[2] = (float)((float10)pfVar8[2] * fVar15 + (float10)param_13[2] * fVar14);
                pfVar8[1] = (float)((float10)pfVar8[1] * fVar15 + (float10)param_13[1] * fVar14);
                *pfVar8 = (float)(fVar14 * (float10)*param_13 + fVar15 * (float10)*pfVar8);
                pfVar8[3] = (float)((float10)pfVar8[3] * fVar15 + (float10)param_13[3] * fVar14);
              }
            }
            else {
              pfVar9 = param_13;
              pfVar10 = pfVar8;
              for (uVar6 = param_4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *pfVar10 = *pfVar9;
                pfVar9 = pfVar9 + 1;
                pfVar10 = pfVar10 + 1;
              }
              for (uVar6 = param_4 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined1 *)pfVar10 = *(undefined1 *)pfVar9;
                pfVar9 = (float *)((int)pfVar9 + 1);
                pfVar10 = (float *)((int)pfVar10 + 1);
              }
            }
          }
          pfVar8 = (float *)((int)pfVar8 + param_4);
        }
        pfVar7 = (float *)((int)pfVar7 + param_3);
        param_9 = param_9 + 1;
      } while (param_9 <= local_c);
    }
  }
  return;
}


