/* Module: 14_43260.dll
   Function: FUN_10002f00
   Address: 10002f00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10002f00(void *this,float *param_1,float *param_2,int param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  
  iVar2 = *(int *)((int)this + 0x996);
  fVar4 = _DAT_10010c20;
  for (pfVar5 = param_1; pfVar5 < param_1 + iVar2; pfVar5 = pfVar5 + 1) {
    fVar4 = *pfVar5 * *pfVar5 + fVar4;
  }
  pfVar5 = param_2 + param_3 * iVar2;
  for (; param_2 < pfVar5; param_2 = param_2 + iVar2) {
    pfVar8 = param_2 + iVar2;
    fVar3 = _DAT_10010c20;
    if (param_2 < pfVar8) {
      pfVar6 = param_2;
      do {
        pfVar7 = (float *)((int)pfVar6 + ((int)param_1 - (int)param_2));
        fVar1 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar3 = *pfVar7 * fVar1 + fVar3;
      } while (pfVar6 < pfVar8);
    }
    if (param_2 < pfVar8) {
      pfVar6 = param_2;
      do {
        pfVar7 = pfVar6 + 1;
        *pfVar6 = *pfVar6 - *(float *)((int)pfVar6 + ((int)param_1 - (int)param_2)) *
                            (fVar3 / fVar4);
        pfVar6 = pfVar7;
      } while (pfVar7 < pfVar8);
    }
    iVar2 = *(int *)((int)this + 0x996);
  }
  return;
}


