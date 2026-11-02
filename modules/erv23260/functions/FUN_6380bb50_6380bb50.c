/* Module: erv23260.dll
   Function: FUN_6380bb50
   Address: 6380bb50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_6380bb50(int param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = _DAT_6382e334;
  fVar2 = (float)param_3;
  fVar1 = _DAT_6382e32c;
  if (param_5 != 0) {
    fVar1 = _DAT_6382e328;
  }
  fVar2 = ((float)param_4 * _DAT_6382e324 -
          ((*(float *)(param_1 + 0x10) * fVar2) / (float)param_2 +
          (*(float *)(param_1 + 0x14) * fVar2) / (float)(param_2 * param_2))) * fVar1 * fVar2;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar2 / (float)param_2;
  fVar2 = fVar2 / (float)(param_2 * param_2);
  fVar1 = fVar3;
  if (fVar3 < _DAT_6382e334) {
    fVar1 = -fVar3;
  }
  if (fVar1 < *(float *)(param_1 + 0x10)) {
    fVar1 = fVar2;
    if (fVar2 < _DAT_6382e334) {
      fVar1 = -fVar2;
    }
    if (fVar1 < *(float *)(param_1 + 0x14)) {
      fVar3 = fVar3 + *(float *)(param_1 + 0x10);
      fVar2 = fVar2 + *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x10) = fVar3;
      *(float *)(param_1 + 0x14) = fVar2;
      if ((fVar3 <= fVar4) || (fVar2 <= _DAT_6382e334)) {
        if (param_5 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 0x3c8b4396;
          *(undefined4 *)(param_1 + 0x14) = 0x3f65a858;
          return;
        }
        *(undefined4 *)(param_1 + 0x10) = 0x3e8e075f;
        *(undefined4 *)(param_1 + 0x14) = 0x3fcb295f;
      }
    }
  }
  return;
}


