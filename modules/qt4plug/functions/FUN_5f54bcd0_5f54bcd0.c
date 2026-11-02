/* Module: qt4plug.dll
   Function: FUN_5f54bcd0
   Address: 5f54bcd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f54bcd0(float *param_1,int param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 fVar5;
  float10 extraout_ST1;
  
  if (_DAT_5f596688 < *(double *)(param_2 + 0x10)) {
    dVar1 = (*(double *)(param_2 + 0x10) + *(double *)(param_2 + 8)) -
            *(double *)(param_2 + 0x10) * *(double *)(param_2 + 8);
  }
  else {
    dVar1 = (*(double *)(param_2 + 8) + _DAT_5f596670) * *(double *)(param_2 + 0x10);
  }
  param_1[3] = (float)*(double *)(param_2 + 0x18);
  if (_DAT_5f596570 < dVar1) {
    dVar1 = (*(double *)(param_2 + 0x10) + *(double *)(param_2 + 0x10)) - dVar1;
    iVar4 = ftol();
    fVar5 = (extraout_ST0 - (float10)iVar4) * ((extraout_ST1 - (float10)dVar1) / extraout_ST1) *
            extraout_ST1;
    fVar2 = (float)(fVar5 + (float10)dVar1);
    fVar3 = (float)(extraout_ST1 - fVar5);
    switch(iVar4) {
    case 0:
    case 6:
      param_1[2] = (float)extraout_ST1;
      param_1[1] = fVar2;
      *param_1 = (float)dVar1;
      return;
    case 1:
      param_1[2] = fVar3;
      param_1[1] = (float)extraout_ST1;
      *param_1 = (float)dVar1;
      return;
    case 2:
      param_1[2] = (float)dVar1;
      param_1[1] = (float)extraout_ST1;
      *param_1 = fVar2;
      return;
    case 3:
      param_1[2] = (float)dVar1;
      param_1[1] = fVar3;
      *param_1 = (float)extraout_ST1;
      return;
    case 4:
      param_1[2] = fVar2;
      param_1[1] = (float)dVar1;
      *param_1 = (float)extraout_ST1;
      return;
    case 5:
      param_1[2] = (float)extraout_ST1;
      param_1[1] = (float)dVar1;
      *param_1 = fVar3;
      return;
    default:
      return;
    }
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}


