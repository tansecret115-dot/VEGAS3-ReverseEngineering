/* Module: mp3plug.dll
   Function: FUN_5f6d41f0
   Address: 5f6d41f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f6d41f0(int param_1)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  
  dVar1 = *(double *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 8);
  fVar11 = (float10)FUN_5f6d4000(dVar1);
  fVar4 = (float10)_DAT_5f75c740;
  uVar3 = *(uint *)(param_1 + 0x24);
  if ((uVar3 & 1) == 0) {
    iVar10 = 0;
    iVar8 = (int)(uVar3 + (0x7fffffff < uVar3)) >> 1;
    dVar5 = _DAT_5f75c770 / (double)iVar8;
    if (0 < iVar8) {
      iVar9 = 0;
      do {
        dVar6 = ((double)iVar10 + _DAT_5f75c780) * dVar5;
        fVar12 = (float10)FUN_5f6d4000(SQRT((_DAT_5f75c788 - dVar6 * dVar6) - _DAT_5f75c790) * dVar1
                                      );
        fVar12 = fVar12 * (float10)(double)(fVar4 / fVar11);
        iVar7 = iVar9 + iVar8 * 8;
        iVar9 = iVar9 + 8;
        *(double *)(iVar2 + iVar7) = (double)fVar12;
        iVar7 = iVar8 - iVar10;
        iVar10 = iVar10 + 1;
        *(double *)(iVar2 + -8 + iVar7 * 8) = (double)fVar12;
      } while (iVar10 < iVar8);
    }
  }
  else {
    iVar10 = (int)((uVar3 - 1) + (uint)(0x7fffffff < uVar3 - 1)) >> 1;
    *(undefined8 *)(iVar2 + iVar10 * 8) = _DAT_5f75c758;
    dVar5 = _DAT_5f75c748 / (double)iVar10;
    if (1 < iVar10 + 1) {
      iVar8 = 8;
      iVar9 = 1;
      do {
        dVar6 = (double)iVar9 * dVar5;
        fVar12 = (float10)FUN_5f6d4000(SQRT(_DAT_5f75c760 - (dVar6 * dVar6 - _DAT_5f75c768)) * dVar1
                                      );
        fVar12 = fVar12 * (float10)(double)(fVar4 / fVar11);
        iVar9 = iVar9 + 1;
        *(double *)(iVar2 + iVar8 + iVar10 * 8) = (double)fVar12;
        iVar7 = iVar10 * 8 - iVar8;
        iVar8 = iVar8 + 8;
        *(double *)(iVar2 + iVar7) = (double)fVar12;
      } while (iVar9 < iVar10 + 1);
    }
  }
  return;
}


