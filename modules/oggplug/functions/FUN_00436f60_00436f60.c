/* Module: oggplug.dll
   Function: FUN_00436f60
   Address: 00436f60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00436f60(int *param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  float *pfVar11;
  
  piVar10 = param_1;
  piVar6 = (int *)*param_1;
  fVar8 = param_2 * (float)param_1[5];
  pfVar3 = (float *)(param_1[3] + param_1[4] * 4);
  fVar9 = _DAT_0044d6f0;
  if (0 < (int)piVar6) {
    piVar1 = param_1 + 1;
    piVar2 = param_1 + 2;
    pfVar11 = pfVar3;
    param_1 = piVar6;
    do {
      pfVar4 = (float *)((*piVar2 - (int)pfVar3) + (int)pfVar11);
      fVar8 = *(float *)((int)pfVar4 + (*piVar1 - *piVar2)) * *pfVar11 + fVar8;
      param_1 = (int *)((int)param_1 + -1);
      fVar9 = *pfVar4 * *pfVar11 + fVar9;
      pfVar11 = pfVar11 + 1;
    } while (param_1 != (int *)0x0);
  }
  fVar5 = *(float *)(piVar10[2] + (int)piVar6 * 4);
  pfVar3[(int)piVar6] = fVar8;
  *pfVar3 = fVar8;
  iVar7 = piVar10[4];
  piVar10[4] = iVar7 + 1;
  if ((int)piVar6 <= iVar7 + 1) {
    piVar10[4] = 0;
  }
  return (float10)(fVar8 * fVar5 + fVar9);
}


