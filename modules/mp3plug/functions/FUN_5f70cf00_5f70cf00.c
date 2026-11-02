/* Module: mp3plug.dll
   Function: FUN_5f70cf00
   Address: 5f70cf00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5f70cf00(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = _DAT_5f760b10;
  fVar1 = *param_1 + param_1[2] + param_1[4];
  *param_1 = fVar1;
  fVar2 = _DAT_5f760b10;
  fVar1 = (param_1[2] + param_1[4]) * _DAT_5f760b0c + fVar1;
  fVar4 = param_1[1] + param_1[5] + param_1[3];
  fVar3 = (param_1[2] - param_1[4]) * fVar3;
  param_1[1] = fVar4;
  fVar2 = (param_1[3] - param_1[5]) * fVar2;
  fVar4 = (param_1[5] + param_1[3]) * _DAT_5f760b0c + fVar4;
  param_1[3] = fVar4 + fVar3;
  param_1[5] = fVar4 - fVar3;
  param_1[2] = fVar1 - fVar2;
  param_1[4] = fVar1 + fVar2;
  return;
}


