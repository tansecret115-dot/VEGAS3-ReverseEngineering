/* Module: sftrans1.dll
   Function: FUN_004a77f0
   Address: 004a77f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004a77f0(uint param_1)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  float10 extraout_ST0;
  
  if (DAT_00575798 != 0) {
    pdVar2 = (double *)&DAT_0057a770;
    do {
      param_1 = rand();
      param_1 = param_1 & 0x800003ff;
      if ((int)param_1 < 0) {
        param_1 = (param_1 - 1 | 0xfffffc00) + 1;
      }
      pdVar3 = pdVar2 + 1;
      *pdVar2 = (double)(int)param_1 * _DAT_00565320 * (double)(int)param_1 * _DAT_00565320;
      pdVar2 = pdVar3;
    } while (pdVar3 < &DAT_0057a970);
    DAT_00575798 = 0;
  }
  _CIfmod(param_1);
  uVar1 = ftol();
  return extraout_ST0 * (float10)(double)(&DAT_0057a770)[uVar1 + 1 & 0x3f] +
         ((float10)_DAT_00555908 - extraout_ST0) * (float10)(double)(&DAT_0057a770)[uVar1 & 0x3f];
}


