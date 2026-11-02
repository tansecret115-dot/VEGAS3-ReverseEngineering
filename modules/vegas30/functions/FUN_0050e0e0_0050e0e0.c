/* Module: vegas30.exe
   Function: FUN_0050e0e0
   Address: 0050e0e0
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_0050e0e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = &local_20;
  iVar2 = 4;
  do {
    FUN_0050d910(pfVar3,pfVar3 + 1,param_1,param_2,param_3,param_4);
    param_1 = param_1 + 0x10;
    pfVar3 = pfVar3 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  fVar4 = ((float10)local_1c - (float10)local_c) * ((float10)local_1c - (float10)local_c) +
          ((float10)local_20 - (float10)local_10) * ((float10)local_20 - (float10)local_10);
  fVar1 = (local_14 - local_4) * (local_14 - local_4) + (local_18 - local_8) * (local_18 - local_8);
  if (fVar4 <= (float10)fVar1) {
    fVar4 = (float10)fVar1;
  }
  return SQRT(fVar4);
}


