/* Module: vegas30k.dll
   Function: FUN_010f9740
   Address: 010f9740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010f9740(double *param_1,int param_2,int param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  pdVar1 = param_1 + param_2 * param_3;
  if ((*(uint *)((int)param_4 + 0x84) & 0x7ff00000) < 0x3df00000) {
    *(undefined4 *)(param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x84) = 0;
  }
  if ((*(uint *)((int)param_4 + 0x8c) & 0x7ff00000) < 0x3df00000) {
    *(undefined4 *)(param_4 + 0x11) = 0;
    *(undefined4 *)((int)param_4 + 0x8c) = 0;
  }
  dVar2 = param_4[0x10];
  dVar4 = param_4[0x11];
  for (; dVar3 = dVar2, param_1 < pdVar1; param_1 = param_1 + param_3) {
    dVar2 = *param_1 * param_4[0x1a] + dVar3 * *param_4;
    *param_1 = (*param_1 + dVar2) - dVar3;
    dVar4 = dVar3;
  }
  param_4[0x11] = dVar4;
  param_4[0x10] = dVar3;
  return;
}


