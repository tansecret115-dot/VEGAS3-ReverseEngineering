/* Module: mp3plug.dll
   Function: FUN_5f702f20
   Address: 5f702f20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_5f702f20(undefined4 param_1,int param_2)

{
  int in_EAX;
  float10 in_ST0;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)param_2 * ((in_ST0 * (float10)_DAT_5f7600b0) / (float10)in_EAX);
  fVar1 = (float10)fpatan((float10)_DAT_5f7600b8 * fVar2,(float10)1);
  fVar2 = (float10)fpatan((float10)_DAT_5f7600bc * (float10)(double)fVar2,(float10)1);
  return (float10)_DAT_5f7600c8 * (float10)(double)fVar1 * (float10)(double)fVar1 +
         fVar2 * (float10)_DAT_5f7600c0;
}


