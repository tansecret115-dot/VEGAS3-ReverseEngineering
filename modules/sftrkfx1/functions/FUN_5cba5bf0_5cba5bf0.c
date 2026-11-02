/* Module: sftrkfx1.dll
   Function: FUN_5cba5bf0
   Address: 5cba5bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cba5bf0(double *param_1,int *param_2,int param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int *piVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *local_30;
  uint local_2c;
  int local_24;
  double local_18 [2];
  
  local_30 = param_2;
  uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x1a) + 2);
  if (0 < param_3) {
    local_24 = param_3;
    do {
      if (uVar8 != 0) {
        piVar4 = local_30;
        pdVar5 = local_18;
        uVar7 = uVar8;
        do {
          iVar6 = *piVar4;
          piVar4 = piVar4 + 1;
          uVar7 = uVar7 - 1;
          *pdVar5 = (double)iVar6 * _DAT_5cc04290;
          pdVar5 = pdVar5 + 1;
        } while (uVar7 != 0);
      }
      dVar2 = _DAT_5cc04098;
      if (uVar8 != 0) {
        pdVar5 = local_18;
        uVar7 = uVar8;
        do {
          if (dVar2 < ABS(*pdVar5)) {
            dVar2 = ABS(*pdVar5);
          }
          pdVar5 = pdVar5 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      if ((*(uint *)((int)param_1 + 0x9c) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(param_1 + 0x13) = 0;
        *(undefined4 *)((int)param_1 + 0x9c) = 0;
      }
      dVar1 = param_1[0x13];
      dVar3 = param_1[0x12] * param_1[0x13] + dVar2 * param_1[0x11];
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
        pdVar5 = local_18;
        uVar7 = uVar8;
        do {
          uVar7 = uVar7 - 1;
          *pdVar5 = *pdVar5 * *param_1;
          pdVar5 = pdVar5 + 1;
        } while (uVar7 != 0);
      }
      dVar2 = *param_1 / param_1[8];
      if (*param_4 < dVar2) {
        dVar2 = *param_4;
      }
      *param_4 = dVar2;
      if (uVar8 != 0) {
        pdVar5 = local_18;
        piVar4 = local_30;
        local_2c = uVar8;
        do {
          if (_DAT_5cc04280 <= *pdVar5 * _DAT_5cc04288) {
            if (*pdVar5 * _DAT_5cc04288 <= _DAT_5cc04278) {
              iVar6 = ftol();
            }
            else {
              iVar6 = 0x7fffffff;
            }
          }
          else {
            iVar6 = -0x80000000;
          }
          *piVar4 = iVar6;
          pdVar5 = pdVar5 + 1;
          piVar4 = piVar4 + 1;
          local_2c = local_2c - 1;
        } while (local_2c != 0);
      }
      local_30 = local_30 + uVar8;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  return;
}


