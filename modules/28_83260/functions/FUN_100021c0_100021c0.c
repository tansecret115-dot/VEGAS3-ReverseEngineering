/* Module: 28_83260.dll
   Function: FUN_100021c0
   Address: 100021c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_100021c0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  
  pfVar3 = (float *)(param_4 + 4);
  if (0 < param_3) {
    pfVar2 = (float *)((int)pfVar3 + (param_2 - param_4));
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      param_3 = param_3 + -1;
      *pfVar2 = *(float *)((param_1 - param_2) + (int)pfVar2) * fVar1;
      pfVar2 = pfVar2 + 1;
    } while (param_3 != 0);
  }
  return;
}


