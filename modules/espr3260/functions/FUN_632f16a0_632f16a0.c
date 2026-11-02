/* Module: espr3260.dll
   Function: FUN_632f16a0
   Address: 632f16a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f16a0(void *this,float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  float10 fVar13;
  int local_30;
  float *local_2c;
  float local_24;
  float local_20;
  int local_18;
  float local_c;
  float local_8;
  
  iVar10 = param_4 / 2;
  pfVar11 = (float *)(*(int *)this - (iVar10 * 4 + 4));
  pfVar6 = pfVar11 + -iVar10;
  *(float **)this = pfVar6;
  if (DAT_632ffa84 == 0) {
    DAT_632ffa84 = 1;
    FUN_632f1960();
  }
  if (0 < iVar10) {
    pfVar2 = param_1;
    pfVar5 = param_1 + param_4;
    iVar12 = iVar10;
    do {
      pfVar3 = pfVar2 + 1;
      iVar12 = iVar12 + -1;
      *(float *)((int)pfVar11 + (-4 - (int)param_1) + (int)pfVar3) = *pfVar5 + *pfVar2;
      *(float *)((int)pfVar6 + (-4 - (int)param_1) + (int)pfVar3) = *pfVar2 - *pfVar5;
      pfVar2 = pfVar3;
      pfVar5 = pfVar5 + -1;
    } while (iVar12 != 0);
  }
  pfVar11[iVar10] = param_1[iVar10] + param_1[iVar10];
  if (2 < iVar10) {
    iVar12 = iVar10 + -2;
    iVar4 = 8;
    do {
      iVar12 = iVar12 + -1;
      *(float *)((int)pfVar6 + iVar4) =
           *(float *)((int)pfVar6 + iVar4 + -8) + *(float *)((int)pfVar6 + iVar4);
      iVar4 = iVar4 + 4;
    } while (iVar12 != 0);
  }
  local_18 = 0;
  local_30 = 0;
  local_8 = DAT_632ff8f0;
  fVar13 = FUN_632f1900(DAT_632ff8f0,pfVar11,iVar10);
  iVar12 = param_4 + -1;
  if (0 < iVar12) {
    local_2c = param_2;
    puVar7 = &DAT_632ff8f0;
    iVar4 = iVar10;
    pfVar2 = pfVar11;
    do {
      if (0x632ffa7f < (int)puVar7) break;
      fVar1 = (float)puVar7[1];
      puVar9 = puVar7 + 1;
      local_24 = (float)fVar13;
      local_20 = local_8;
      fVar13 = FUN_632f1900(fVar1,pfVar2,iVar4);
      local_c = (float)fVar13;
      local_8 = fVar1;
      if ((float)_DAT_632fa1e0 < local_24 * local_c) {
        fVar13 = (float10)local_c;
      }
      else {
        iVar8 = 4;
        do {
          fVar1 = (local_20 + local_8) * _DAT_632fa1e8;
          fVar13 = FUN_632f1900(fVar1,pfVar2,iVar4);
          if ((float10)_DAT_632fa1e0 < fVar13 * (float10)local_c) {
            local_c = (float)fVar13;
            local_8 = fVar1;
          }
          else {
            local_24 = (float)fVar13;
            local_20 = fVar1;
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        local_18 = local_18 + 1;
        local_8 = local_8 - ((local_20 - local_8) * local_c) / (local_24 - local_c);
        *local_2c = local_8;
        local_30 = 1 - local_30;
        iVar4 = iVar10;
        pfVar2 = pfVar11;
        if (local_30 != 0) {
          iVar4 = iVar10 + -1;
          pfVar2 = pfVar6;
        }
        fVar13 = FUN_632f1900(local_8,pfVar2,iVar4);
        puVar9 = puVar7;
        local_2c = local_2c + 1;
      }
      puVar7 = puVar9;
    } while (local_18 < iVar12);
  }
  param_2[param_4 + -1] = param_1[param_4];
  if ((local_18 < iVar12) && (0 < param_4)) {
    iVar12 = param_3 - (int)param_2;
    do {
      *param_2 = *(float *)(iVar12 + (int)param_2);
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *(int *)this = *(int *)this + iVar10 * 8 + 4;
  return;
}


