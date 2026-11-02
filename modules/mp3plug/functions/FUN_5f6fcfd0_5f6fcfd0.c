/* Module: mp3plug.dll
   Function: FUN_5f6fcfd0
   Address: 5f6fcfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_5f6fcfd0(int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  int in_EAX;
  unkbyte10 in_ST0;
  double in_stack_00000010;
  
  if (in_EAX == 0) {
    fVar3 = _DAT_5f75e5f0 - _DAT_5f75e5f4;
  }
  else {
    fVar3 = _DAT_5f75e5f4 + _DAT_5f75e5f0;
  }
  fVar1 = (float10)log2(in_ST0);
  fVar2 = (float10)log2((float10)in_stack_00000010);
  return (float10)fVar3 *
         ((float10)_DAT_5f75e5f8 * (float10)(double)((float10)0.6931471805599453 * fVar1) +
         (float10)param_2) <
         (float10)param_1 + (float10)0.6931471805599453 * fVar2 * (float10)_DAT_5f75e600;
}


