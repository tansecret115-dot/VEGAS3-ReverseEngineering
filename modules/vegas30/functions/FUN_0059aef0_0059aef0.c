/* Module: vegas30.exe
   Function: FUN_0059aef0
   Address: 0059aef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059aef0(float *param_1,float *param_2,int param_3,float *param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  
  param_3 = param_3 * 2;
  if ((param_4[2] == (float)_DAT_00610fd8) && (param_4[3] == (float)_DAT_00610fd8)) {
    fVar1 = *param_4;
    fVar2 = param_4[1];
    if (param_5 == 0) {
      iVar8 = 0;
      if (0 < param_3) {
        do {
          iVar8 = iVar8 + 2;
          *param_1 = fVar1 * *param_2;
          param_1[1] = fVar2 * param_2[1];
          param_2 = param_2 + 2;
          param_1 = param_1 + 2;
        } while (iVar8 < param_3);
        return;
      }
    }
    else {
      iVar8 = 0;
      if (0 < param_3) {
        do {
          iVar8 = iVar8 + 2;
          *param_1 = fVar1 * *param_2 + *param_1;
          param_1[1] = fVar2 * param_2[1] + param_1[1];
          param_1 = param_1 + 2;
          param_2 = param_2 + 2;
        } while (iVar8 < param_3);
        return;
      }
    }
  }
  else {
    fVar1 = *param_4;
    fVar2 = param_4[1];
    fVar3 = param_4[2];
    fVar4 = param_4[3];
    if (param_5 == 0) {
      if (0 < param_3) {
        uVar7 = param_3 + 1U >> 1;
        pfVar5 = param_2 + 1;
        pfVar6 = param_1;
        do {
          uVar7 = uVar7 - 1;
          *pfVar6 = fVar1 * pfVar5[-1] + fVar4 * *pfVar5;
          *(float *)((int)param_1 + (-8 - (int)param_2) + (int)(pfVar5 + 2)) =
               fVar2 * *pfVar5 + fVar3 * pfVar5[-1];
          pfVar5 = pfVar5 + 2;
          pfVar6 = pfVar6 + 2;
        } while (uVar7 != 0);
      }
    }
    else if (0 < param_3) {
      uVar7 = param_3 + 1U >> 1;
      pfVar5 = param_1 + 1;
      pfVar6 = param_2;
      do {
        uVar7 = uVar7 - 1;
        pfVar5[-1] = fVar1 * *pfVar6 +
                     fVar4 * *(float *)(((int)param_2 - (int)param_1) + (int)pfVar5) + pfVar5[-1];
        *pfVar5 = fVar2 * *(float *)(((int)param_2 - (int)param_1) + -8 + (int)(pfVar5 + 2)) +
                  fVar3 * *pfVar6 + *pfVar5;
        pfVar5 = pfVar5 + 2;
        pfVar6 = pfVar6 + 2;
      } while (uVar7 != 0);
      return;
    }
  }
  return;
}


