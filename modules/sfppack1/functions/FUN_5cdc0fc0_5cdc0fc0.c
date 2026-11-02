/* Module: sfppack1.dll
   Function: FUN_5cdc0fc0
   Address: 5cdc0fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdc0fc0(void *this,float *param_1,float *param_2,undefined4 param_3,float param_4,
            undefined4 param_5,uint param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  uint local_c;
  
  pfVar7 = param_7;
  uVar6 = param_6;
  fVar2 = param_4;
  param_4 = _DAT_5ce13268;
  iVar11 = (int)fVar2 * param_6;
  pfVar9 = (float *)0x0;
  local_c = 0;
  pfVar8 = param_2;
  fVar2 = _DAT_5ce13268;
  if (param_7 != (float *)0x0) {
    do {
      pfVar9 = (float *)((int)pfVar9 + param_6);
      fVar2 = *pfVar8 * *pfVar8 + fVar2;
      fVar1 = pfVar8[1];
      param_4 = fVar1 * fVar1 + param_4;
      pfVar8 = pfVar8 + 1 + iVar11 + -1;
    } while (pfVar9 < param_7);
  }
  param_6 = 0;
  if (param_7 != (float *)0x0) {
    param_7 = param_1;
    fVar1 = _DAT_5ce13268;
    while( true ) {
      pfVar10 = (float *)0x0;
      pfVar8 = param_7;
      pfVar9 = param_2;
      fVar3 = _DAT_5ce13268;
      fVar4 = _DAT_5ce13268;
      do {
        pfVar10 = (float *)((int)pfVar10 + uVar6);
        fVar3 = (*pfVar9 + *pfVar8) * (*pfVar9 + *pfVar8) + fVar3;
        fVar5 = pfVar9[1] + pfVar8[1];
        pfVar8 = pfVar8 + 1 + iVar11 + -1;
        pfVar9 = pfVar9 + 1 + iVar11 + -1;
        fVar4 = fVar5 * fVar5 + fVar4;
      } while (pfVar10 < pfVar7);
      if ((fVar2 * *(float *)((int)this + 0x158) < fVar3) &&
         (param_4 * *(float *)((int)this + 0x158) < fVar4)) break;
      if (fVar1 < fVar4 + fVar3) {
        local_c = param_6;
        fVar1 = fVar4 + fVar3;
      }
      param_6 = param_6 + uVar6;
      param_7 = param_7 + iVar11;
      if (pfVar7 <= param_6) {
        return local_c;
      }
    }
    return param_6;
  }
  return 0;
}


