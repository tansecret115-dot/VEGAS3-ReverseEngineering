/* Module: mp3plug.dll
   Function: FUN_5f6f4960
   Address: 5f6f4960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6f4960(double *param_1,int param_2,double param_3,double param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  *param_1 = param_3 + param_3;
  iVar8 = 1;
  if (1 < param_2) {
    dVar1 = _DAT_5f75e088 / (double)param_5;
    do {
      fVar9 = (float10)iVar8 * (float10)dVar1;
      fVar10 = (float10)fsin((fVar9 + fVar9) * (float10)param_3);
      param_1[iVar8] = (double)(fVar10 / (float10)(double)fVar9);
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
  }
  iVar8 = 1;
  dVar3 = _DAT_5f75e098;
  dVar1 = _DAT_5f75e090;
  do {
    dVar2 = (_DAT_5f75e0a0 * param_4) / (double)iVar8;
    dVar1 = dVar2 * dVar2 * dVar1;
    dVar3 = dVar3 + dVar1;
    iVar8 = iVar8 + 1;
  } while (_DAT_5f75e0b0 * dVar3 <= dVar1);
  dVar3 = _DAT_5f75e0b8 / dVar3;
  iVar8 = 1;
  dVar1 = _DAT_5f75e0c0 / (double)(param_2 + -1);
  if (1 < param_2) {
    do {
      dVar2 = (double)iVar8 * dVar1;
      iVar7 = 1;
      dVar6 = _DAT_5f75e0e0;
      dVar5 = _DAT_5f75e0d8;
      do {
        dVar4 = (SQRT(_DAT_5f75e0d0 - dVar2 * dVar2) * param_4 * _DAT_5f75e0e8) / (double)iVar7;
        dVar5 = dVar4 * dVar4 * dVar5;
        dVar6 = dVar6 + dVar5;
        iVar7 = iVar7 + 1;
      } while (_DAT_5f75e0f8 * dVar6 <= dVar5);
      param_1[iVar8] = dVar6 * param_1[iVar8] * dVar3;
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
  }
  return;
}


