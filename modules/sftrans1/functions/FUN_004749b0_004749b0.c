/* Module: sftrans1.dll
   Function: FUN_004749b0
   Address: 004749b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004749b0(double *param_1,double *param_2,double *param_3,double param_4)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  
  *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = (param_3[2] - param_2[2]) * param_4 + param_2[2];
  param_1[5] = (param_3[5] - param_2[5]) * param_4 + param_2[5];
  param_1[4] = (param_3[4] - param_2[4]) * param_4 + param_2[4];
  param_1[3] = (param_3[3] - param_2[3]) * param_4 + param_2[3];
  param_1[6] = (param_3[6] - param_2[6]) * param_4 + param_2[6];
  iVar2 = 7;
  pdVar1 = param_2 + 7;
  pdVar3 = param_3 + 9;
  pdVar4 = param_1 + 8;
  do {
    iVar2 = iVar2 + -1;
    *(double *)((int)pdVar1 + ((int)param_1 - (int)param_2)) =
         (*(double *)(((int)param_3 - (int)param_2) + (int)pdVar1) - *pdVar1) * param_4 + *pdVar1;
    *pdVar4 = (*(double *)((int)param_3 + (-0x20 - (int)param_1) + (int)(pdVar4 + 4)) - pdVar1[1]) *
              param_4 + pdVar1[1];
    pdVar4[1] = (*pdVar3 - pdVar1[2]) * param_4 + pdVar1[2];
    *(undefined4 *)(pdVar4 + 2) = *(undefined4 *)(pdVar1 + 3);
    pdVar1 = pdVar1 + 4;
    pdVar3 = pdVar3 + 4;
    pdVar4 = pdVar4 + 4;
  } while (iVar2 != 0);
  return 0;
}


