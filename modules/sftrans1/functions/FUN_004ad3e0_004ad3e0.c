/* Module: sftrans1.dll
   Function: FUN_004ad3e0
   Address: 004ad3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_004ad3e0(int *param_1,int *param_2,int *param_3,double param_4)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  
  fVar2 = (float)param_4;
  *param_1 = *param_2;
  bVar3 = true;
  bVar4 = true;
  param_1[1] = (int)(((float)param_3[1] - (float)param_2[1]) * fVar2 + (float)param_2[1]);
  if (*param_2 == *param_3) {
LAB_004ad41e:
    param_1[2] = (int)(((float)param_3[2] - (float)param_2[2]) * fVar2 + (float)param_2[2]);
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      bVar3 = false;
      bVar4 = false;
    }
    else {
      if (iVar1 == 1) {
        bVar4 = false;
        param_1[2] = (int)(((float)param_3[2] - (float)param_2[2]) * fVar2 + (float)param_2[2]);
        goto LAB_004ad44e;
      }
      if (iVar1 != 2) goto LAB_004ad41e;
    }
    param_1[2] = param_2[2];
    if (!bVar3) {
      param_1[3] = param_2[3];
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      return 0;
    }
  }
LAB_004ad44e:
  param_1[3] = (int)(((float)param_3[3] - (float)param_2[3]) * fVar2 + (float)param_2[3]);
  param_1[4] = (int)(((float)param_3[4] - (float)param_2[4]) * fVar2 + (float)param_2[4]);
  param_1[5] = (int)(((float)param_3[5] - (float)param_2[5]) * fVar2 + (float)param_2[5]);
  if (bVar4) {
    param_1[6] = (int)(((float)param_3[6] - (float)param_2[6]) * fVar2 + (float)param_2[6]);
    return 0;
  }
  param_1[6] = param_2[6];
  return 0;
}


