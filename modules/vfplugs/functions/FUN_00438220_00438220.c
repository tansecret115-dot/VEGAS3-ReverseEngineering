/* Module: vfplugs.dll
   Function: FUN_00438220
   Address: 00438220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00438220(int *param_1,int *param_2,LONG *param_3,int param_4,int *param_5,int *param_6,
            LONG *param_7,int param_8,int param_9,double param_10)

{
  code *pcVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  int local_4ac;
  undefined8 local_4a8;
  undefined4 local_4a0;
  int aiStack_498 [36];
  float local_408 [257];
  
  pcVar1 = (code *)(&PTR_LAB_00493d78)[param_9];
  local_4a0 = 0;
  if (_DAT_00487598 == param_10) {
    local_4a8 = 1.0;
  }
  else {
    local_4a8 = _DAT_00487590 / param_10;
  }
  local_4ac = 0;
  pfVar3 = local_408;
  do {
    fVar4 = (float10)(*pcVar1)((double)local_4ac * _DAT_00487e28,(undefined4)local_4a8,
                               local_4a8._4_4_);
    *pfVar3 = (float)fVar4;
    local_4ac = local_4ac + 1;
    pfVar3 = pfVar3 + 1;
  } while (local_4ac < 0x100);
  iVar2 = FUN_00440ed0(aiStack_498,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,3
                      );
  if (iVar2 != 0) {
    local_4a0 = FUN_00438120((int)aiStack_498,(int)local_408);
  }
  FUN_00441270((int)aiStack_498);
  return local_4a0;
}


