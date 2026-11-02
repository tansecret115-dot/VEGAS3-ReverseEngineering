/* Module: vidcap30.exe
   Function: FUN_0053bb40
   Address: 0053bb40
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0053bb40(float *param_1,int param_2,int param_3,double *param_4)

{
  float *pfVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  pfVar1 = param_1 + param_2 * param_3;
  if ((*(uint *)((int)param_4 + 0x84) & 0x7ff00000) < 0x3df00000) {
    *(undefined4 *)(param_4 + 0x10) = 0;
    *(undefined4 *)((int)param_4 + 0x84) = 0;
  }
  if ((*(uint *)((int)param_4 + 0x8c) & 0x7ff00000) < 0x3df00000) {
    *(undefined4 *)(param_4 + 0x11) = 0;
    *(undefined4 *)((int)param_4 + 0x8c) = 0;
  }
  fVar4 = (float10)param_4[0x10];
  fVar3 = (float10)param_4[0x11];
  for (; fVar2 = fVar4, param_1 < pfVar1; param_1 = param_1 + param_3) {
    fVar4 = fVar2 * (float10)*param_4 + (float10)*param_1 * (float10)param_4[0x1a];
    *param_1 = (float)(((float10)*param_1 + fVar4) - fVar2);
    fVar3 = fVar2;
  }
  param_4[0x11] = (double)fVar3;
  param_4[0x10] = (double)fVar2;
  return;
}


