/* Module: tokr3260.dll
   Function: FUN_68058c60
   Address: 68058c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_68058c60(int param_1,float *param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  
  pfVar8 = param_5;
  iVar7 = 0x2e;
  pfVar5 = param_5 + param_4;
  do {
    fVar3 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    *param_5 = fVar3;
    param_5 = param_5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  param_4 = param_4 / 2;
  if (0 < param_4) {
    param_5 = param_3;
    pfVar8 = pfVar8 + 0x2f;
    iVar7 = param_1 - (int)param_2;
    do {
      fVar3 = _DAT_6805b220;
      pfVar8[-1] = *param_2 + *(float *)(iVar7 + (int)param_2);
      pfVar5 = pfVar8 + -0x2f;
      iVar9 = 0x18;
      *pfVar8 = *(float *)(iVar7 + (int)param_2) - *param_2;
      pfVar6 = param_6;
      fVar4 = fVar3;
      do {
        pfVar1 = pfVar5 + 1;
        pfVar2 = pfVar6 + 1;
        fVar3 = *pfVar5 * *pfVar6 + fVar3;
        pfVar5 = pfVar5 + 2;
        pfVar6 = pfVar6 + 2;
        iVar9 = iVar9 + -1;
        fVar4 = *pfVar1 * *pfVar2 + fVar4;
      } while (iVar9 != 0);
      param_2 = param_2 + 1;
      pfVar8 = pfVar8 + 2;
      *param_5 = fVar4;
      param_5[1] = fVar3;
      param_5 = param_5 + 2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


