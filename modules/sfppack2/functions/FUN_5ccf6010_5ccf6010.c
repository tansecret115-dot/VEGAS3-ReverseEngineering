/* Module: sfppack2.dll
   Function: FUN_5ccf6010
   Address: 5ccf6010
   Source: Ghidra pseudocode (Stage 10 batch) */


float10 FUN_5ccf6010(int param_1,int param_2)

{
  double dVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  double local_18;
  undefined8 local_10;
  
  pdVar6 = *(double **)(param_2 + 0x18);
  iVar5 = param_1 * 0x1c0 + param_2;
  iVar7 = 0;
  *(undefined4 *)(iVar5 + 0xd0) = 0;
  *(undefined4 *)(iVar5 + 0xd4) = 0;
  *(undefined4 *)(iVar5 + 200) = 0;
  *(undefined4 *)(iVar5 + 0xcc) = 0;
  local_18 = 0.0;
  if (0 < *(int *)(param_2 + 0x14)) {
    do {
      iVar2 = *(int *)(iVar5 + 0x184);
      dVar1 = *pdVar6;
      if (iVar2 == 0) {
        dVar1 = (dVar1 * *(double *)(iVar5 + 0xe8) +
                *(double *)(iVar5 + 0xd8) * *(double *)(iVar5 + 200)) -
                *(double *)(iVar5 + 0xe0) * *(double *)(iVar5 + 0xd0);
        local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        if ((local_10._4_4_ & 0x7ff00000) < 0x3df00000) {
          local_10 = 0.0;
          dVar1 = local_10;
        }
        *(undefined4 *)(iVar5 + 0xd0) = *(undefined4 *)(iVar5 + 200);
        *(double *)(iVar5 + 200) = dVar1;
        *(undefined4 *)(iVar5 + 0xd4) = *(undefined4 *)(iVar5 + 0xcc);
      }
      else if (iVar2 == 1) {
        dVar3 = *(double *)(iVar5 + 0xa8) * *(double *)(iVar5 + 0x98) +
                (dVar1 * *(double *)(iVar5 + 0xb8) -
                *(double *)(iVar5 + 0xb0) * *(double *)(iVar5 + 0xa0));
        local_10._4_4_ = (uint)((ulonglong)dVar3 >> 0x20);
        uVar4 = local_10._4_4_ & 0x7ff00000;
        dVar1 = (*(double *)(iVar5 + 0x98) - dVar3) * *(double *)(iVar5 + 0xc0);
        local_10 = dVar3;
        if (uVar4 < 0x3df00000) {
          local_10 = 0.0;
        }
        *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(iVar5 + 0x98);
        *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar5 + 0x9c);
        *(undefined4 *)(iVar5 + 0x98) = (undefined4)local_10;
        *(uint *)(iVar5 + 0x9c) = local_10._4_4_;
      }
      else if (iVar2 == 2) {
        dVar1 = (*(double *)(iVar5 + 0xd8) * *(double *)(iVar5 + 200) +
                dVar1 * *(double *)(iVar5 + 0xf0)) -
                *(double *)(iVar5 + 0xe0) * *(double *)(iVar5 + 0xd0);
        local_10._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        uVar4 = local_10._4_4_ & 0x7ff00000;
        local_10 = dVar1;
        if (uVar4 < 0x3df00000) {
          local_10 = 0.0;
        }
        dVar1 = *(double *)(iVar5 + 0xd0);
        *(undefined4 *)(iVar5 + 0xd0) = *(undefined4 *)(iVar5 + 200);
        *(undefined4 *)(iVar5 + 0xd4) = *(undefined4 *)(iVar5 + 0xcc);
        dVar1 = (local_10 + dVar1) - (*(double *)(iVar5 + 200) + *(double *)(iVar5 + 200));
        *(undefined4 *)(iVar5 + 200) = (undefined4)local_10;
        *(uint *)(iVar5 + 0xcc) = local_10._4_4_;
      }
      dVar3 = dVar1;
      if ((dVar1 <= local_18) && (dVar3 = local_18, local_18 < -dVar1)) {
        dVar3 = -dVar1;
      }
      local_18 = dVar3;
      iVar7 = iVar7 + 1;
      pdVar6 = pdVar6 + 1;
    } while (iVar7 < *(int *)(param_2 + 0x14));
  }
  return (float10)local_18;
}


