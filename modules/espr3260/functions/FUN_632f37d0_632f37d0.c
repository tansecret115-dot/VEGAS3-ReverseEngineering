/* Module: espr3260.dll
   Function: FUN_632f37d0
   Address: 632f37d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_632f37d0(void *this,float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = (int)param_4 * 4;
  pfVar7 = (float *)(*(int *)((int)this + 4) + (int)param_4 * -4);
  iVar9 = (int)param_4 + -1;
  *(float **)((int)this + 4) = pfVar7;
  pfVar5 = pfVar7;
  if (-1 < iVar9) {
    do {
      fVar3 = *param_5;
      fVar4 = *param_1;
      param_5 = param_5 + 1;
      param_1 = param_1 + 1;
      param_4 = (float *)((int)param_4 + -1);
      *pfVar5 = fVar3 * fVar4;
      pfVar5 = pfVar5 + 1;
    } while (param_4 != (float *)0x0);
  }
  if (-1 < param_3) {
    param_5 = (float *)(param_3 + 1);
    param_4 = param_2;
    pfVar5 = pfVar7;
    do {
      fVar3 = (float)_DAT_632fa2a0;
      if (-1 < iVar9) {
        iVar8 = iVar9 + 1;
        pfVar6 = pfVar7;
        do {
          pfVar1 = (float *)((int)pfVar6 + ((int)pfVar5 - (int)pfVar7));
          fVar4 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          iVar8 = iVar8 + -1;
          fVar3 = *pfVar1 * fVar4 + fVar3;
        } while (iVar8 != 0);
      }
      pfVar5 = pfVar5 + 1;
      iVar9 = iVar9 + -1;
      *param_4 = fVar3;
      param_4 = param_4 + 1;
      param_5 = (float *)((int)param_5 + -1);
    } while (param_5 != (float *)0x0);
  }
  if (*param_2 < (float)_DAT_632fa2a8) {
    *param_2 = 1.0;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + iVar2;
  return;
}


