/* Module: sfpagepeel.dll
   Function: FUN_0040ff50
   Address: 0040ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_0040ff50(void *this,float *param_1,int param_2,int param_3)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float local_48 [18];
  
  pfVar3 = param_1;
  iVar7 = 0;
  if ((*(byte *)((int)this + 0x88) & 1) == 0) {
    param_1[6] = -1.0;
    param_1[4] = -1.0;
    param_1[2] = -1.0;
    param_1[9] = 1.0;
    param_1[7] = 1.0;
    param_1[5] = 1.0;
    param_1[3] = 1.0;
  }
  else if (param_2 == 0) {
    param_1 = (float *)0x0;
    param_2 = 0;
    while (param_1 < *(float **)((int)this + 0x7c)) {
      piVar2 = *(int **)(*(int *)((int)this + 0xa0) + 4 + param_2);
      if (piVar2 != (int *)0x0) {
        local_48[0] = 2.8026e-45;
        iVar7 = FUN_00411240(local_48,piVar2);
        pfVar8 = local_48;
        pfVar5 = pfVar3 + 3;
        iVar6 = 4;
        do {
          pfVar8 = pfVar8 + 2;
          if (*pfVar8 <= pfVar5[-1]) {
            fVar1 = *pfVar8;
          }
          else {
            fVar1 = pfVar5[-1];
          }
          pfVar5[-1] = fVar1;
          if (*pfVar5 <= *(float *)(((int)local_48 - (int)pfVar3) + (int)pfVar5)) {
            fVar1 = *(float *)(((int)local_48 - (int)pfVar3) + (int)pfVar5);
          }
          else {
            fVar1 = *pfVar5;
          }
          *pfVar5 = fVar1;
          pfVar5 = pfVar5 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      param_1 = (float *)((int)param_1 + 1);
      param_2 = param_2 + 0x18;
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    if (iVar7 < 0) {
      return iVar7;
    }
  }
  else {
    param_1 = (float *)param_2;
    do {
      pfVar5 = (float *)(param_3 + 0xc);
      iVar7 = 4;
      pfVar8 = pfVar3;
      do {
        pfVar4 = pfVar8 + 2;
        if (*(float *)((param_3 - (int)pfVar3) + (int)pfVar4) <= *pfVar4) {
          fVar1 = *(float *)((param_3 - (int)pfVar3) + (int)pfVar4);
        }
        else {
          fVar1 = *pfVar4;
        }
        *pfVar4 = fVar1;
        if (pfVar8[3] <= *pfVar5) {
          fVar1 = *pfVar5;
        }
        else {
          fVar1 = pfVar8[3];
        }
        pfVar8[3] = fVar1;
        pfVar5 = pfVar5 + 2;
        iVar7 = iVar7 + -1;
        pfVar8 = pfVar4;
      } while (iVar7 != 0);
      param_3 = param_3 + 0x48;
      param_1 = (float *)((int)param_1 + -1);
    } while (param_1 != (float *)0x0);
  }
  fVar1 = (pfVar3[3] - pfVar3[2]) * _DAT_00470eb4;
  pfVar3[2] = pfVar3[2] - fVar1;
  pfVar3[3] = fVar1 + pfVar3[3];
  fVar1 = (pfVar3[5] - pfVar3[4]) * _DAT_00470eb4;
  pfVar3[4] = pfVar3[4] - fVar1;
  pfVar3[5] = fVar1 + pfVar3[5];
  fVar1 = (pfVar3[7] - pfVar3[6]) * _DAT_00470eb4;
  pfVar3[6] = pfVar3[6] - fVar1;
  pfVar3[7] = fVar1 + pfVar3[7];
  iVar7 = (**(code **)(*(int *)this + 0x38))(pfVar3);
  return iVar7;
}


