/* Module: sftrkfx1.dll
   Function: FUN_5cba6ff0
   Address: 5cba6ff0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cba6ff0(double *param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float10 fVar5;
  
  fVar4 = ABS(*param_2);
  if ((uint)ABS(*param_2) <= (uint)ABS(param_2[1])) {
    fVar4 = ABS(param_2[1]);
  }
  if ((*(uint *)((int)param_1 + 0x9c) & 0x7ff00000) < 0x3df00000) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    *(undefined4 *)((int)param_1 + 0x9c) = 0;
  }
  dVar1 = param_1[0x13];
  fVar5 = (float10)param_1[0x12] * (float10)param_1[0x13] + (float10)fVar4 * (float10)param_1[0x11];
  param_1[0x13] = (double)fVar5;
  fVar5 = fVar5 - (float10)dVar1;
  if ((float10)_DAT_5cc03f24 < fVar5) {
    fVar4 = (float)(fVar5 + (float10)fVar4);
  }
  if (*(int *)(param_1 + 0x19) < (int)fVar4) {
    *(float *)(param_1 + 0x19) = fVar4;
    if ((int)fVar4 <= *(int *)((int)param_1 + 0xcc)) {
      dVar1 = param_1[0xf];
      goto LAB_5cba70dd;
    }
    dVar1 = param_1[0xc] / (double)*(float *)(param_1 + 0x19);
  }
  else {
    if (*(int *)(param_1 + 0x19) <= *(int *)((int)param_1 + 0xcc)) {
      dVar1 = param_1[0xf];
      goto LAB_5cba70dd;
    }
    dVar1 = _DAT_5cc114a0 * param_1[0x10];
  }
  param_1[0x10] = dVar1;
  *(float *)(param_1 + 0x19) = _DAT_5cc11498 * *(float *)(param_1 + 0x19);
  dVar1 = param_1[0xd] + param_1[0x10];
LAB_5cba70dd:
  if (*param_1 <= dVar1) {
    dVar3 = param_1[5] * *param_1;
    dVar2 = param_1[0x18];
  }
  else {
    dVar3 = param_1[4] * *param_1;
    dVar2 = param_1[0x17];
  }
  *param_1 = dVar1 * dVar2 + dVar3;
  if (*(int *)((int)param_1 + 0x5c) != 0) {
    if ((*(uint *)((int)param_1 + 0xb4) & 0x7ff00000) < 0x3df00000) {
      *(undefined4 *)(param_1 + 0x16) = 0;
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
    }
    dVar1 = param_1[0x15] * param_1[0x16] + param_1[0x14] * *param_1;
    *param_1 = dVar1 + param_1[0x16];
    param_1[0x16] = dVar1;
  }
  *param_2 = (float)*param_1 * *param_2;
  param_2[1] = (float)*param_1 * param_2[1];
  return;
}


