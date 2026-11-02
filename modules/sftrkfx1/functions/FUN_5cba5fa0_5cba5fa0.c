/* Module: sftrkfx1.dll
   Function: FUN_5cba5fa0
   Address: 5cba5fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cba5fa0(double *param_1,int param_2,int param_3,double *param_4)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  uint uVar6;
  double *pdVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int local_2c;
  int local_1c;
  double local_18 [2];
  
  local_2c = param_2;
  uVar10 = (uint)*(ushort *)(*(int *)(param_1 + 0x1a) + 2);
  if (0 < param_3) {
    local_1c = param_3;
    do {
      uVar6 = 0;
      if (uVar10 != 0) {
        pdVar7 = local_18;
        do {
          pbVar1 = (byte *)(uVar6 + local_2c);
          uVar6 = uVar6 + 1;
          *pdVar7 = (double)(int)(char)(*pbVar1 ^ 0x80) * _DAT_5cc042a0;
          pdVar7 = pdVar7 + 1;
        } while (uVar6 < uVar10);
      }
      uVar6 = 0;
      dVar3 = _DAT_5cc04098;
      if (uVar10 != 0) {
        pdVar7 = local_18;
        uVar9 = uVar10;
        do {
          if (dVar3 < ABS(*pdVar7)) {
            dVar3 = ABS(*pdVar7);
          }
          pdVar7 = pdVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if ((*(uint *)((int)param_1 + 0x9c) & 0x7ff00000) < 0x3df00000) {
        *(undefined4 *)(param_1 + 0x13) = 0;
        *(undefined4 *)((int)param_1 + 0x9c) = 0;
      }
      dVar2 = param_1[0x13];
      dVar4 = dVar3 * param_1[0x11] + param_1[0x12] * param_1[0x13];
      param_1[0x13] = dVar4;
      dVar4 = dVar4 - dVar2;
      if (_DAT_5cc04098 < dVar4) {
        dVar3 = dVar4 + dVar3;
      }
      if (param_1[6] < dVar3) {
        param_1[6] = dVar3;
        if (param_1[0xe] < dVar3) {
          param_1[0x10] = param_1[0xc] / dVar3;
          param_1[6] = _DAT_5cc04148 * dVar3;
          dVar3 = param_1[0xc] / dVar3 + param_1[0xd];
        }
        else {
          dVar3 = param_1[0xf];
        }
      }
      else if (param_1[0xe] < param_1[6]) {
        param_1[0x10] = _DAT_5cc114a0 * param_1[0x10];
        param_1[6] = _DAT_5cc04148 * param_1[6];
        dVar3 = param_1[0xd] + param_1[0x10];
      }
      else {
        dVar3 = param_1[0xf];
      }
      if (*param_1 <= dVar3) {
        dVar4 = param_1[0x18];
        dVar2 = param_1[5];
      }
      else {
        dVar4 = param_1[0x17];
        dVar2 = param_1[4];
      }
      *param_1 = dVar2 * *param_1 + dVar3 * dVar4;
      if (*(int *)((int)param_1 + 0x5c) != 0) {
        if ((*(uint *)((int)param_1 + 0xb4) & 0x7ff00000) < 0x3df00000) {
          *(undefined4 *)(param_1 + 0x16) = 0;
          *(undefined4 *)((int)param_1 + 0xb4) = 0;
        }
        dVar3 = param_1[0x15] * param_1[0x16] + param_1[0x14] * *param_1;
        *param_1 = dVar3 + param_1[0x16];
        param_1[0x16] = dVar3;
      }
      if (uVar10 != 0) {
        pdVar7 = local_18;
        uVar9 = uVar10;
        do {
          uVar9 = uVar9 - 1;
          *pdVar7 = *pdVar7 * *param_1;
          pdVar7 = pdVar7 + 1;
        } while (uVar9 != 0);
      }
      dVar3 = *param_1 / param_1[8];
      if (*param_4 < dVar3) {
        dVar3 = *param_4;
      }
      *param_4 = dVar3;
      if (uVar10 != 0) {
        do {
          iVar8 = ftol();
          if (iVar8 < -0x80) {
            bVar5 = 0;
          }
          else if (iVar8 < 0x80) {
            bVar5 = (byte)iVar8 ^ 0x80;
          }
          else {
            bVar5 = 0xff;
          }
          uVar9 = uVar6 + 1;
          *(byte *)(uVar6 + local_2c) = bVar5;
          uVar6 = uVar9;
        } while (uVar9 < uVar10);
      }
      local_2c = local_2c + uVar10;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}


