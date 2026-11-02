/* Module: espr3260.dll
   Function: FUN_632f6e40
   Address: 632f6e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f6e40(void *this,float *param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  
  pfVar2 = param_1;
  pfVar9 = (float *)(param_3 / 2);
  puVar3 = (undefined4 *)(*(int *)this - ((int)pfVar9 * 4 + 4));
  pfVar10 = (float *)(puVar3 + -(int)pfVar9);
  *(float **)this = pfVar10;
  FUN_632f6fa0(param_1,puVar3,(int)pfVar9);
  iVar4 = (int)pfVar9 + -1;
  FUN_632f6fa0(param_1 + 1,pfVar10,iVar4);
  if (1 < iVar4) {
    iVar7 = (int)pfVar9 + -2;
    iVar4 = iVar4 * 4;
    do {
      iVar7 = iVar7 + -1;
      *(float *)((int)pfVar10 + iVar4) =
           *(float *)((int)pfVar10 + iVar4) - *(float *)((int)pfVar10 + iVar4 + -8);
      iVar4 = iVar4 + -4;
    } while (iVar7 != 0);
  }
  pfVar5 = pfVar10;
  param_1 = pfVar9;
  if (0 < (int)pfVar9) {
    do {
      fVar1 = _DAT_632fa418;
      pfVar8 = pfVar5 + 1;
      *(float *)((int)puVar3 + (-4 - (int)pfVar10) + (int)pfVar8) =
           (pfVar2[param_3 + -1] - _DAT_632fa414) *
           *(float *)((int)puVar3 + (-4 - (int)pfVar10) + (int)pfVar8);
      param_1 = (float *)((int)param_1 + -1);
      *pfVar5 = (fVar1 - pfVar2[param_3 + -1]) * *pfVar5;
      pfVar5 = pfVar8;
    } while (param_1 != (float *)0x0);
  }
  *param_2 = 0x3f800000;
  if (1 < (int)pfVar9) {
    param_1 = (float *)((int)pfVar9 + -1);
    pfVar5 = (float *)(puVar3 + 1);
    pfVar8 = (float *)(param_2 + param_3 + -1);
    do {
      pfVar6 = pfVar5 + 1;
      *(float *)((int)param_2 + (-4 - (int)puVar3) + (int)pfVar6) =
           (*pfVar5 + *(float *)(((int)pfVar10 - (int)puVar3) + (int)pfVar5)) * _DAT_632fa41c;
      param_1 = (float *)((int)param_1 + -1);
      *pfVar8 = (*pfVar5 - *(float *)(((int)pfVar10 - (int)puVar3) + -4 + (int)pfVar6)) *
                _DAT_632fa41c;
      pfVar5 = pfVar6;
      pfVar8 = pfVar8 + -1;
    } while (param_1 != (float *)0x0);
  }
  param_2[(int)pfVar9] =
       (pfVar2[param_3 + -1] - _DAT_632fa414) * (float)puVar3[(int)pfVar9] * _DAT_632fa41c;
  param_2[param_3] = pfVar2[param_3 + -1];
  *(int *)this = *(int *)this + (int)pfVar9 * 8 + 4;
  return;
}


