/* Module: espr3260.dll
   Function: FUN_632f7040
   Address: 632f7040
   Source: Ghidra pseudocode (Stage 10 batch) */


float * FUN_632f7040(int param_1,float *param_2,float *param_3,float *param_4,int param_5,
                    int param_6,int *param_7)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float local_4c;
  undefined1 auStack_48 [68];
  
  pfVar4 = param_4;
  pfVar1 = param_4 + -1;
  pfVar5 = &local_4c + -(int)pfVar1;
  FUN_632f72d0(param_1,(int)param_2,param_3,(int)pfVar1,param_5 + 4,(int)pfVar5);
  fVar2 = pfVar5[(int)pfVar4];
  pfVar3 = (float *)((int)pfVar4 + 1);
  param_2 = pfVar4;
  if ((int)pfVar3 <= param_5) {
    pfVar4 = pfVar5 + (int)pfVar3;
    do {
      if (fVar2 < *pfVar4) {
        fVar2 = *pfVar4;
        param_2 = pfVar3;
      }
      pfVar3 = (float *)((int)pfVar3 + 1);
      pfVar4 = pfVar4 + 1;
    } while ((int)pfVar3 <= param_5);
  }
  if ((param_6 == 0) && (0x54 < (int)param_2)) {
    *param_7 = 0;
    return param_2;
  }
  pfVar5 = pfVar5 + (int)param_2;
  FUN_632f7220((int)pfVar5,(float *)&param_3,(float *)&DAT_632fa428,4,0,1);
  param_5 = 0;
  FUN_632f7220((int)(pfVar5 + -1),(float *)&param_4,(float *)&DAT_632fa428,4,1,1);
  if ((float)param_3 < (float)param_4) {
    param_5 = -2;
    param_3 = param_4;
  }
  FUN_632f7220((int)pfVar5,(float *)&param_4,(float *)&DAT_632fa428,4,-1,1);
  if ((float)param_3 < (float)param_4) {
    param_5 = -1;
    param_3 = param_4;
  }
  FUN_632f7220((int)pfVar5,(float *)&param_4,(float *)&DAT_632fa428,4,1,1);
  if ((float)param_3 < (float)param_4) {
    param_5 = 1;
    param_3 = param_4;
  }
  FUN_632f7220((int)(auStack_48 + (int)param_2 * 4 + (int)pfVar1 * -4),(float *)&param_4,
               (float *)&DAT_632fa428,4,-1,1);
  if ((float)param_3 < (float)param_4) {
    param_5 = 2;
  }
  if (param_5 == -2) {
    param_5 = 1;
    param_2 = (float *)((int)param_2 + -1);
  }
  if (param_5 == 2) {
    param_5 = -1;
    param_2 = (float *)((int)param_2 + 1);
  }
  *param_7 = param_5;
  return param_2;
}


