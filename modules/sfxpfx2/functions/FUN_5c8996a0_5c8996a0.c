/* Module: sfxpfx2.dll
   Function: FUN_5c8996a0
   Address: 5c8996a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5c8996a0(int param_1,double param_2,int param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float10 fVar5;
  float10 fVar6;
  
  fsin((float10)*(int *)(param_1 + 0x1e0 + param_3 * 4) *
       (float10)*(double *)(param_1 + 0x238 + param_3 * 8));
  iVar3 = ftol();
  iVar4 = iVar3 + 1;
  if (iVar4 == 0x1964) {
    iVar4 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1ac + param_3 * 4);
  fVar5 = (float10)*(double *)(param_1 + 0x178) *
          (float10)*(double *)(param_1 + 0x1c8 + param_3 * 8) +
          ((extraout_ST0 - (float10)iVar3) *
           ((float10)*(double *)(iVar1 + iVar4 * 8) - (float10)*(double *)(iVar1 + iVar3 * 8)) +
          (float10)*(double *)(iVar1 + iVar3 * 8)) * (float10)*(double *)(param_1 + 0x180);
  *(double *)(param_1 + 0x1c8 + param_3 * 8) = (double)fVar5;
  dVar2 = *(double *)(param_1 + 0x1f0 + param_3 * 8) - _DAT_5c8dc920;
  *(double *)(param_1 + 0x1f0 + param_3 * 8) = dVar2;
  if (dVar2 < _DAT_5c8dc8e8) {
    *(undefined4 *)(param_1 + 0x1f0 + param_3 * 8) = 0;
    *(undefined4 *)(param_1 + 500 + param_3 * 8) = 0x40b96300;
  }
  iVar4 = *(int *)(param_1 + 0x1e0 + param_3 * 4) + 1;
  *(int *)(param_1 + 0x1e0 + param_3 * 4) = iVar4;
  if (*(double *)(param_1 + 0x220 + param_3 * 8) <= (double)iVar4) {
    *(undefined4 *)(param_1 + 0x1e0 + param_3 * 4) = 0;
  }
  if (param_3 == 0) {
    fVar6 = extraout_ST1 * (float10)*(double *)(param_1 + 0x70) +
            fVar5 * (float10)*(double *)(param_1 + 0x208);
  }
  else {
    fVar6 = fVar5 * (float10)*(double *)(param_1 + 0x208 + param_3 * 8) + extraout_ST1;
  }
  *(double *)(*(int *)(param_1 + 0x1ac + param_3 * 4) + *(int *)(param_1 + 0x1b8 + param_3 * 4) * 8)
       = (double)(fVar5 * (float10)*(double *)(param_1 + 0x78) + extraout_ST1);
  iVar4 = *(int *)(param_1 + 0x1b8 + param_3 * 4) + -1;
  *(int *)(param_1 + 0x1b8 + param_3 * 4) = iVar4;
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 0x1b8 + param_3 * 4) = 0x1963;
  }
  return (float10)param_2 * (float10)*(double *)(param_1 + 0x60) +
         (float10)(double)fVar6 * (float10)*(double *)(param_1 + 0x58);
}


