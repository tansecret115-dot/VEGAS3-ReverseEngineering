/* Module: vegas30k.dll
   Function: FUN_0114a510
   Address: 0114a510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0114a510(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar2 = *(uint *)((int)param_1 + 0x22);
  do {
    uVar6 = *(uint *)((int)param_1 + 0x62);
    uVar7 = (*(int *)((int)param_1 + 0x32) - uVar6) - *(int *)((int)param_1 + 0x6a);
    if (uVar7 == 0) {
      if ((uVar6 != 0) || (uVar8 = uVar2, *(int *)((int)param_1 + 0x6a) != 0)) {
LAB_0114a545:
        uVar8 = uVar7;
        if (*(int *)((int)param_1 + 0x22) + -0x106 + uVar2 <= uVar6) {
          puVar9 = (undefined4 *)((int)*(undefined4 **)((int)param_1 + 0x2e) + uVar2);
          puVar10 = *(undefined4 **)((int)param_1 + 0x2e);
          for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(uint *)((int)param_1 + 0x66) = *(int *)((int)param_1 + 0x66) - uVar2;
          iVar4 = *(int *)((int)param_1 + 0x42);
          *(uint *)((int)param_1 + 0x62) = *(int *)((int)param_1 + 0x62) - uVar2;
          *(uint *)((int)param_1 + 0x52) = *(int *)((int)param_1 + 0x52) - uVar2;
          puVar5 = (ushort *)(*(int *)((int)param_1 + 0x3a) + iVar4 * 2);
          do {
            puVar5 = puVar5 + -1;
            if (*puVar5 < uVar2) {
              uVar3 = 0;
            }
            else {
              uVar3 = *puVar5 - (short)uVar2;
            }
            iVar4 = iVar4 + -1;
            *puVar5 = uVar3;
          } while (iVar4 != 0);
          puVar5 = (ushort *)(*(int *)((int)param_1 + 0x36) + uVar2 * 2);
          uVar6 = uVar2;
          do {
            puVar5 = puVar5 + -1;
            if (*puVar5 < uVar2) {
              uVar3 = 0;
            }
            else {
              uVar3 = *puVar5 - (short)uVar2;
            }
            uVar6 = uVar6 - 1;
            *puVar5 = uVar3;
          } while (uVar6 != 0);
          uVar8 = uVar7 + uVar2;
        }
      }
    }
    else {
      if (uVar7 != 0xffffffff) goto LAB_0114a545;
      uVar8 = 0xfffffffe;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
    iVar4 = FUN_0114a640(*param_1,*(int *)((int)param_1 + 0x6a) + *(int *)((int)param_1 + 0x62) +
                                  *(int *)((int)param_1 + 0x2e),uVar8);
    uVar6 = *(int *)((int)param_1 + 0x6a) + iVar4;
    *(uint *)((int)param_1 + 0x6a) = uVar6;
    if (2 < uVar6) {
      pbVar1 = (byte *)(*(int *)((int)param_1 + 0x62) + *(int *)((int)param_1 + 0x2e));
      uVar7 = (uint)*pbVar1;
      *(uint *)((int)param_1 + 0x3e) = uVar7;
      *(uint *)((int)param_1 + 0x3e) =
           (uVar7 << ((byte)*(undefined4 *)((int)param_1 + 0x4e) & 0x1f) ^ (uint)pbVar1[1]) &
           *(uint *)((int)param_1 + 0x4a);
    }
    if (0x105 < uVar6) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  } while( true );
}


