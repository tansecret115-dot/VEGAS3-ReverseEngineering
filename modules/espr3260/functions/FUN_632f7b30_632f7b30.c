/* Module: espr3260.dll
   Function: FUN_632f7b30
   Address: 632f7b30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_632f7b30(float *param_1,float param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float local_10;
  float *local_c;
  float local_8;
  
  fVar1 = param_2;
  pfVar2 = (float *)FUN_632f7bd0(param_1,param_2,0x8f,0x50,&param_2);
  local_c = (float *)FUN_632f7bd0(param_1,fVar1,0x4f,0x28,&local_8);
  pfVar3 = (float *)FUN_632f7bd0(param_1,fVar1,0x27,0x14,&local_10);
  param_1 = pfVar2;
  if (param_2 * (float)_DAT_632fa530 < local_8) {
    param_2 = local_8;
    param_1 = local_c;
  }
  if (param_2 * (float)_DAT_632fa530 < local_10) {
    param_1 = pfVar3;
  }
  return (int)param_1;
}


