/* Module: mp3plug.dll
   Function: FUN_5f709c80
   Address: 5f709c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f709c80(undefined4 param_1,float *param_2)

{
  float *in_EAX;
  
  *param_2 = in_EAX[2] + *in_EAX + in_EAX[1];
  param_2[2] = (*in_EAX - in_EAX[2]) * _DAT_5f74b54c;
  param_2[4] = (in_EAX[2] + *in_EAX) * _DAT_5f74b558 - in_EAX[1];
  return;
}


