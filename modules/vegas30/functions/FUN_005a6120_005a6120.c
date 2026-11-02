/* Module: vegas30.exe
   Function: FUN_005a6120
   Address: 005a6120
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6120(float *param_1,float *param_2,double param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  int local_7c;
  float local_64 [16];
  float local_24 [4];
  double local_14;
  
  iVar1 = 0x17;
  if (_DAT_00610fd8 != param_3) {
    pfVar2 = local_64;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar2 = *param_2;
      param_2 = param_2 + 1;
      pfVar2 = pfVar2 + 1;
    }
    if (param_4 == (float *)0x0) {
      param_4 = local_24;
    }
    fVar3 = (float10)fsin((float10)param_3);
    local_7c = 4;
    fVar4 = (float10)fcos((float10)param_3);
    pfVar2 = local_64;
    do {
      *pfVar2 = *pfVar2 - *param_4;
      pfVar2[1] = pfVar2[1] - param_4[1];
      FUN_005a6060(pfVar2,(double)fVar3,(double)fVar4);
      local_7c = local_7c + -1;
      *pfVar2 = *pfVar2 + *param_4;
      pfVar2[1] = pfVar2[1] + param_4[1];
      pfVar2 = pfVar2 + 4;
    } while (local_7c != 0);
    param_2 = local_64;
    local_14 = local_14 + param_3;
  }
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


