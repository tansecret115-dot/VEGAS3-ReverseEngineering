/* Module: sfxpfx1.dll
   Function: FUN_5c94e890
   Address: 5c94e890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5c94e890(int param_1,double param_2,int param_3)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)param_2;
  bVar3 = false;
  dVar1 = (_DAT_5c98b988 - *(double *)(param_1 + 0x58)) * _DAT_5c98b998;
  if (((float10)*(double *)(param_1 + 0x68) < fVar6) ||
     ((*(int *)(param_1 + 0x80) != 0 && ((float10)_DAT_5c98b970 < fVar6)))) {
    fVar7 = (float10)*(double *)(param_1 + 0x68);
    if (fVar6 < (float10)dVar1) {
LAB_5c94e92e:
      bVar3 = true;
    }
  }
  else {
    if (((float10)-*(double *)(param_1 + 0x68) <= fVar6) &&
       ((fVar7 = fVar6, *(int *)(param_1 + 0x80) == 0 || ((float10)_DAT_5c98b970 <= fVar6))))
    goto LAB_5c94e95a;
    fVar7 = (float10)-*(double *)(param_1 + 0x68);
    if (-(float10)dVar1 < fVar6) goto LAB_5c94e92e;
  }
  fVar7 = (fVar6 - fVar7) * (float10)*(double *)(param_1 + 0x60) + fVar7;
  if ((bVar3) && ((*(int *)(param_1 + 0x60) != 0 || (*(int *)(param_1 + 100) != 0x3ff00000)))) {
    fVar7 = fVar6 * (float10)_DAT_5c98be98 * fVar7;
  }
LAB_5c94e95a:
  fVar7 = fVar7 * (float10)*(double *)(param_1 + 0x1fe8);
  *(double *)(param_1 + 0x98 + (param_3 + *(int *)(param_1 + 0x1fd8 + param_3 * 4) * 2) * 8) =
       (double)fVar7;
  iVar2 = *(int *)(param_1 + 0x1fd8 + param_3 * 4);
  iVar5 = iVar2 - *(int *)(param_1 + 0x1fe0);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 500;
  }
  dVar1 = *(double *)(param_1 + 0x98 + (param_3 + iVar5 * 2) * 8);
  iVar2 = iVar2 + 1;
  *(int *)(param_1 + 0x1fd8 + param_3 * 4) = iVar2;
  fVar7 = (fVar7 + (float10)dVar1) * (float10)_DAT_5c98b960;
  if (iVar2 == 500) {
    *(undefined4 *)(param_1 + 0x1fd8 + param_3 * 4) = 0;
  }
  dVar4 = _DAT_5c98b988 - *(double *)(param_1 + 0x58) * _DAT_5c98b9a8;
  dVar1 = *(double *)(param_1 + 0x70 + param_3 * 8);
  if (((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x5c) == 0x3ff00000)) ||
     (fVar7 - (float10)dVar1 <= (float10)dVar4)) {
    if (((*(int *)(param_1 + 0x58) != 0) || (*(int *)(param_1 + 0x5c) != 0x3ff00000)) &&
       (fVar7 - (float10)dVar1 < -(float10)dVar4)) {
      fVar7 = (float10)dVar1 - (float10)dVar4;
    }
  }
  else {
    fVar7 = (float10)dVar1 + (float10)dVar4;
  }
  *(double *)(param_1 + 0x70 + param_3 * 8) = (double)fVar7;
  return fVar6 * (float10)*(double *)(param_1 + 0x90) + fVar7 * (float10)*(double *)(param_1 + 0x88)
  ;
}


