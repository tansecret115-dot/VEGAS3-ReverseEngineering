/* Module: sftrkfx1.dll
   Function: FUN_5cba6920
   Address: 5cba6920
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cba6920(double *param_1,double *param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  int local_14;
  
  uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 0x1a) + 2);
  if (0 < param_3) {
    local_14 = param_3;
    uVar4 = uVar7;
    dVar2 = _DAT_5cc04098;
    pdVar6 = param_2;
    do {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        if (dVar2 < ABS(*param_2)) {
          dVar2 = ABS(*param_2);
        }
        param_2 = param_2 + 1;
      }
      if ((*(uint *)((int)param_1 + 0x9c) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(param_1 + 0x13) = 0;
        *(undefined4 *)((int)param_1 + 0x9c) = 0;
      }
      dVar1 = param_1[0x13];
      dVar3 = dVar2 * param_1[0x11] + param_1[0x12] * param_1[0x13];
      param_1[0x13] = dVar3;
      dVar3 = dVar3 - dVar1;
      if (_DAT_5cc04098 < dVar3) {
        dVar2 = dVar3 + dVar2;
      }
      if (param_1[6] < dVar2) {
        param_1[6] = dVar2;
        if (param_1[0xe] < dVar2) {
          param_1[0x10] = param_1[0xc] / dVar2;
          param_1[6] = _DAT_5cc04148 * dVar2;
          dVar2 = param_1[0xc] / dVar2 + param_1[0xd];
        }
        else {
          dVar2 = param_1[0xf];
        }
      }
      else if (param_1[0xe] < param_1[6]) {
        param_1[0x10] = _DAT_5cc114a0 * param_1[0x10];
        param_1[6] = _DAT_5cc04148 * param_1[6];
        dVar2 = param_1[0xd] + param_1[0x10];
      }
      else {
        dVar2 = param_1[0xf];
      }
      if (*param_1 <= dVar2) {
        dVar3 = param_1[0x18];
        dVar1 = param_1[5];
      }
      else {
        dVar3 = param_1[0x17];
        dVar1 = param_1[4];
      }
      *param_1 = dVar1 * *param_1 + dVar2 * dVar3;
      pdVar5 = pdVar6;
      uVar4 = uVar7;
      if (*(int *)((int)param_1 + 0x5c) != 0) {
        if ((*(uint *)((int)param_1 + 0xb4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)(param_1 + 0x16) = 0;
          *(undefined4 *)((int)param_1 + 0xb4) = 0;
        }
        dVar2 = param_1[0x15] * param_1[0x16] + param_1[0x14] * *param_1;
        *param_1 = dVar2 + param_1[0x16];
        param_1[0x16] = dVar2;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pdVar5 = *pdVar5 * *param_1;
        pdVar5 = pdVar5 + 1;
      }
      dVar2 = *param_1 / param_1[8];
      if (*param_4 < dVar2) {
        dVar2 = *param_4;
      }
      param_2 = pdVar6 + uVar7;
      *param_4 = dVar2;
      local_14 = local_14 + -1;
      uVar4 = uVar7;
      dVar2 = _DAT_5cc04098;
      pdVar6 = param_2;
    } while (local_14 != 0);
  }
  return;
}


