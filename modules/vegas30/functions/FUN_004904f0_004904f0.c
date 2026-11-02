/* Module: vegas30.exe
   Function: FUN_004904f0
   Address: 004904f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004904f0(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint local_250;
  undefined4 local_240;
  undefined4 local_23c;
  ushort local_238 [154];
  undefined1 local_104 [260];
  
  uVar2 = *(uint *)(param_1 + 0xa0 + param_2 * 8);
  if (param_3 < uVar2) {
    iVar4 = param_3 * 0x14;
    *(undefined4 *)(param_1 + 0xf8) =
         *(undefined4 *)(iVar4 + 8 + *(int *)(param_1 + 0x9c + param_2 * 8));
    *(undefined4 *)(param_1 + 0x120) =
         *(undefined4 *)(iVar4 + 0xc + *(int *)(param_1 + 0x9c + param_2 * 8));
    *(undefined4 *)(param_1 + 0x124) =
         *(undefined4 *)(iVar4 + 0x10 + *(int *)(param_1 + 0x9c + param_2 * 8));
    puVar11 = *(undefined4 **)(iVar4 + 4 + *(int *)(param_1 + 0x9c + param_2 * 8));
    puVar12 = *(undefined4 **)(param_1 + 0xf4);
    for (iVar7 = (*(uint *)(param_1 + 0xf8) & 0xfffffff) << 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    return 0;
  }
  if (param_2 == 0) {
    return 0x8000ffff;
  }
  param_3 = param_3 - uVar2;
  uVar2 = param_2 * 0xe - 1;
  if (uVar2 < param_3) {
    return 0x8000ffff;
  }
  param_3 = param_2 * 0xe + -0xe + param_3;
  iVar4 = _SfGetMetricStringEx_24(DAT_00647200,param_3,local_104,0x104,0,1);
  if (iVar4 == 0) {
    return 0x8000ffff;
  }
  iVar4 = _SfGetMetricBinary_16(DAT_00647200,param_3,&local_240,0x13c);
  uVar5 = iVar4 - 8U >> 2;
  *(uint *)(param_1 + 0xf8) = uVar5;
  *(undefined4 *)(param_1 + 0x120) = local_240;
  *(undefined4 *)(param_1 + 0x124) = local_23c;
  iVar4 = *(int *)(param_1 + 0x9c + param_2 * 8);
  uVar9 = *(uint *)(iVar4 + 8);
  uVar13 = param_3;
  if (uVar5 <= uVar9) {
    bVar3 = false;
    local_250 = 0;
    if (uVar5 != 0) {
      iVar7 = 0;
      puVar10 = local_238;
      do {
        uVar1 = *puVar10;
        if ((uint)uVar1 == *(uint *)(param_1 + 0x120)) {
          bVar3 = true;
        }
        uVar5 = 0;
        if (uVar9 != 0) {
          puVar8 = (ushort *)(*(int *)(iVar4 + 4) + 8);
          do {
            if (*puVar8 == uVar1) {
              *(ushort *)(iVar7 + 8 + *(int *)(param_1 + 0xf4)) = uVar1;
              *(ushort *)(iVar7 + *(int *)(param_1 + 0xf4)) = puVar10[1];
              *(undefined2 *)(iVar7 + 4 + *(int *)(param_1 + 0xf4)) =
                   *(undefined2 *)(uVar5 * 0x10 + 4 + *(int *)(iVar4 + 4));
              break;
            }
            uVar5 = uVar5 + 1;
            puVar8 = puVar8 + 8;
          } while (uVar5 < uVar9);
        }
        uVar9 = *(uint *)(iVar4 + 8);
        if (uVar9 <= uVar5) goto joined_r0x0049074f;
        uVar5 = 0;
        if (iVar7 != 0) {
          puVar8 = local_238;
          do {
            if (*puVar10 == *puVar8) goto joined_r0x0049074f;
            uVar5 = uVar5 + 1;
            puVar8 = puVar8 + 2;
          } while (uVar5 < local_250);
        }
        local_250 = local_250 + 1;
        iVar7 = iVar7 + 0x10;
        puVar10 = puVar10 + 2;
      } while (local_250 < *(uint *)(param_1 + 0xf8));
      if (bVar3) {
        return 0;
      }
    }
    if (*(int *)(param_1 + 0x120) == 0) {
      return 0;
    }
  }
joined_r0x0049074f:
  do {
    if (uVar2 < param_3) {
      return 0x8000ffff;
    }
    uVar13 = uVar13 + 1;
    _SfDeleteMetric_12(DAT_00647200,param_3,3);
    _SfDeleteMetric_12(DAT_00647200,param_3,1);
    if (param_3 < uVar2) {
      iVar4 = _SfGetMetricStringEx_24(DAT_00647200,uVar13,local_104,0x104,0,1);
      if (iVar4 == 0) {
        return 0x8000ffff;
      }
      _SfSetMetricString_12(DAT_00647200,param_3,local_104);
      uVar6 = _SfGetMetricBinary_16(DAT_00647200,uVar13,&local_240,0x13c);
      _SfSetMetricBinary_16(DAT_00647200,param_3,&local_240,uVar6);
    }
    param_3 = param_3 + 1;
  } while( true );
}


