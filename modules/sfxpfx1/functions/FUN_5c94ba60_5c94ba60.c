/* Module: sfxpfx1.dll
   Function: FUN_5c94ba60
   Address: 5c94ba60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5c94ba60(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *param_1;
  dVar2 = param_2[1];
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_2 + 0xc) = *(undefined4 *)((int)param_2 + 4);
  dVar1 = (param_2[2] * *param_2 + param_2[4] * dVar1) - param_2[3] * dVar2;
  *param_2 = dVar1;
  *param_1 = *param_1 - dVar1;
  return;
}


