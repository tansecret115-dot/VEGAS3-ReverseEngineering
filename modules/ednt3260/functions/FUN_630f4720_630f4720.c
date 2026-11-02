/* Module: ednt3260.dll
   Function: FUN_630f4720
   Address: 630f4720
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f4720(int param_1,double *param_2,double *param_3,double *param_4,short param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double *pdVar8;
  int iVar9;
  short *psVar10;
  
  _param_5 = (int)param_5;
  iVar9 = _param_5 * 0x10 + param_1;
  psVar10 = &DAT_63101c70;
  pdVar8 = param_2 + _param_5 * 4 + -1;
  if (0 < _param_5) {
    do {
      dVar1 = *param_3;
      iVar7 = *psVar10 * 0x10;
      dVar2 = *param_4;
      param_3 = param_3 + 1;
      psVar10 = psVar10 + 2;
      dVar3 = *(double *)(param_1 + iVar7);
      dVar4 = *(double *)(param_1 + 8 + iVar7);
      dVar5 = *(double *)(iVar9 + iVar7);
      dVar6 = *(double *)(iVar9 + 8 + iVar7);
      *param_2 = dVar2 * dVar3 - dVar1 * dVar4;
      param_4 = param_4 + 1;
      _param_5 = _param_5 + -1;
      *pdVar8 = dVar2 * dVar6 + dVar1 * dVar5;
      param_2[1] = dVar2 * dVar5 - dVar1 * dVar6;
      pdVar8[-1] = dVar2 * dVar4 + dVar1 * dVar3;
      param_2 = param_2 + 4;
      pdVar8 = pdVar8 + -4;
    } while (_param_5 != 0);
  }
  return;
}


