/* Module: ednt3260.dll
   Function: FUN_630f4810
   Address: 630f4810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f4810(double *param_1,short param_2,double *param_3,short param_4,double *param_5,
                 double *param_6,short param_7,short param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  double *pdVar10;
  
  pdVar9 = param_3;
  param_3 = (double *)(int)param_7;
  if (0 < (int)param_3) {
    do {
      _param_7 = (int)param_8;
      if (0 < _param_7) {
        pdVar10 = pdVar9;
        do {
          dVar1 = *param_6;
          dVar2 = param_6[1];
          dVar3 = param_6[2];
          dVar4 = *param_1;
          dVar5 = param_5[2];
          dVar6 = param_6[3];
          dVar7 = param_5[3];
          dVar8 = param_6[4];
          *(undefined4 *)(param_5 + 3) = *(undefined4 *)(param_5 + 2);
          *(undefined4 *)((int)param_5 + 0x1c) = *(undefined4 *)((int)param_5 + 0x14);
          *(undefined4 *)(param_5 + 2) = *(undefined4 *)param_1;
          *(undefined4 *)((int)param_5 + 0x14) = *(undefined4 *)((int)param_1 + 4);
          *pdVar10 = dVar7 * dVar8 +
                     dVar5 * dVar6 + dVar3 * dVar4 + (-(*param_5 * dVar1) - param_5[1] * dVar2);
          *(undefined4 *)(param_5 + 1) = *(undefined4 *)param_5;
          *(undefined4 *)((int)param_5 + 0xc) = *(undefined4 *)((int)param_5 + 4);
          *(undefined4 *)param_5 = *(undefined4 *)pdVar10;
          param_1 = param_1 + param_2;
          *(undefined4 *)((int)param_5 + 4) = *(undefined4 *)((int)pdVar10 + 4);
          pdVar10 = pdVar10 + param_4;
          _param_7 = _param_7 + -1;
        } while (_param_7 != 0);
      }
      param_6 = param_6 + 5;
      param_5 = param_5 + 4;
      param_3 = (double *)((int)param_3 + -1);
      param_1 = pdVar9;
      param_2 = param_4;
    } while (param_3 != (double *)0x0);
  }
  return;
}


