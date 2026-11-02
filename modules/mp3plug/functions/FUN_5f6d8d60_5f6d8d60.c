/* Module: mp3plug.dll
   Function: FUN_5f6d8d60
   Address: 5f6d8d60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d8d60(float param_1,float *param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  
  if (0 < param_3) {
    pfVar1 = param_2 + param_3;
    iVar2 = ((int)pfVar1 - (int)param_2 & 0xfffffff8U) + (int)param_2;
    for (; (int)param_2 < iVar2; param_2 = param_2 + 2) {
      param_2[1] = param_2[1] * param_1;
      *param_2 = *param_2 * param_1;
    }
    for (; (int)param_2 < (int)pfVar1; param_2 = param_2 + 1) {
      *param_2 = *param_2 * param_1;
    }
  }
  return;
}


