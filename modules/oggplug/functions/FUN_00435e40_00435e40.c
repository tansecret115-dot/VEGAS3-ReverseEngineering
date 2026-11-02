/* Module: oggplug.dll
   Function: FUN_00435e40
   Address: 00435e40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00435e40(int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_0044d6f0;
  if (0 < param_1) {
    do {
      fVar1 = *param_2;
      fVar2 = *param_3;
      param_2 = param_2 + 1;
      param_3 = param_3 + param_4;
      param_1 = param_1 + -1;
      fVar3 = ((float10)fVar1 - (float10)fVar2) * ((float10)fVar1 - (float10)fVar2) + fVar3;
    } while (param_1 != 0);
  }
  return fVar3;
}


