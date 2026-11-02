/* Module: espr3260.dll
   Function: FUN_632f6c10
   Address: 632f6c10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632f6c10(float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar2 = param_2 + 1;
    pfVar1 = param_1;
    do {
      iVar2 = iVar2 + -1;
      *pfVar1 = *(float *)(((int)&DAT_632ffa88 - (int)param_1) + (int)pfVar1) * *pfVar1;
      pfVar1 = pfVar1 + 1;
    } while (iVar2 != 0);
  }
  return;
}


