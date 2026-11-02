/* Module: mp3plug.dll
   Function: FUN_5f6f4e50
   Address: 5f6f4e50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall
FUN_5f6f4e50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  float10 in_ST0;
  
  if ((((param_2 < 1) || (_DAT_5f75e158 * param_5 <= (float)in_ST0)) ||
      ((float)in_ST0 <= _DAT_5f75e15c * param_5)) ||
     ((_DAT_5f75e160 * (float)param_2 * _DAT_5f75e164 <= param_5 ||
      (param_5 <= _DAT_5f75e168 * (float)param_2 * _DAT_5f75e16c)))) {
    *in_EAX = 1.0;
    return;
  }
  fVar2 = param_5 / (_DAT_5f75e170 * (float)param_2);
  if (fVar2 <= _DAT_5f75e178) {
    if ((_DAT_5f75e19c <= fVar2) || (*in_EAX <= _DAT_5f75e1a0)) goto LAB_5f6f4ef9;
  }
  else if (_DAT_5f75e17c <= *in_EAX) goto LAB_5f6f4ef9;
  *in_EAX = 1.0;
LAB_5f6f4ef9:
  fVar3 = _DAT_5f75e18c;
  fVar2 = *in_EAX * _DAT_5f75e184 + fVar2 * _DAT_5f75e188;
  *in_EAX = fVar2;
  if (fVar3 <= fVar2) {
    fVar2 = _DAT_5f75e198;
  }
  bVar1 = fVar2 <= _DAT_5f75e190;
  *in_EAX = fVar2;
  if (bVar1) {
    fVar2 = _DAT_5f75e194;
  }
  *in_EAX = fVar2;
  return;
}


