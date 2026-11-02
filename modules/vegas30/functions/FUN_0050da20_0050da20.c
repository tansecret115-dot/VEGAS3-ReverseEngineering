/* Module: vegas30.exe
   Function: FUN_0050da20
   Address: 0050da20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0050da20(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                 undefined4 param_6,undefined4 param_7,float param_8)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = param_8;
  fVar4 = param_5;
  pfVar2 = param_1;
  FUN_0050d910(&param_8,&param_5,param_5,param_6,param_7,param_8);
  *param_1 = param_8;
  param_1 = (float *)0x3;
  *param_2 = param_5;
  *param_3 = param_8;
  *param_4 = param_5;
  do {
    fVar4 = (float)((int)fVar4 + 0x10);
    FUN_0050d910(&param_8,&param_5,fVar4,param_6,param_7,fVar3);
    fVar1 = param_8;
    if (*pfVar2 <= param_8) {
      fVar1 = *pfVar2;
    }
    *pfVar2 = fVar1;
    fVar1 = param_8;
    if (param_8 <= *param_3) {
      fVar1 = *param_3;
    }
    *param_3 = fVar1;
    fVar1 = param_5;
    if (*param_2 <= param_5) {
      fVar1 = *param_2;
    }
    *param_2 = fVar1;
    fVar1 = param_5;
    if (param_5 <= *param_4) {
      fVar1 = *param_4;
    }
    *param_4 = fVar1;
    param_1 = (float *)((int)param_1 + -1);
  } while (param_1 != (float *)0x0);
  return;
}


