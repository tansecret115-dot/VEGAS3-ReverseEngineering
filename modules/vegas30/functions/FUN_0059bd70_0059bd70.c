/* Module: vegas30.exe
   Function: FUN_0059bd70
   Address: 0059bd70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0059bd70(int param_1,float *param_2,int param_3,double param_4,int param_5)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  
  if (param_5 == 0) {
    if (0 < param_3) {
      pfVar2 = (float *)(param_1 + 4);
      param_1 = (int)param_2 - param_1;
      do {
        pfVar2[-1] = *param_2 * (float)param_4;
        *pfVar2 = *(float *)((int)pfVar2 + param_1) * (float)param_4;
        param_2 = param_2 + 2;
        pfVar2 = pfVar2 + 2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
  }
  else if (0 < param_3) {
    pfVar2 = (float *)(param_1 + 4);
    pfVar3 = param_2;
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + 2;
      param_3 = param_3 + -1;
      pfVar2[-1] = fVar1 * (float)param_4 + pfVar2[-1];
      *pfVar2 = *(float *)((int)param_2 + (-8 - param_1) + (int)(pfVar2 + 2)) * (float)param_4 +
                *pfVar2;
      pfVar2 = pfVar2 + 2;
    } while (param_3 != 0);
    return;
  }
  return;
}


