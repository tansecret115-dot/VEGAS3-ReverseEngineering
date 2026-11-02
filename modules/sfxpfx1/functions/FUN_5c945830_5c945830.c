/* Module: sfxpfx1.dll
   Function: FUN_5c945830
   Address: 5c945830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5c945830(int param_1,double param_2,int param_3)

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
LAB_5c945862:
    iVar4 = iVar6;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x1e0) + -1;
    if (iVar6 < iVar4) goto LAB_5c945862;
  }
  iVar6 = iVar4 + 1;
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x1e0) + -1;
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
  }
  if ((double)iVar4 == *(double *)(param_1 + 0x1e8)) {
    dVar1 = *(double *)(*(int *)(param_1 + 0x1f8) + iVar4 * 8);
    local_10 = *(double *)(*(int *)(param_1 + 0x1fc) + iVar4 * 8);
  }
  else {
    dVar1 = *(double *)(*(int *)(param_1 + 0x1f8) + iVar4 * 8);
    dVar2 = *(double *)(param_1 + 0x1e8) - (double)iVar4;
    dVar1 = (*(double *)(*(int *)(param_1 + 0x1f8) + iVar6 * 8) - dVar1) * dVar2 + dVar1;
    local_10 = *(double *)(*(int *)(param_1 + 0x1fc) + iVar4 * 8);
    local_10 = (*(double *)(*(int *)(param_1 + 0x1fc) + iVar6 * 8) - local_10) * dVar2 + local_10;
  }
  dVar3 = *(double *)(param_1 + 0x1f0) + *(double *)(param_1 + 0x1e8);
  *(double *)(param_1 + 0x1e8) = dVar3;
  dVar2 = (double)(*(int *)(param_1 + 0x1e0) + -1);
  if (dVar3 < dVar2) {
    if (_DAT_5c98b970 < dVar3) goto LAB_5c945962;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  else {
    *(double *)(param_1 + 0x1e8) = dVar2;
  }
  *(double *)(param_1 + 0x1f0) = *(double *)(param_1 + 0x1f0) * _DAT_5c98b9c8;
LAB_5c945962:
  dVar1 = dVar1 * *(double *)(param_1 + 0x200 + param_3 * 8);
  fVar7 = (float10)param_2;
  fVar8 = ((float10)dVar1 + fVar7) -
          (float10)local_10 * (float10)*(double *)(param_1 + 0x300 + param_3 * 8);
  dVar2 = *(double *)(param_1 + 0x300 + param_3 * 8);
  *(undefined4 *)(param_1 + 0x300 + param_3 * 8) = *(undefined4 *)(param_1 + 0x200 + param_3 * 8);
  *(undefined4 *)(param_1 + 0x304 + param_3 * 8) = *(undefined4 *)(param_1 + 0x204 + param_3 * 8);
  dVar1 = (double)((fVar8 * (float10)local_10 - (float10)dVar1) + (float10)dVar2);
  if (ABS(fVar8) < (float10)_DAT_5c98b9b8) {
    fVar8 = (float10)_DAT_5c98b970;
  }
  *(double *)(param_1 + 0x200 + param_3 * 8) = (double)fVar8;
  if (*(int *)(param_1 + 0x68) == 1) {
    fVar8 = ((float10)dVar1 + fVar7) * (float10)_DAT_5c98b960;
  }
  else {
    fVar8 = fVar7 - (float10)dVar1;
  }
  return fVar8 * (float10)*(double *)(param_1 + 0x70) + fVar7 * (float10)*(double *)(param_1 + 0x78)
  ;
}


