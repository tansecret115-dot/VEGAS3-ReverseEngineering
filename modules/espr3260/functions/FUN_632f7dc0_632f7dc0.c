/* Module: espr3260.dll
   Function: FUN_632f7dc0
   Address: 632f7dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f7dc0(float *param_1,float *param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  *param_2 = *param_1;
  if (0 < param_4) {
    iVar3 = (int)param_1 - (int)param_2;
    fVar1 = param_3;
    do {
      param_2 = param_2 + 1;
      fVar2 = *(float *)(iVar3 + (int)param_2) * fVar1;
      fVar1 = fVar1 * param_3;
      *param_2 = fVar2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


