/* Module: vegas30k.dll
   Function: FUN_0100dcf0
   Address: 0100dcf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0100dcf0(undefined4 *param_1,double *param_2,double *param_3,double param_4)

{
  int iVar1;
  double *pdVar2;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  local_28 = (param_3[1] - param_2[1]) * param_4 + param_2[1];
  local_20 = (param_3[2] - param_2[2]) * param_4 + param_2[2];
  local_18 = (param_3[3] - param_2[3]) * param_4 + param_2[3];
  local_30 = (*param_3 - *param_2) * param_4 + *param_2;
  local_10 = (param_3[4] - param_2[4]) * param_4 + param_2[4];
  pdVar2 = &local_30;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_1 = param_1 + 1;
  }
  return;
}


