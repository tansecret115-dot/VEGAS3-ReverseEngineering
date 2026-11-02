/* Module: sftrans1.dll
   Function: FUN_0045cf90
   Address: 0045cf90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0045cf90(int *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float local_48 [18];
  
  pfVar2 = param_2;
  iVar6 = 0;
  if ((*(byte *)(param_1 + 0x22) & 1) == 0) {
    param_2[6] = -1.0;
    param_2[4] = -1.0;
    param_2[2] = -1.0;
    param_2[9] = 1.0;
    param_2[7] = 1.0;
    param_2[5] = 1.0;
    param_2[3] = 1.0;
  }
  else if (param_3 == 0) {
    param_2 = (float *)0x0;
    param_3 = 0;
    while (param_2 < (uint)param_1[0x1f]) {
      iVar5 = *(int *)(param_1[0x28] + 4 + param_3);
      if (iVar5 != 0) {
        local_48[0] = 2.8026e-45;
        iVar6 = FUN_0045e030(iVar5);
        pfVar7 = local_48;
        pfVar4 = pfVar2 + 3;
        iVar5 = 4;
        do {
          pfVar7 = pfVar7 + 2;
          if (*pfVar7 <= pfVar4[-1]) {
            fVar1 = *pfVar7;
          }
          else {
            fVar1 = pfVar4[-1];
          }
          pfVar4[-1] = fVar1;
          if (*pfVar4 <= *(float *)(((int)local_48 - (int)pfVar2) + (int)pfVar4)) {
            fVar1 = *(float *)(((int)local_48 - (int)pfVar2) + (int)pfVar4);
          }
          else {
            fVar1 = *pfVar4;
          }
          *pfVar4 = fVar1;
          pfVar4 = pfVar4 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_2 = (float *)((int)param_2 + 1);
      param_3 = param_3 + 0x18;
      if (iVar6 < 0) {
        return iVar6;
      }
    }
    if (iVar6 < 0) {
      return iVar6;
    }
  }
  else {
    param_2 = (float *)param_3;
    do {
      pfVar4 = (float *)(param_4 + 0xc);
      iVar6 = 4;
      pfVar7 = pfVar2;
      do {
        pfVar3 = pfVar7 + 2;
        if (*(float *)((param_4 - (int)pfVar2) + (int)pfVar3) <= *pfVar3) {
          fVar1 = *(float *)((param_4 - (int)pfVar2) + (int)pfVar3);
        }
        else {
          fVar1 = *pfVar3;
        }
        *pfVar3 = fVar1;
        if (pfVar7[3] <= *pfVar4) {
          fVar1 = *pfVar4;
        }
        else {
          fVar1 = pfVar7[3];
        }
        pfVar7[3] = fVar1;
        pfVar4 = pfVar4 + 2;
        iVar6 = iVar6 + -1;
        pfVar7 = pfVar3;
      } while (iVar6 != 0);
      param_4 = param_4 + 0x48;
      param_2 = (float *)((int)param_2 + -1);
    } while (param_2 != (float *)0x0);
  }
  fVar1 = (pfVar2[3] - pfVar2[2]) * _DAT_0055d914;
  pfVar2[2] = pfVar2[2] - fVar1;
  pfVar2[3] = fVar1 + pfVar2[3];
  fVar1 = (pfVar2[5] - pfVar2[4]) * _DAT_0055d914;
  pfVar2[4] = pfVar2[4] - fVar1;
  pfVar2[5] = fVar1 + pfVar2[5];
  fVar1 = (pfVar2[7] - pfVar2[6]) * _DAT_0055d914;
  pfVar2[6] = pfVar2[6] - fVar1;
  pfVar2[7] = fVar1 + pfVar2[7];
  iVar6 = (**(code **)(*param_1 + 0x38))(pfVar2);
  return iVar6;
}


