/* Module: mp3plug.dll
   Function: FUN_5f6f4b50
   Address: 5f6f4b50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f6f4b50(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_EAX;
  float10 in_ST0;
  float10 fVar7;
  
  fVar2 = (float)((float10)_DAT_5f75e108 * in_ST0);
  fVar6 = (float)in_ST0;
  if (in_ST0 <= (float10)*param_2) {
    fVar1 = *in_EAX;
    if (*in_EAX <= fVar6) {
      *in_EAX = (fVar6 - fVar1) * _DAT_5f75e138 + fVar1;
      *param_2 = *param_2 - (*param_2 - fVar6) * _DAT_5f75e13c;
    }
    else {
      fVar3 = (fVar1 - fVar6) * _DAT_5f75e134;
      *in_EAX = fVar1 - _DAT_5f75e130 * (fVar1 - fVar6);
      *param_2 = *param_2 - fVar3;
    }
  }
  else {
    fVar7 = (float10)fVar6 - (float10)*param_2;
    *in_EAX = (float)((float10)_DAT_5f75e10c * fVar7 + (float10)*in_EAX);
    *param_2 = (float)(fVar7 * (float10)_DAT_5f75e110 + (float10)*param_2);
  }
  fVar1 = _DAT_5f75e128;
  if (*param_2 - *in_EAX < fVar2) {
    fVar3 = fVar6 - *in_EAX;
    if (fVar6 - *in_EAX < _DAT_5f75e114) {
      fVar3 = _DAT_5f75e118;
    }
    fVar5 = *param_2 - fVar6;
    if (*param_2 - fVar6 < _DAT_5f75e11c) {
      fVar5 = _DAT_5f75e120;
    }
    fVar4 = _DAT_5f75e124 / (fVar5 + fVar3);
    fVar3 = fVar6 - fVar4 * fVar3 * fVar2;
    *param_2 = fVar5 * fVar4 * fVar2 + fVar6;
    *in_EAX = fVar3;
    if (fVar3 < fVar1) {
      fVar3 = _DAT_5f75e12c;
    }
    *in_EAX = fVar3;
  }
  return;
}


