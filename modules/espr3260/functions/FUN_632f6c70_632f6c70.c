/* Module: espr3260.dll
   Function: FUN_632f6c70
   Address: 632f6c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_632f6c70(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float local_10c;
  float local_108 [63];
  float *local_c;
  int local_8;
  
  fVar1 = param_2[1];
  fVar2 = *param_2;
  *param_1 = 1.0;
  pfVar9 = param_1 + 1;
  local_8 = (int)param_3 + -2;
  param_1 = param_1 + 2;
  local_c = &local_10c;
  iVar11 = 0;
  *pfVar9 = -fVar1 / fVar2;
  fVar1 = (-fVar1 / fVar2) * param_2[1] + *param_2;
  if (-1 < local_8) {
    pfVar7 = param_2 + 2;
    param_3 = pfVar9;
    do {
      fVar2 = *pfVar7;
      if (-1 < iVar11) {
        iVar8 = iVar11 + 1;
        pfVar6 = pfVar9;
        pfVar10 = pfVar7;
        do {
          pfVar10 = pfVar10 + -1;
          fVar3 = *pfVar6;
          pfVar6 = pfVar6 + 1;
          iVar8 = iVar8 + -1;
          fVar2 = *pfVar10 * fVar3 + fVar2;
        } while (iVar8 != 0);
      }
      fVar3 = -fVar2 / fVar1;
      local_c = local_c + 1;
      *local_c = fVar3;
      if (-1 < iVar11 / 2) {
        iVar8 = iVar11 / 2 + 1;
        pfVar6 = param_3;
        pfVar10 = pfVar9;
        do {
          fVar4 = *pfVar6;
          fVar5 = *pfVar10;
          iVar8 = iVar8 + -1;
          *pfVar6 = *pfVar10 * fVar3 + *pfVar6;
          *pfVar10 = fVar4 * fVar3 + fVar5;
          pfVar6 = pfVar6 + -1;
          pfVar10 = pfVar10 + 1;
        } while (iVar8 != 0);
      }
      fVar1 = fVar2 * fVar3 + fVar1;
      *param_1 = fVar3;
      param_1 = param_1 + 1;
      if (fVar1 <= _DAT_632fa408) {
        fVar1 = _DAT_632fa40c;
      }
      iVar11 = iVar11 + 1;
      pfVar7 = pfVar7 + 1;
      param_3 = param_3 + 1;
    } while (iVar11 <= local_8);
  }
  return;
}


