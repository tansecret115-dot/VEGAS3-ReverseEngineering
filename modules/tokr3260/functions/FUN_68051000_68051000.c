/* Module: tokr3260.dll
   Function: FUN_68051000
   Address: 68051000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_68051000(float *param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = 0x2f;
  pfVar6 = param_5 + param_4;
  pfVar5 = param_5;
  do {
    fVar3 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    *pfVar5 = fVar3;
    pfVar5 = pfVar5 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (0 < param_4) {
    pfVar6 = param_5 + 0x2f;
    iVar9 = param_4;
    do {
      fVar3 = *param_1;
      param_1 = param_1 + 1;
      *pfVar6 = fVar3;
      pfVar6 = pfVar6 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (0 < param_4 / 2) {
    iVar9 = param_2 - (int)param_3;
    pfVar6 = param_5;
    param_5 = (float *)(param_4 / 2);
    do {
      iVar8 = 0x18;
      pfVar5 = param_6;
      pfVar7 = pfVar6;
      fVar3 = _DAT_6805b048;
      fVar4 = _DAT_6805b048;
      do {
        pfVar1 = pfVar5 + 1;
        pfVar2 = pfVar7 + 1;
        fVar3 = *pfVar7 * *pfVar5 + fVar3;
        pfVar5 = pfVar5 + 2;
        pfVar7 = pfVar7 + 2;
        iVar8 = iVar8 + -1;
        fVar4 = *pfVar1 * *pfVar2 + fVar4;
      } while (iVar8 != 0);
      pfVar6 = pfVar6 + 2;
      *(float *)(iVar9 + (int)param_3) = fVar4 + fVar3;
      *param_3 = fVar4 - fVar3;
      param_3 = param_3 + 1;
      param_5 = (float *)((int)param_5 + -1);
    } while (param_5 != (float *)0x0);
  }
  return;
}


