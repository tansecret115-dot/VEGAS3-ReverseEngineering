/* Module: sfppack1.dll
   Function: FUN_5cdc1d90
   Address: 5cdc1d90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
FUN_5cdc1d90(void *this,int param_1,double *param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,uint param_6,uint param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double *pdVar5;
  uint uVar6;
  int iVar7;
  double local_8;
  
  uVar4 = param_6;
  uVar6 = 0;
  iVar7 = param_4 * param_6;
  param_6 = 0;
  local_8 = 0.0;
  pdVar5 = param_2;
  dVar1 = _DAT_5ce12bf0;
  if (param_7 != 0) {
    do {
      uVar6 = uVar6 + uVar4;
      dVar1 = *pdVar5 * *pdVar5 + dVar1;
      pdVar5 = pdVar5 + iVar7;
    } while (uVar6 < param_7);
  }
  param_4 = 0;
  if (param_7 != 0) {
    do {
      uVar6 = 0;
      pdVar5 = param_2;
      dVar2 = _DAT_5ce12bf0;
      do {
        dVar3 = *(double *)((param_1 - (int)param_2) + (int)pdVar5) + *pdVar5;
        uVar6 = uVar6 + uVar4;
        pdVar5 = pdVar5 + iVar7;
        dVar2 = dVar3 * dVar3 + dVar2;
      } while (uVar6 < param_7);
      if (dVar1 * (double)*(float *)((int)this + 0x158) < dVar2) {
        return param_4;
      }
      if (local_8 < dVar2) {
        param_6 = param_4;
        local_8 = dVar2;
      }
      param_1 = param_1 + iVar7 * 8;
      param_4 = param_4 + uVar4;
    } while (param_4 < param_7);
  }
  return param_6;
}


