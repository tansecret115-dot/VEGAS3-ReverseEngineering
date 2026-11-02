/* Module: mp3plug.dll
   Function: FUN_5f71ddb0
   Address: 5f71ddb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f71ddb0(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int in_EAX;
  
  fVar1 = _DAT_5f766bc4 * *(float *)(in_EAX + 0x44);
  fVar2 = *param_2 * _DAT_5f766ba4;
  *param_2 = *param_2 * _DAT_5f766bc4 + *(float *)(in_EAX + 0x44) * _DAT_5f766ba4;
  *(float *)(in_EAX + 0x44) = fVar1 - fVar2;
  fVar1 = _DAT_5f766bc8 * *(float *)(in_EAX + 0x40);
  fVar2 = param_2[1] * _DAT_5f766ba8;
  param_2[1] = param_2[1] * _DAT_5f766bc8 + _DAT_5f766ba8 * *(float *)(in_EAX + 0x40);
  *(float *)(in_EAX + 0x40) = fVar1 - fVar2;
  fVar1 = _DAT_5f766bcc * *(float *)(in_EAX + 0x3c);
  fVar2 = param_2[2] * _DAT_5f766bac;
  param_2[2] = param_2[2] * _DAT_5f766bcc + _DAT_5f766bac * *(float *)(in_EAX + 0x3c);
  *(float *)(in_EAX + 0x3c) = fVar1 - fVar2;
  fVar1 = _DAT_5f766bd0 * *(float *)(in_EAX + 0x38);
  fVar2 = param_2[3] * _DAT_5f766bb0;
  param_2[3] = param_2[3] * _DAT_5f766bd0 + _DAT_5f766bb0 * *(float *)(in_EAX + 0x38);
  *(float *)(in_EAX + 0x38) = fVar1 - fVar2;
  fVar1 = _DAT_5f766bd4 * *(float *)(in_EAX + 0x34);
  fVar2 = param_2[4] * _DAT_5f766bb4;
  param_2[4] = param_2[4] * _DAT_5f766bd4 + _DAT_5f766bb4 * *(float *)(in_EAX + 0x34);
  *(float *)(in_EAX + 0x34) = fVar1 - fVar2;
  fVar1 = *(float *)(in_EAX + 0x30) * _DAT_5f766bd8;
  fVar2 = _DAT_5f766bb8 * param_2[5];
  param_2[5] = _DAT_5f766bb8 * *(float *)(in_EAX + 0x30) + param_2[5] * _DAT_5f766bd8;
  *(float *)(in_EAX + 0x30) = fVar1 - fVar2;
  fVar1 = _DAT_5f766bdc * *(float *)(in_EAX + 0x2c);
  fVar2 = param_2[6] * _DAT_5f766bbc;
  param_2[6] = param_2[6] * _DAT_5f766bdc + _DAT_5f766bbc * *(float *)(in_EAX + 0x2c);
  *(float *)(in_EAX + 0x2c) = fVar1 - fVar2;
  fVar1 = *(float *)(in_EAX + 0x28) * _DAT_5f766be0;
  fVar2 = _DAT_5f766bc0 * param_2[7];
  param_2[7] = _DAT_5f766bc0 * *(float *)(in_EAX + 0x28) + param_2[7] * _DAT_5f766be0;
  *(float *)(in_EAX + 0x28) = fVar1 - fVar2;
  return;
}


