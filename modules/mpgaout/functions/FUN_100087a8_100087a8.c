/* Module: mpgaout.dll
   Function: FUN_100087a8
   Address: 100087a8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100087a8(int param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  int local_14;
  int local_10;
  
  iVar4 = 2;
  local_10 = -1;
  local_14 = -1;
  *param_2 = -1;
  pdVar6 = (double *)(param_1 + 0x30);
  do {
    dVar10 = *pdVar6;
    dVar9 = pdVar6[-3];
    if ((0x3f < (byte)((dVar10 < dVar9 |
                        (byte)((ushort)((ushort)(NAN(dVar10) || NAN(dVar9)) << 10) >> 8) |
                       (byte)((ushort)((ushort)(dVar10 == dVar9) << 0xe) >> 8)) - 1)) &&
       (dVar9 = pdVar6[3],
       (byte)(dVar10 < dVar9 | (byte)((ushort)((ushort)(NAN(dVar10) || NAN(dVar9)) << 10) >> 8) |
             (byte)((ushort)((ushort)(dVar10 == dVar9) << 0xe) >> 8)) != 1)) {
      *(undefined4 *)(pdVar6 + 1) = 0x14;
      *(undefined4 *)((int)pdVar6 + 0xc) = 0xffffffff;
      if (local_10 == -1) {
        *param_2 = iVar4;
        local_10 = iVar4;
      }
      else {
        *(int *)(param_1 + 0xc + local_10 * 0x18) = iVar4;
        local_10 = iVar4;
      }
    }
    pdVar6 = pdVar6 + 3;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 500);
  local_10 = -1;
  iVar4 = *param_2;
  *param_2 = -1;
  do {
    iVar8 = iVar4;
    if (iVar8 == -1) {
      return;
    }
    iVar4 = 0;
    if ((((iVar8 - 3U < 0x1f2) && (iVar4 = 2, 0x3e < iVar8)) && (iVar4 = 3, 0x7e < iVar8)) &&
       (iVar4 = 0xc, iVar8 < 0xff)) {
      iVar4 = 6;
    }
    dVar10 = *(double *)(param_1 + iVar8 * 0x18) - _DAT_10008788;
    for (iVar5 = 2; iVar5 <= iVar4; iVar5 = iVar5 + 1) {
      dVar9 = *(double *)(param_1 + (iVar8 - iVar5) * 0x18);
      if (((byte)(dVar10 < dVar9 | (byte)((ushort)((ushort)(NAN(dVar10) || NAN(dVar9)) << 10) >> 8)
                 | (byte)((ushort)((ushort)(dVar10 == dVar9) << 0xe) >> 8)) == 1) ||
         (dVar10 < *(double *)(param_1 + (iVar5 + iVar8) * 0x18))) {
        *(undefined4 *)(param_1 + 8 + iVar8 * 0x18) = 0;
        break;
      }
    }
    iVar5 = iVar8 * 0x18;
    if (*(int *)(param_1 + 8 + iVar5) == 0x14) {
      if (*param_2 == -1) {
        *param_2 = iVar8;
      }
      iVar5 = *(int *)(param_1 + 0xc + iVar5);
      iVar7 = iVar8;
      while ((iVar5 != -1 && (iVar5 - iVar8 <= iVar4))) {
        iVar7 = *(int *)(param_1 + 0xc + iVar7 * 0x18);
        iVar5 = *(int *)(param_1 + 0xc + iVar7 * 0x18);
      }
      *(undefined4 *)(param_1 + 0xc + iVar8 * 0x18) = *(undefined4 *)(param_1 + 0xc + iVar7 * 0x18);
      if ((iVar8 - local_10 <= iVar4) && (local_14 != -1)) {
        *(int *)(param_1 + 0xc + local_14 * 0x18) = iVar8;
      }
      if (iVar8 - 2U < 0x1f2) {
        pdVar6 = (double *)(param_1 + iVar8 * 0x18);
        dVar10 = pdVar6[3];
        dVar9 = exp(_DAT_10008790 * pdVar6[-3]);
        dVar10 = exp(dVar10 * _DAT_10008790);
        dVar10 = log10(dVar9 + dVar10);
        dVar10 = dVar10 * _DAT_10008798;
        dVar9 = exp(_DAT_10008790 * *pdVar6);
        dVar10 = exp(dVar10 * _DAT_10008790);
        dVar10 = log10(dVar9 + dVar10);
        *pdVar6 = dVar10 * _DAT_10008798;
      }
      uVar3 = _DAT_100087a0;
      if (iVar4 != 0) {
        puVar1 = (undefined8 *)(param_1 + iVar8 * 0x18);
        puVar2 = puVar1;
        do {
          puVar1[3] = uVar3;
          puVar2[-3] = uVar3;
          *(undefined4 *)((int)puVar1 + 0x24) = 0xffffff9c;
          *(undefined4 *)((int)puVar2 + -0xc) = 0xffffff9c;
          *(undefined4 *)(puVar1 + 4) = 0;
          *(undefined4 *)(puVar2 + -2) = 0;
          iVar4 = iVar4 + -1;
          puVar1 = puVar1 + 3;
          puVar2 = puVar2 + -3;
        } while (iVar4 != 0);
      }
      local_14 = local_10;
      iVar4 = *(int *)(param_1 + 0xc + iVar8 * 0x18);
      local_10 = iVar8;
    }
    else {
      if (local_10 != -1) {
        *(undefined4 *)(param_1 + 0xc + local_10 * 0x18) = *(undefined4 *)(param_1 + 0xc + iVar5);
      }
      iVar4 = *(int *)(param_1 + 0xc + iVar5);
      *(undefined4 *)(param_1 + 0xc + iVar8 * 0x18) = 0xffffff9c;
    }
  } while( true );
}


