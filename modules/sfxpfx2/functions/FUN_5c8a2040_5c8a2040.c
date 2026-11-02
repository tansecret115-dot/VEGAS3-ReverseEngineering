/* Module: sfxpfx2.dll
   Function: FUN_5c8a2040
   Address: 5c8a2040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5c8a2040(int param_1,double *param_2)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (_DAT_5c8dc8e8 != param_2[1]) {
    fVar2 = (float10)_CIpow();
    fVar2 = fVar2 - (float10)_DAT_5c8dc920;
    if (_DAT_5c8dc8e8 < param_2[1]) {
      *(double *)(param_1 + 0x28) = (double)(fVar2 / (float10)param_2[2]);
    }
    fVar3 = (float10)param_2[2];
    dVar1 = _DAT_5c8dd820;
    if (_DAT_5c8dd830 < *param_2) {
      dVar1 = _DAT_5c8dd828;
    }
    if (fVar3 < (float10)_DAT_5c8dc920) {
      *(double *)(param_1 + 0x28) =
           (double)((((float10)_DAT_5c8dc920 - fVar3) * (float10)_DAT_5c8dce28 + (float10)dVar1) *
                   fVar2);
      return;
    }
    *(double *)(param_1 + 0x28) = (double)(((float10)dVar1 / fVar3) * fVar2);
  }
  return;
}


