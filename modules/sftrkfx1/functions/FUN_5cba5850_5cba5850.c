/* Module: sftrkfx1.dll
   Function: FUN_5cba5850
   Address: 5cba5850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cba5850(double *param_1,short *param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  short sVar4;
  short *psVar5;
  double *pdVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short *local_2c;
  int local_20;
  double local_18 [2];
  
  local_2c = param_2;
  uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1a) + 2);
  if (0 < param_3) {
    local_20 = param_3;
    do {
      if (uVar8 != 0) {
        psVar5 = local_2c;
        pdVar6 = local_18;
        uVar9 = uVar8;
        do {
          sVar4 = *psVar5;
          psVar5 = psVar5 + 1;
          uVar9 = uVar9 - 1;
          *pdVar6 = (double)(int)sVar4 * _DAT_5cc04270;
          pdVar6 = pdVar6 + 1;
        } while (uVar9 != 0);
      }
      dVar2 = _DAT_5cc04098;
      if (uVar8 != 0) {
        pdVar6 = local_18;
        uVar9 = uVar8;
        do {
          if (dVar2 < ABS(*pdVar6)) {
            dVar2 = ABS(*pdVar6);
          }
          pdVar6 = pdVar6 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
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
      if (*(int *)((int)param_1 + 0x5c) != 0) {
        if ((*(uint *)((int)param_1 + 0xb4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)(param_1 + 0x16) = 0;
          *(undefined4 *)((int)param_1 + 0xb4) = 0;
        }
        dVar2 = param_1[0x15] * param_1[0x16] + param_1[0x14] * *param_1;
        *param_1 = dVar2 + param_1[0x16];
        param_1[0x16] = dVar2;
      }
      if (uVar8 != 0) {
        pdVar6 = local_18;
        uVar9 = uVar8;
        do {
          uVar9 = uVar9 - 1;
          *pdVar6 = *pdVar6 * *param_1;
          pdVar6 = pdVar6 + 1;
        } while (uVar9 != 0);
      }
      dVar2 = *param_1 / param_1[8];
      if (*param_4 < dVar2) {
        dVar2 = *param_4;
      }
      *param_4 = dVar2;
      psVar5 = local_2c;
      for (uVar9 = uVar8; uVar9 != 0; uVar9 = uVar9 - 1) {
        iVar7 = ftol();
        if (iVar7 < -0x8000) {
          iVar7 = -0x8000;
        }
        else if (0x7fff < iVar7) {
          iVar7 = 0x7fff;
        }
        *psVar5 = (short)iVar7;
        psVar5 = psVar5 + 1;
      }
      local_2c = local_2c + uVar8;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}


