/* Module: sfxpfx1.dll
   Function: FUN_5c951df0
   Address: 5c951df0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5c951df0(int param_1,double param_2,int param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)param_2;
  if (*(int *)(param_1 + 0x88 + param_3 * 4) == 0) {
    iVar2 = *(int *)(param_1 + 100 + param_3 * 4);
    if (iVar2 < *(int *)(param_1 + 0x6c)) {
      fVar4 = fVar3 * (float10)*(double *)(param_1 + 0x78 + param_3 * 8);
      dVar1 = *(double *)(param_1 + 0x70) + *(double *)(param_1 + 0x78 + param_3 * 8);
      *(double *)(param_1 + 0x78 + param_3 * 8) = dVar1;
      if (_DAT_5c98b988 < dVar1) {
        *(undefined4 *)(param_1 + 0x78 + param_3 * 8) = 0;
        *(undefined4 *)(param_1 + 0x7c + param_3 * 8) = 0x3ff00000;
      }
    }
    else {
      fVar4 = fVar3;
      if (*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x6c) < iVar2) {
        fVar4 = fVar3 * (float10)*(double *)(param_1 + 0x78 + param_3 * 8);
        dVar1 = *(double *)(param_1 + 0x78 + param_3 * 8) - *(double *)(param_1 + 0x70);
        *(double *)(param_1 + 0x78 + param_3 * 8) = dVar1;
        if (dVar1 < _DAT_5c98b970) {
          *(undefined4 *)(param_1 + 0x78 + param_3 * 8) = 0;
          *(undefined4 *)(param_1 + 0x7c + param_3 * 8) = 0;
        }
      }
    }
    iVar2 = *(int *)(param_1 + 100 + param_3 * 4) + 1;
    *(int *)(param_1 + 100 + param_3 * 4) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0x58)) goto LAB_5c951ec3;
    *(undefined4 *)(param_1 + 0x88 + param_3 * 4) = 1;
  }
  else {
    fVar4 = (float10)_DAT_5c98b970;
    iVar2 = *(int *)(param_1 + 0x5c + param_3 * 4) + 1;
    *(int *)(param_1 + 0x5c + param_3 * 4) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0x54)) goto LAB_5c951ec3;
    *(undefined4 *)(param_1 + 0x88 + param_3 * 4) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c + param_3 * 4) = 0;
  *(undefined4 *)(param_1 + 100 + param_3 * 4) = 0;
  *(undefined4 *)(param_1 + 0x78 + param_3 * 8) = 0;
  *(undefined4 *)(param_1 + 0x7c + param_3 * 8) = 0;
LAB_5c951ec3:
  return fVar3 * (float10)*(double *)(param_1 + 0x98) + fVar4 * (float10)*(double *)(param_1 + 0xa0)
  ;
}


