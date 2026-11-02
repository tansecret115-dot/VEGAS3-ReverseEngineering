/* Module: 28_83260.dll
   Function: FUN_10001dc0
   Address: 10001dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001dc0(int param_1,int param_2,int param_3,int param_4,float *param_5,int param_6,
                 float *param_7,int param_8,float *param_9,float param_10)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float local_2f4 [111];
  float local_138 [37];
  float local_a4 [38];
  int local_c;
  int local_8;
  
  iVar5 = param_4 + param_1;
  iVar7 = param_4 + param_3 + param_1;
  iVar6 = param_8 + (param_2 - param_1) * 4;
  if (0 < iVar5) {
    pfVar4 = param_5;
    param_4 = iVar5;
    do {
      fVar2 = pfVar4[param_3];
      *pfVar4 = fVar2;
      pfVar1 = (float *)((iVar6 - (int)param_5) + (int)pfVar4);
      pfVar4 = pfVar4 + 1;
      *(float *)((int)local_2f4 + (-4 - (int)param_5) + (int)pfVar4) = *pfVar1 * fVar2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  local_c = param_3 + param_1;
  local_8 = iVar7;
  if (iVar5 < param_3 + iVar5) {
    iVar7 = (param_3 + iVar5) - iVar5;
    pfVar4 = param_5 + iVar5;
    do {
      fVar2 = *(float *)((int)pfVar4 + ((param_6 + iVar5 * -4) - (int)param_5));
      *pfVar4 = fVar2;
      iVar7 = iVar7 + -1;
      *(float *)((int)pfVar4 + ((int)local_2f4 - (int)param_5)) =
           *(float *)((int)pfVar4 + (iVar6 - (int)param_5)) * fVar2;
      pfVar4 = pfVar4 + 1;
    } while (iVar7 != 0);
  }
  iVar5 = local_8;
  FUN_10002200((int)local_2f4,local_138,param_1,param_1,local_c);
  FUN_10002200((int)local_2f4,local_a4,param_1,local_c,iVar5);
  iVar5 = 0;
  if (-1 < param_1) {
    do {
      iVar6 = iVar5 + 1;
      fVar3 = param_10 * *param_9 + local_138[iVar5];
      fVar2 = local_a4[iVar5];
      *param_9 = fVar3;
      param_7[iVar5] = fVar2 + fVar3;
      param_9 = param_9 + 1;
      iVar5 = iVar6;
    } while (iVar6 <= param_1);
  }
  *param_7 = *param_7 * _DAT_10007098;
  return;
}


