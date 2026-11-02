/* Module: mp3plug.dll
   Function: FUN_5f6c7be0
   Address: 5f6c7be0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6c7be0(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  uVar2 = *(uint *)((int)param_1 + 0x22);
  do {
    uVar4 = *(uint *)((int)param_1 + 0x62);
    uVar6 = (*(int *)((int)param_1 + 0x32) - uVar4) - *(int *)((int)param_1 + 0x6a);
    if (uVar6 == 0) {
      if ((uVar4 != 0) || (uVar7 = uVar2, *(int *)((int)param_1 + 0x6a) != 0)) {
LAB_5f6c7c15:
        uVar7 = uVar6;
        if (*(int *)((int)param_1 + 0x22) + -0x106 + uVar2 <= uVar4) {
          puVar8 = (undefined4 *)((int)*(undefined4 **)((int)param_1 + 0x2e) + uVar2);
          puVar10 = *(undefined4 **)((int)param_1 + 0x2e);
          for (uVar4 = uVar2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar4 = uVar2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(uint *)((int)param_1 + 0x66) = *(int *)((int)param_1 + 0x66) - uVar2;
          iVar9 = *(int *)((int)param_1 + 0x42);
          *(uint *)((int)param_1 + 0x62) = *(int *)((int)param_1 + 0x62) - uVar2;
          *(uint *)((int)param_1 + 0x52) = *(int *)((int)param_1 + 0x52) - uVar2;
          puVar5 = (ushort *)(*(int *)((int)param_1 + 0x3a) + iVar9 * 2);
          do {
            puVar5 = puVar5 + -1;
            if (*puVar5 < uVar2) {
              uVar3 = 0;
            }
            else {
              uVar3 = *puVar5 - (short)uVar2;
            }
            iVar9 = iVar9 + -1;
            *puVar5 = uVar3;
          } while (iVar9 != 0);
          puVar5 = (ushort *)(*(int *)((int)param_1 + 0x36) + uVar2 * 2);
          uVar4 = uVar2;
          do {
            puVar5 = puVar5 + -1;
            if (*puVar5 < uVar2) {
              uVar3 = 0;
            }
            else {
              uVar3 = *puVar5 - (short)uVar2;
            }
            uVar4 = uVar4 - 1;
            *puVar5 = uVar3;
          } while (uVar4 != 0);
          uVar7 = uVar6 + uVar2;
        }
      }
    }
    else {
      if (uVar6 != 0xffffffff) goto LAB_5f6c7c15;
      uVar7 = 0xfffffffe;
    }
    if (((int *)*param_1)[1] == 0) {
      return;
    }
    uVar4 = FUN_5f6c7d10((int *)*param_1,
                         (undefined4 *)
                         (*(int *)((int)param_1 + 0x6a) + *(int *)((int)param_1 + 0x62) +
                         *(int *)((int)param_1 + 0x2e)),uVar7);
    uVar4 = *(int *)((int)param_1 + 0x6a) + uVar4;
    *(uint *)((int)param_1 + 0x6a) = uVar4;
    if (2 < uVar4) {
      pbVar1 = (byte *)(*(int *)((int)param_1 + 0x62) + *(int *)((int)param_1 + 0x2e));
      uVar6 = (uint)*pbVar1;
      *(uint *)((int)param_1 + 0x3e) = uVar6;
      *(uint *)((int)param_1 + 0x3e) =
           (uVar6 << ((byte)*(undefined4 *)((int)param_1 + 0x4e) & 0x1f) ^ (uint)pbVar1[1]) &
           *(uint *)((int)param_1 + 0x4a);
    }
    if (0x105 < uVar4) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  } while( true );
}


