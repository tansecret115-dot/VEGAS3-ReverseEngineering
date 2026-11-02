/* Module: espr3260.dll
   Function: FUN_632f13f0
   Address: 632f13f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f13f0(void *this,float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  int local_30;
  float *local_2c;
  int local_28;
  float local_24;
  float local_20;
  undefined4 *local_18;
  int local_14;
  float local_c;
  float local_8;
  
  iVar7 = param_4 / 2;
  pfVar6 = (float *)(*(int *)((int)this + 4) - (iVar7 * 4 + 4));
  pfVar8 = pfVar6 + -iVar7;
  *(float **)((int)this + 4) = pfVar8;
  if (0 < iVar7) {
    pfVar2 = param_1;
    pfVar5 = param_1 + param_4;
    iVar9 = iVar7;
    do {
      pfVar3 = pfVar2 + 1;
      iVar9 = iVar9 + -1;
      *(float *)((int)pfVar6 + (-4 - (int)param_1) + (int)pfVar3) = *pfVar5 + *pfVar2;
      *(float *)((int)pfVar8 + (-4 - (int)param_1) + (int)pfVar3) = *pfVar2 - *pfVar5;
      pfVar2 = pfVar3;
      pfVar5 = pfVar5 + -1;
    } while (iVar9 != 0);
  }
  pfVar6[iVar7] = param_1[iVar7] + param_1[iVar7];
  if (2 < iVar7) {
    iVar9 = iVar7 + -2;
    iVar4 = 8;
    do {
      iVar9 = iVar9 + -1;
      *(float *)((int)pfVar8 + iVar4) =
           *(float *)((int)pfVar8 + iVar4 + -8) + *(float *)((int)pfVar8 + iVar4);
      iVar4 = iVar4 + 4;
    } while (iVar9 != 0);
  }
  local_8 = DAT_632fa0d0;
  local_14 = 0;
  local_30 = 0;
  fVar10 = FUN_632f1640(DAT_632fa0d0,pfVar6,iVar7);
  iVar9 = param_4 + -1;
  if (0 < iVar9) {
    local_18 = &DAT_632fa0d0;
    local_2c = param_2;
    iVar4 = iVar7;
    pfVar2 = pfVar6;
    do {
      if (0x632fa1bf < (int)local_18) break;
      fVar1 = (float)local_18[1];
      local_24 = (float)fVar10;
      local_20 = local_8;
      fVar10 = FUN_632f1640(fVar1,pfVar2,iVar4);
      local_c = (float)fVar10;
      local_8 = fVar1;
      if ((float)_DAT_632fa1c8 < local_24 * local_c) {
        fVar10 = (float10)local_c;
        local_18 = local_18 + 1;
      }
      else {
        local_28 = 4;
        do {
          fVar1 = (local_20 + local_8) * _DAT_632fa1d0;
          fVar10 = FUN_632f1640(fVar1,pfVar2,iVar4);
          if ((float10)_DAT_632fa1c8 < fVar10 * (float10)local_c) {
            local_c = (float)fVar10;
            local_8 = fVar1;
          }
          else {
            local_24 = (float)fVar10;
            local_20 = fVar1;
          }
          local_28 = local_28 + -1;
        } while (local_28 != 0);
        local_14 = local_14 + 1;
        local_8 = local_8 - ((local_20 - local_8) * local_c) / (local_24 - local_c);
        *local_2c = local_8;
        local_30 = 1 - local_30;
        iVar4 = iVar7;
        pfVar2 = pfVar6;
        if (local_30 != 0) {
          iVar4 = iVar7 + -1;
          pfVar2 = pfVar8;
        }
        fVar10 = FUN_632f1640(local_8,pfVar2,iVar4);
        local_2c = local_2c + 1;
      }
    } while (local_14 < iVar9);
  }
  param_2[param_4 + -1] = param_1[param_4];
  if ((local_14 < iVar9) && (0 < param_4)) {
    iVar9 = param_3 - (int)param_2;
    do {
      *param_2 = *(float *)(iVar9 + (int)param_2);
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar7 * 8 + 4;
  return;
}


