/* Module: rnco3260.dll
   Function: FUN_637178c0
   Address: 637178c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_637178c0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,int param_8,int param_9,undefined4 param_10,undefined *param_11,
            undefined *param_12)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *local_8;
  
  uVar1 = param_5 * param_2;
  iVar10 = param_3 >> 1;
  iVar2 = (param_3 * 2 - iVar10) / (param_8 * 2);
  if (param_3 == 0) {
    return;
  }
  (*(code *)param_11)(param_1,param_2,param_6,param_7);
  puVar3 = param_1;
  puVar6 = (undefined4 *)(param_3 - iVar2);
  if ((undefined4 *)(param_3 - iVar2) != (undefined4 *)0x0) {
    do {
      param_1 = puVar6;
      param_6 = param_9 + param_6;
      local_8 = puVar3;
      while( true ) {
        puVar3 = (undefined4 *)((int)puVar3 + param_4);
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar7 = local_8;
        puVar6 = local_8;
        if (param_1 == (undefined4 *)0x0) goto joined_r0x63717a2d;
        iVar10 = iVar10 + param_8 * -2;
        if (iVar10 < 0) break;
        puVar6 = local_8;
        puVar7 = puVar3;
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        local_8 = (undefined4 *)((int)local_8 + param_4);
        for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      iVar10 = iVar10 + param_3;
      do {
        puVar7 = (undefined4 *)((int)puVar7 + param_4);
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar3 = local_8;
        if (param_1 == (undefined4 *)0x0) goto joined_r0x63717a21;
        iVar10 = iVar10 + param_8 * -2;
      } while (-1 < iVar10);
      iVar10 = iVar10 + param_3;
      puVar3 = (undefined4 *)((int)puVar7 + param_4);
      puVar11 = (undefined4 *)((int)local_8 + param_4);
      (*(code *)param_12)(local_8,puVar11,puVar3,param_2,param_6,param_7);
      puVar9 = puVar11;
      while (puVar6 = param_1, puVar9 != puVar7) {
        puVar11 = (undefined4 *)((int)puVar11 + param_4);
        puVar4 = (undefined4 *)((int)puVar9 + param_4);
        puVar6 = puVar11;
        for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 1;
        }
        puVar8 = puVar9;
        for (uVar5 = uVar1 & 3; puVar9 = puVar4, uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
    } while( true );
  }
  iVar2 = iVar2 + -1;
  puVar7 = param_1;
  puVar6 = param_1;
joined_r0x63717a2d:
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar3 = puVar7;
    puVar11 = (undefined4 *)((int)puVar6 + param_4);
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar11 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    puVar7 = (undefined4 *)((int)puVar7 + param_4);
    puVar6 = (undefined4 *)((int)puVar6 + param_4);
  }
  return;
joined_r0x63717a21:
  while (puVar6 = puVar7, puVar3 != puVar7) {
    local_8 = (undefined4 *)((int)local_8 + param_4);
    puVar11 = (undefined4 *)((int)puVar3 + param_4);
    puVar6 = local_8;
    for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar9 = puVar3;
    for (uVar5 = uVar1 & 3; puVar3 = puVar11, uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  goto joined_r0x63717a2d;
}


