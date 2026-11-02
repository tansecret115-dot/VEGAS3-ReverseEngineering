/* Module: espr3260.dll
   Function: FUN_632f7960
   Address: 632f7960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_632f7960(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar2 = param_4;
  local_8 = (float)((int)param_2 * 2);
  fVar1 = (float)FUN_632f7a60(param_1,(int)param_4,(int)param_3,(float)((int)param_2 * 8),&local_c);
  local_10 = (float)FUN_632f7a60(param_1,(int)fVar2,(int)param_2 * 8 + -1,(float)((int)param_2 * 4),
                                 &param_3);
  local_14 = (float)FUN_632f7a60(param_1,(int)fVar2,(int)param_2 * 4 + -1,local_8,&param_4);
  fVar2 = (float)FUN_632f7a60(param_1,(int)fVar2,(int)local_8 + -1,param_2,&local_18);
  param_2 = fVar1;
  if (local_c * (float)_DAT_632fa518 < param_3) {
    param_2 = local_10;
    local_c = param_3;
  }
  if (local_c * (float)_DAT_632fa518 < param_4) {
    param_2 = local_14;
    local_c = param_4;
  }
  if (local_c * (float)_DAT_632fa518 < local_18) {
    param_2 = fVar2;
  }
  return (int)param_2;
}


