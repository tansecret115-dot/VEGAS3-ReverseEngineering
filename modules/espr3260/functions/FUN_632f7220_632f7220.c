/* Module: espr3260.dll
   Function: FUN_632f7220
   Address: 632f7220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_632f7220(int param_1,float *param_2,float *param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  
  iVar4 = param_4;
  iVar8 = param_1;
  iVar2 = param_4 * 2;
  if (param_5 < 0) {
    param_5 = param_4 * 4 + -1;
    param_1 = -2;
    iVar6 = param_4 * -4;
  }
  else {
    param_1 = 2;
    iVar6 = param_4 * -4 + 4;
  }
  param_3 = param_3 + param_5;
  pfVar5 = (float *)(iVar8 + iVar6);
  if (0 < param_6) {
    param_4 = param_6;
    do {
      pfVar7 = param_3;
      iVar8 = iVar2;
      fVar3 = _DAT_632fa508;
      if (0 < iVar2) {
        do {
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          iVar8 = iVar8 + -1;
          fVar3 = *pfVar7 * fVar1 + fVar3;
          pfVar7 = pfVar7 + param_1;
        } while (iVar8 != 0);
      }
      *param_2 = fVar3;
      pfVar5 = pfVar5 + iVar4 * -2 + 1;
      param_2 = param_2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


