/* Module: sfppack3.dll
   Function: FUN_5cc45e90
   Address: 5cc45e90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_5cc45e90(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  float10 fVar5;
  
  dVar1 = *(double *)(param_1 + 0x3708);
  iVar4 = param_1 + 0x270;
  if ((double)CONCAT44(param_3,param_2) < _DAT_5cc87cd8) {
    iVar4 = param_1 + 0x1cb8;
  }
  fVar5 = FUN_5cc45de0((double)CONCAT44(param_3,param_2),iVar4,-0x348);
  dVar2 = *(double *)(param_1 + 0x3720) - *(double *)(param_1 + 0x3728);
  fVar5 = fVar5 * (float10)(double)CONCAT44(param_3,param_2) -
          (float10)*(double *)(param_1 + 0x3720);
  dVar3 = dVar2 + *(double *)(param_1 + 0x3718);
  dVar2 = dVar2 - *(double *)(param_1 + 0x3718);
  if (*(int *)(param_1 + 0x3710) != 0) {
    if ((float10)dVar2 <= fVar5) {
      if ((float10)dVar3 < fVar5) {
        fVar5 = (float10)dVar3;
      }
    }
    else {
      fVar5 = (float10)dVar2;
    }
  }
  fVar5 = fVar5 + (float10)*(double *)(param_1 + 0x3720);
  *(undefined4 *)(param_1 + 0x3728) = *(undefined4 *)(param_1 + 0x3720);
  *(undefined4 *)(param_1 + 0x372c) = *(undefined4 *)(param_1 + 0x3724);
  *(double *)(param_1 + 0x3720) = (double)fVar5;
  fVar5 = fVar5 * (float10)*(double *)(param_1 + 0x3740) +
          (float10)*(double *)(param_1 + 0x3738) *
          (float10)*(double *)(param_1 + 0x3748 + param_4 * 8);
  if (ABS(fVar5) < (float10)_DAT_5cc87d48) {
    fVar5 = (float10)_DAT_5cc87cd8;
  }
  *(double *)(param_1 + 0x3748 + param_4 * 8) = (double)fVar5;
  return fVar5 * (float10)*(double *)(param_1 + 0x3700) +
         (float10)((double)CONCAT44(param_3,param_2) * dVar1);
}


