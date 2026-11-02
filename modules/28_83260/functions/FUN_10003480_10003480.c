/* Module: 28_83260.dll
   Function: FUN_10003480
   Address: 10003480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10003480(void *this,int param_1,int param_2,int param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,float *param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float local_2ec [111];
  float local_130 [37];
  float local_9c [37];
  void *local_8;
  
  local_8 = this;
  iVar6 = param_3 + param_1;
  pfVar4 = local_2ec;
  pfVar5 = param_7;
  if (0 < iVar6) {
    iVar7 = (int)param_4 + (param_2 * 4 - (int)local_2ec);
    pfVar3 = pfVar4;
    do {
      fVar1 = *(float *)((int)pfVar3 + iVar7);
      pfVar5 = param_7 + 1;
      pfVar4 = pfVar3 + 1;
      *param_4 = fVar1;
      param_4 = param_4 + 1;
      iVar6 = iVar6 + -1;
      *pfVar3 = *param_7 * fVar1;
      pfVar3 = pfVar4;
      param_7 = pfVar5;
    } while (iVar6 != 0);
  }
  if (0 < param_2) {
    param_7 = (float *)param_2;
    do {
      fVar1 = *param_5;
      param_5 = param_5 + 1;
      *param_4 = fVar1;
      fVar1 = *param_4;
      fVar2 = *pfVar5;
      param_4 = param_4 + 1;
      pfVar5 = pfVar5 + 1;
      param_7 = (float *)((int)param_7 + -1);
      *pfVar4 = fVar1 * fVar2;
      pfVar4 = pfVar4 + 1;
    } while (param_7 != (float *)0x0);
  }
  FUN_10002200((int)local_2ec,local_9c,param_1,param_1,param_2 + param_1);
  FUN_10002200((int)local_2ec,local_130,param_1,param_2 + param_1,param_3 + param_2 + param_1);
  iVar6 = 0;
  if (-1 < param_1) {
    do {
      iVar7 = iVar6 + 1;
      fVar2 = *param_8 * param_9 + local_9c[iVar6];
      fVar1 = local_130[iVar6];
      *param_8 = fVar2;
      param_6[iVar6] = fVar1 + fVar2;
      param_8 = param_8 + 1;
      iVar6 = iVar7;
    } while (iVar7 <= param_1);
  }
  *param_6 = *param_6 * _DAT_100070b0;
  return;
}


