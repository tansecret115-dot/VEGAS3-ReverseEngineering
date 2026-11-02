/* Module: vegas30k.dll
   Function: FUN_0100dbe0
   Address: 0100dbe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0100dbe0(double *param_1,undefined4 *param_2,double *param_3)

{
  int iVar1;
  double *pdVar2;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  double local_8;
  
  local_28 = *param_1 - *param_3;
  local_20 = param_1[1] - param_3[1];
  local_18 = param_1[2] - param_3[2];
  local_10 = param_1[3] - param_3[3];
  local_8 = param_1[4] - param_3[4];
  pdVar2 = &local_28;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    param_2 = param_2 + 1;
  }
  return;
}


