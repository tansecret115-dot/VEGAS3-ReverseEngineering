/* Module: sfppack1.dll
   Function: FUN_5cdd7110
   Address: 5cdd7110
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5cdd7110(void *param_1,double param_2,int param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  double local_c;
  
  if (param_3 == 0) {
    local_c = param_2 * *(double *)((int)param_1 + 0x78);
  }
  else {
    local_c = param_2;
  }
  fVar5 = (float10)fsin((float10)*(int *)((int)param_1 + param_3 * 4 + 0x1f0) *
                        (float10)*(double *)((int)param_1 + param_3 * 8 + 0x248));
  fVar5 = fVar5 * (float10)*(double *)((int)param_1 + 0x1a0) +
          (float10)*(double *)((int)param_1 + param_3 * 8 + 0x200);
  param_2 = (double)fVar5;
  if (fVar5 < (float10)_DAT_5ce14f18) {
    if (fVar5 < (float10)_DAT_5ce12bf0) {
      param_2 = (double)(fVar5 + (float10)_DAT_5ce14f18);
    }
  }
  else {
    param_2 = (double)(fVar5 - (float10)_DAT_5ce14f18);
  }
  iVar1 = (int)ROUND(param_2);
  iVar4 = iVar1 + 1;
  if (iVar4 == 0x1964) {
    iVar4 = 0;
  }
  iVar2 = *(int *)((int)param_1 + param_3 * 4 + 0x1bc);
  fVar5 = (float10)*(double *)((int)param_1 + 0x188) *
          (float10)*(double *)((int)param_1 + param_3 * 8 + 0x1d8) +
          (((float10)param_2 - (float10)iVar1) *
           ((float10)*(double *)(iVar2 + iVar4 * 8) - (float10)*(double *)(iVar2 + iVar1 * 8)) +
          (float10)*(double *)(iVar2 + iVar1 * 8)) * (float10)*(double *)((int)param_1 + 400);
  param_2 = (double)fVar5;
  if (ABS(fVar5) < (float10)_DAT_5ce14f10) {
    fVar5 = (float10)_DAT_5ce12bf0;
    param_2 = _DAT_5ce12bf0;
  }
  *(double *)((int)param_1 + param_3 * 8 + 0x1d8) = (double)fVar5;
  dVar3 = *(double *)((int)param_1 + param_3 * 8 + 0x200) - _DAT_5ce12e70;
  *(double *)((int)param_1 + param_3 * 8 + 0x200) = dVar3;
  if (dVar3 < _DAT_5ce12bf0) {
    *(undefined4 *)((int)param_1 + param_3 * 8 + 0x200) = 0;
    *(undefined4 *)((int)param_1 + param_3 * 8 + 0x204) = 0x40b96300;
  }
  iVar4 = *(int *)((int)param_1 + param_3 * 4 + 0x1f0) + 1;
  *(int *)((int)param_1 + param_3 * 4 + 0x1f0) = iVar4;
  if (*(double *)((int)param_1 + param_3 * 8 + 0x230) <= (double)iVar4) {
    *(undefined4 *)((int)param_1 + param_3 * 4 + 0x1f0) = 0;
  }
  if (param_3 == 0) {
    fVar5 = (float10)local_c * (float10)*(double *)((int)param_1 + 0x80) +
            fVar5 * (float10)*(double *)((int)param_1 + 0x218);
  }
  else {
    fVar5 = fVar5 * (float10)*(double *)((int)param_1 + param_3 * 8 + 0x218) + (float10)local_c;
  }
  *(double *)
   (*(int *)((int)param_1 + param_3 * 4 + 0x1bc) + *(int *)((int)param_1 + param_3 * 4 + 0x1c8) * 8)
       = param_2 * *(double *)((int)param_1 + 0x88) + local_c;
  iVar4 = *(int *)((int)param_1 + param_3 * 4 + 0x1c8) + -1;
  *(int *)((int)param_1 + param_3 * 4 + 0x1c8) = iVar4;
  if (iVar4 < 0) {
    *(undefined4 *)((int)param_1 + param_3 * 4 + 0x1c8) = 0x1963;
  }
  return fVar5;
}


