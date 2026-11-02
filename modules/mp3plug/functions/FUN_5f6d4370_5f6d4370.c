/* Module: mp3plug.dll
   Function: FUN_5f6d4370
   Address: 5f6d4370
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6d4370(double *param_1)

{
  int iVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double local_58;
  
  uVar7 = *(uint *)((int)param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 3) -
          *(float *)((int)param_1 + 0x1c) * _DAT_5f75c6d0 * (float)_DAT_5f75c798;
  iVar3 = *(int *)(param_1 + 1);
  if ((uVar7 & 1) == 0) {
    local_58 = _DAT_5f75c7b0;
    iVar6 = (int)(uVar7 + (0x7fffffff < uVar7)) >> 1;
    if (0 < iVar6) {
      iVar8 = 0;
      iVar9 = 0;
      do {
        fVar10 = (float10)fsin((float10)_DAT_5f75c7c0 * ((float10)iVar8 + (float10)_DAT_5f75c7b8) *
                               (float10)fVar4);
        fVar10 = fVar10 / (float10)(double)((float10)iVar8 + (float10)_DAT_5f75c7b8);
        iVar1 = iVar9 + iVar6 * 8;
        iVar9 = iVar9 + 8;
        iVar5 = iVar6 - iVar8;
        iVar8 = iVar8 + 1;
        fVar11 = (float10)*(double *)(iVar3 + iVar1) * fVar10;
        *(double *)(iVar3 + iVar1) = (double)fVar11;
        fVar10 = fVar10 * (float10)*(double *)(iVar3 + -8 + iVar5 * 8);
        *(double *)(iVar3 + -8 + iVar5 * 8) = (double)fVar10;
        local_58 = (double)((float10)local_58 + fVar11 + fVar10);
      } while (iVar8 < iVar6);
      uVar7 = *(uint *)((int)param_1 + 0x24);
    }
  }
  else {
    iVar6 = (int)((uVar7 - 1) + (uint)(0x7fffffff < uVar7 - 1)) >> 1;
    local_58 = _DAT_5f75c7a0 * *(double *)(iVar3 + iVar6 * 8) * (double)fVar4;
    *(double *)(iVar3 + iVar6 * 8) = local_58;
    if (iVar6 + 1 < 2) {
      uVar7 = *(uint *)((int)param_1 + 0x24);
    }
    else {
      iVar8 = 8;
      iVar9 = 1;
      do {
        fVar10 = (float10)fsin((float10)_DAT_5f75c7a8 * (float10)iVar9 * (float10)fVar4);
        fVar11 = (float10)iVar9;
        iVar9 = iVar9 + 1;
        iVar1 = iVar8 + iVar6 * 8;
        iVar5 = iVar6 * 8 - iVar8;
        iVar8 = iVar8 + 8;
        fVar12 = (float10)*(double *)(iVar3 + iVar1) * (fVar10 / fVar11);
        *(double *)(iVar3 + iVar1) = (double)fVar12;
        fVar11 = (fVar10 / fVar11) * (float10)*(double *)(iVar3 + iVar5);
        *(double *)(iVar3 + iVar5) = (double)fVar11;
        local_58 = (double)((float10)local_58 + fVar12 + fVar11);
      } while (iVar9 < iVar6 + 1);
      uVar7 = *(uint *)((int)param_1 + 0x24);
    }
  }
  dVar2 = *param_1;
  iVar6 = 0;
  if (0 < (int)uVar7) {
    do {
      iVar8 = iVar6 * 8;
      iVar6 = iVar6 + 1;
      *(double *)(iVar3 + -8 + iVar6 * 8) = *(double *)(iVar3 + iVar8) * (dVar2 / local_58);
    } while (iVar6 < *(int *)((int)param_1 + 0x24));
  }
  return;
}


