/* Module: 28_83260.dll
   Function: FUN_10002150
   Address: 10002150
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10002150(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  
  pfVar3 = (float *)(param_5 + 4);
  if (0 < param_4) {
    pfVar2 = (float *)((int)pfVar3 + (param_2 - param_5));
    iVar4 = param_4;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      iVar4 = iVar4 + -1;
      *pfVar2 = *(float *)((param_1 - param_2) + (int)pfVar2) * fVar1;
      pfVar2 = pfVar2 + 1;
    } while (iVar4 != 0);
  }
  pfVar3 = (float *)(param_6 + 4);
  if (0 < param_4) {
    pfVar2 = (float *)((int)pfVar3 + (param_3 - param_6));
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      param_4 = param_4 + -1;
      *pfVar2 = *(float *)((param_1 - param_3) + (int)pfVar2) * fVar1;
      pfVar2 = pfVar2 + 1;
    } while (param_4 != 0);
  }
  return;
}


