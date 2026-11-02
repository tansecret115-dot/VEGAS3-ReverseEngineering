/* Module: espr3260.dll
   Function: FUN_632f96e0
   Address: 632f96e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_632f96e0(int param_1,int param_2,float *param_3,float param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_5) {
    iVar2 = param_1 - (int)param_3;
    iVar3 = param_2 - (int)param_3;
    do {
      fVar1 = *param_3;
      param_3 = param_3 + 1;
      param_5 = param_5 + -1;
      *(float *)(iVar3 + -4 + (int)param_3) =
           *(float *)(iVar2 + -4 + (int)param_3) - param_4 * fVar1;
    } while (param_5 != 0);
  }
  return;
}


