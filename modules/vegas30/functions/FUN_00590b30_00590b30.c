/* Module: vegas30.exe
   Function: FUN_00590b30
   Address: 00590b30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590b30(float *param_1,int param_2,float *param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int local_1c;
  
  if (param_8 == 1) {
    fVar4 = (float)param_6 / (float)param_5;
    if (0 < param_7) {
      fVar5 = fVar4 * (float)_DAT_00610560;
      fVar6 = (float)_DAT_00610560 - fVar5;
      pfVar7 = param_3;
      do {
        local_1c = param_4 + 1;
        fVar2 = (float)local_1c / (float)param_5;
        if (fVar6 <= fVar2) {
          if (fVar5 + (float)_DAT_00610560 <= fVar2) {
            fVar2 = (float)_DAT_006106d0;
            fVar3 = (float)_DAT_00610fd8;
          }
          else {
            fVar3 = (fVar2 - fVar6) / fVar4;
            fVar2 = SQRT(fVar3);
            fVar3 = SQRT((float)_DAT_006106d0 - fVar3);
          }
        }
        else {
          fVar2 = (float)_DAT_00610fd8;
          fVar3 = (float)_DAT_006106d0;
        }
        pfVar8 = (float *)((param_2 - (int)param_3) + (int)pfVar7);
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        param_7 = param_7 + -1;
        *(float *)((int)param_1 + (-4 - (int)param_3) + (int)pfVar7) =
             fVar1 * fVar2 + *pfVar8 * fVar3;
        param_4 = local_1c;
      } while (param_7 != 0);
      return;
    }
  }
  else if (param_8 == 2) {
    fVar4 = (float)(param_6 * 2) / (float)(param_5 * 2);
    if (0 < param_7 * 2) {
      local_1c = param_4 * 2;
      fVar5 = fVar4 * (float)_DAT_00610560;
      fVar6 = (float)_DAT_00610560 - fVar5;
      uVar9 = param_7 * 2 + 1U >> 1;
      pfVar7 = param_3 + 1;
      pfVar8 = param_1;
      do {
        local_1c = local_1c + 2;
        fVar2 = (float)local_1c / (float)(param_5 * 2);
        if (fVar6 <= fVar2) {
          if (fVar5 + (float)_DAT_00610560 <= fVar2) {
            fVar2 = (float)_DAT_006106d0;
            fVar3 = (float)_DAT_00610fd8;
          }
          else {
            fVar3 = (fVar2 - fVar6) / fVar4;
            fVar2 = SQRT(fVar3);
            fVar3 = SQRT((float)_DAT_006106d0 - fVar3);
          }
        }
        else {
          fVar2 = (float)_DAT_00610fd8;
          fVar3 = (float)_DAT_006106d0;
        }
        uVar9 = uVar9 - 1;
        *pfVar8 = pfVar7[-1] * fVar2 +
                  *(float *)((param_2 - (int)param_1) + -8 + (int)(pfVar8 + 2)) * fVar3;
        *(float *)((int)pfVar7 + ((int)param_1 - (int)param_3)) =
             *pfVar7 * fVar2 + *(float *)((int)pfVar7 + (param_2 - (int)param_3)) * fVar3;
        pfVar7 = pfVar7 + 2;
        pfVar8 = pfVar8 + 2;
      } while (uVar9 != 0);
    }
  }
  return;
}


