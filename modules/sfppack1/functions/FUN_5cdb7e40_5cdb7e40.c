/* Module: sfppack1.dll
   Function: FUN_5cdb7e40
   Address: 5cdb7e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdb7e40(void *this,double *param_1,double *param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6,uint param_7)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  uint local_34;
  double *local_30;
  uint local_2c;
  double local_28;
  
  iVar6 = param_4 * param_6;
  local_28 = _DAT_5ce12bf0;
  uVar5 = 0;
  local_2c = 0;
  pdVar3 = param_2;
  dVar2 = _DAT_5ce12bf0;
  if (param_7 != 0) {
    do {
      uVar5 = uVar5 + param_6;
      dVar2 = *pdVar3 * *pdVar3 + dVar2;
      dVar1 = pdVar3[1];
      local_28 = dVar1 * dVar1 + local_28;
      pdVar3 = pdVar3 + 1 + iVar6 + -1;
    } while (uVar5 < param_7);
  }
  local_34 = 0;
  if (param_7 != 0) {
    local_30 = param_1;
    dVar1 = _DAT_5ce12bf0;
    do {
      fVar7 = (float10)_DAT_5ce12bf0;
      fVar8 = (float10)_DAT_5ce12bf0;
      uVar5 = 0;
      pdVar3 = local_30;
      pdVar4 = param_2;
      do {
        uVar5 = uVar5 + param_6;
        fVar7 = ((float10)*pdVar4 + (float10)*pdVar3) * ((float10)*pdVar4 + (float10)*pdVar3) +
                fVar7;
        fVar9 = (float10)pdVar4[1] + (float10)pdVar3[1];
        pdVar3 = pdVar3 + 1 + iVar6 + -1;
        pdVar4 = pdVar4 + 1 + iVar6 + -1;
        fVar8 = fVar9 * fVar9 + fVar8;
      } while (uVar5 < param_7);
      if (((float10)((double)*(float *)((int)this + 0xd8) * dVar2) < fVar7) &&
         (*(float *)((int)this + 0xd8) * (float)local_28 < (float)fVar8)) {
        return local_34;
      }
      if (dVar1 < (double)(fVar8 + fVar7)) {
        local_2c = local_34;
        dVar1 = (double)(fVar8 + fVar7);
      }
      local_34 = local_34 + param_6;
      local_30 = local_30 + iVar6;
    } while (local_34 < param_7);
  }
  return local_2c;
}


