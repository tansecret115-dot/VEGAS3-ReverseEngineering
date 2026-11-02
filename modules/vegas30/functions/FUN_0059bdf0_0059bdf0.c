/* Module: vegas30.exe
   Function: FUN_0059bdf0
   Address: 0059bdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059bdf0(uint *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double dVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  
  uVar2 = param_1[8];
  dVar4 = (double)*(longlong *)(param_1 + 6);
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0x3ff00000;
  *(undefined4 *)param_4 = 0;
  *(undefined4 *)((int)param_4 + 4) = 0;
  uVar7 = (int)*param_1 >> 0x1f;
  if (((*param_1 ^ uVar7) - uVar7 & 4) != 0) {
    *param_5 = (double)(float)param_1[2];
    dVar3 = _DAT_006106d0 / (double)(int)uVar2;
    dVar1 = (double)((float)param_1[3] - (float)param_1[2]);
    dVar4 = dVar4 * dVar3;
    dVar5 = dVar4 * dVar4;
    if ((int)*param_1 < 1) {
      *param_4 = dVar1 * _DAT_006129a0;
      *param_3 = (((dVar4 * _DAT_006129b0 - _DAT_006129a8) * _DAT_00610f30 - dVar4 * _DAT_006129b0)
                 + _DAT_006129a8) * dVar1;
      *param_2 = ((((dVar5 * _DAT_006129a8 - dVar4 * _DAT_006129a8) + _DAT_006106d0) * _DAT_00610f30
                  - dVar5 * _DAT_006129a8) + dVar4 * _DAT_006129a8) * dVar1;
      dVar6 = dVar5 * dVar4 + dVar5 * dVar4;
      dVar5 = (((dVar6 - dVar5 * _DAT_00610f30) + dVar4) * _DAT_00610f30 - dVar6) +
              dVar5 * _DAT_00610f30;
    }
    else {
      *param_4 = dVar1 * _DAT_006129b8;
      *param_3 = (_DAT_006129a8 - dVar4 * _DAT_006129b0) * dVar1;
      *param_2 = (dVar4 * _DAT_006129a8 - dVar5 * _DAT_006129a8) * dVar1;
      dVar5 = (_DAT_00610f30 - (dVar4 + dVar4)) * dVar5;
    }
    *param_4 = ABS(dVar3 * dVar3 * dVar3) * *param_4;
    *param_3 = ABS(dVar3 * dVar3) * *param_3;
    *param_2 = ABS(dVar3) * *param_2;
    *param_5 = dVar5 * dVar1 + *param_5;
    return;
  }
  if (*param_1 == 0) {
    *param_5 = (double)(float)param_1[3];
    dVar1 = _DAT_00610fd8;
  }
  else {
    *param_5 = (double)(float)param_1[2];
    dVar1 = ((double)(float)param_1[3] - (double)(float)param_1[2]) / (double)(int)uVar2;
  }
  if (0 < (int)*param_1) {
    dVar4 = (double)(int)uVar2 - dVar4;
    *param_5 = (double)(float)param_1[3];
    *param_2 = -*param_2;
    dVar1 = -dVar1;
  }
  uVar7 = (int)*param_1 >> 0x1f;
  if (1 < (int)((*param_1 ^ uVar7) - uVar7)) {
    *param_2 = dVar4 + *param_2;
    dVar4 = dVar4 * dVar4;
    *param_2 = *param_2 * *param_2 - dVar4;
    *(undefined4 *)param_3 = 0;
    *(undefined4 *)((int)param_3 + 4) = 0x40000000;
    dVar1 = dVar1 / (double)(int)uVar2;
  }
  *param_2 = dVar1 * *param_2;
  *param_3 = dVar1 * *param_3;
  *param_5 = dVar1 * dVar4 + *param_5;
  return;
}


