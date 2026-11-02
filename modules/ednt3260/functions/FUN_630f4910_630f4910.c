/* Module: ednt3260.dll
   Function: FUN_630f4910
   Address: 630f4910
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_630f4910(double *param_1,short param_2,double *param_3,short param_4,double *param_5,
                 double *param_6,short param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _param_7 = (int)param_7;
  if (0 < _param_7) {
    do {
      dVar1 = *param_6;
      dVar2 = param_6[1];
      dVar3 = *param_1;
      dVar4 = param_5[1];
      dVar5 = param_6[2];
      *(undefined4 *)(param_5 + 1) = *(undefined4 *)param_1;
      *(undefined4 *)((int)param_5 + 0xc) = *(undefined4 *)((int)param_1 + 4);
      dVar1 = dVar4 * dVar5 + dVar2 * dVar3 + -(*param_5 * dVar1);
      param_1 = param_1 + param_2;
      *param_3 = dVar1;
      *param_5 = dVar1;
      param_3 = param_3 + param_4;
      _param_7 = _param_7 + -1;
    } while (_param_7 != 0);
  }
  return;
}


