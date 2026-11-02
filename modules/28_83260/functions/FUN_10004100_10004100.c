/* Module: 28_83260.dll
   Function: FUN_10004100
   Address: 10004100
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10004100(uint param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 5;
  fVar1 = *(float *)(&DAT_10008a88 + (param_1 & 7) * 4);
  pfVar3 = (float *)(&DAT_10008088 + ((int)param_1 >> 3) * 5);
  do {
    fVar2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
    *param_2 = fVar1 * fVar2;
    param_2 = param_2 + 1;
  } while (iVar4 != 0);
  return;
}


