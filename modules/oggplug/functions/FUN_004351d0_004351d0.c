/* Module: oggplug.dll
   Function: FUN_004351d0
   Address: 004351d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004351d0(float param_1,float param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  
  if (ABS(param_1) <= ABS(param_2)) {
    *param_3 = param_2;
    fVar1 = param_2;
  }
  else {
    *param_3 = param_1;
    fVar1 = param_1;
  }
  if (fVar1 <= _DAT_0044d6f0) {
    fVar1 = param_2 - param_1;
  }
  else {
    fVar1 = param_1 - param_2;
  }
  *param_4 = fVar1;
  if (*param_3 != _DAT_0044d6f0) {
    floor((double)(*param_4 / *param_3 + _DAT_0044d71c));
    uVar2 = ftol();
    switch(uVar2) {
    case 0xfffffffe:
    case 2:
      *param_3 = 0.0;
    case 0xffffffff:
    case 0:
    case 1:
      *param_4 = 0.0;
    }
  }
  return;
}


