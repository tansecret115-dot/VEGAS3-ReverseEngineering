/* Module: sfppack3.dll
   Function: FUN_5cc35160
   Address: 5cc35160
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5cc35160(int param_1,double param_2,int param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined8 local_10;
  
  iVar4 = ftol();
  if (iVar4 < 0) {
    iVar6 = 0;
LAB_5cc35192:
    iVar4 = iVar6;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1d8) + -1;
    if (iVar6 < iVar4) goto LAB_5cc35192;
  }
  iVar6 = iVar4 + 1;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1d8) + -1;
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
  }
  if ((double)iVar4 == *(double *)(param_1 + 0x1e0)) {
    dVar1 = *(double *)(*(int *)(param_1 + 0x1f0) + iVar4 * 8);
    local_10 = *(double *)(*(int *)(param_1 + 500) + iVar4 * 8);
  }
  else {
    dVar1 = *(double *)(*(int *)(param_1 + 0x1f0) + iVar4 * 8);
    dVar2 = *(double *)(param_1 + 0x1e0) - (double)iVar4;
    dVar1 = (*(double *)(*(int *)(param_1 + 0x1f0) + iVar6 * 8) - dVar1) * dVar2 + dVar1;
    local_10 = *(double *)(*(int *)(param_1 + 500) + iVar4 * 8);
    local_10 = (*(double *)(*(int *)(param_1 + 500) + iVar6 * 8) - local_10) * dVar2 + local_10;
  }
  dVar3 = *(double *)(param_1 + 0x1e8) + *(double *)(param_1 + 0x1e0);
  *(double *)(param_1 + 0x1e0) = dVar3;
  dVar2 = (double)(*(int *)(param_1 + 0x1d8) + -1);
  if (dVar3 < dVar2) {
    if (_DAT_5cc87cd8 < dVar3) goto LAB_5cc35292;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  else {
    *(double *)(param_1 + 0x1e0) = dVar2;
  }
  *(double *)(param_1 + 0x1e8) = *(double *)(param_1 + 0x1e8) * _DAT_5cc87d58;
LAB_5cc35292:
  dVar1 = dVar1 * *(double *)(param_1 + 0x1f8 + param_3 * 8);
  fVar7 = (float10)param_2;
  fVar8 = ((float10)dVar1 + fVar7) -
          (float10)local_10 * (float10)*(double *)(param_1 + 0x2f8 + param_3 * 8);
  dVar2 = *(double *)(param_1 + 0x2f8 + param_3 * 8);
  *(undefined4 *)(param_1 + 0x2f8 + param_3 * 8) = *(undefined4 *)(param_1 + 0x1f8 + param_3 * 8);
  *(undefined4 *)(param_1 + 0x2fc + param_3 * 8) = *(undefined4 *)(param_1 + 0x1fc + param_3 * 8);
  dVar1 = (double)((fVar8 * (float10)local_10 - (float10)dVar1) + (float10)dVar2);
  if (ABS(fVar8) < (float10)_DAT_5cc87d48) {
    fVar8 = (float10)_DAT_5cc87cd8;
  }
  *(double *)(param_1 + 0x1f8 + param_3 * 8) = (double)fVar8;
  if (*(int *)(param_1 + 0x60) == 1) {
    fVar8 = ((float10)dVar1 + fVar7) * (float10)_DAT_5cc87cf8;
  }
  else {
    fVar8 = fVar7 - (float10)dVar1;
  }
  return fVar8 * (float10)*(double *)(param_1 + 0x68) + fVar7 * (float10)*(double *)(param_1 + 0x70)
  ;
}


