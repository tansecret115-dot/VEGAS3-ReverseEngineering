/* Module: sfppack1.dll
   Function: FUN_5cdb7280
   Address: 5cdb7280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdb7280(void *this,int param_1,float *param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,float param_6,uint param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  uint local_4;
  
  fVar4 = param_6;
  uVar6 = 0;
  iVar7 = param_4 * (int)param_6;
  local_4 = 0;
  param_6 = 0.0;
  pfVar5 = param_2;
  fVar1 = _DAT_5ce13268;
  if (param_7 != 0) {
    do {
      uVar6 = uVar6 + (int)fVar4;
      fVar1 = *pfVar5 * *pfVar5 + fVar1;
      pfVar5 = pfVar5 + iVar7;
    } while (uVar6 < param_7);
  }
  param_4 = 0;
  if (param_7 != 0) {
    do {
      uVar6 = 0;
      pfVar5 = param_2;
      fVar2 = _DAT_5ce13268;
      do {
        fVar3 = *(float *)((param_1 - (int)param_2) + (int)pfVar5) + *pfVar5;
        uVar6 = uVar6 + (int)fVar4;
        pfVar5 = pfVar5 + iVar7;
        fVar2 = fVar3 * fVar3 + fVar2;
      } while (uVar6 < param_7);
      if (fVar1 * *(float *)((int)this + 0xd8) < fVar2) {
        return param_4;
      }
      if (param_6 < fVar2) {
        local_4 = param_4;
        param_6 = fVar2;
      }
      param_1 = param_1 + iVar7 * 4;
      param_4 = param_4 + (int)fVar4;
    } while (param_4 < param_7);
  }
  return local_4;
}


