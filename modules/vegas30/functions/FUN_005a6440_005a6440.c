/* Module: vegas30.exe
   Function: FUN_005a6440
   Address: 005a6440
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a6440(float *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float local_5c [23];
  
  pfVar1 = param_2;
  pfVar3 = local_5c;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  iVar2 = 5;
  pfVar1 = param_2;
  do {
    pfVar3 = pfVar1 + 4;
    iVar2 = iVar2 + -1;
    *(float *)((int)local_5c + (-0x10 - (int)param_2) + (int)pfVar3) =
         (*pfVar1 - *param_3) * param_4 + *param_3;
    *(float *)((int)local_5c + (-0xc - (int)param_2) + (int)pfVar3) =
         (pfVar1[1] - param_3[1]) * param_5 + param_3[1];
    pfVar1 = pfVar3;
  } while (iVar2 != 0);
  pfVar1 = local_5c;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


