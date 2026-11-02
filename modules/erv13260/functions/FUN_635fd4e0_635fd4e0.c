/* Module: erv13260.dll
   Function: FUN_635fd4e0
   Address: 635fd4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Type propagation algorithm not settling */

void __cdecl
FUN_635fd4e0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_14;
  undefined1 *local_10;
  
  puVar1 = param_3;
  if (0 < param_4) {
    param_3 = (undefined1 *)param_4;
    puVar7 = param_1;
    puVar11 = param_2;
    do {
      puVar6 = puVar7;
      puVar4 = puVar11;
      for (uVar2 = (uint)puVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = (uint)puVar1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar7 = (undefined4 *)((int)puVar7 + (int)puVar1);
      puVar11 = (undefined4 *)((int)puVar11 + (int)(puVar1 + param_5 * 2));
      param_3 = param_3 + -1;
    } while (param_3 != (undefined1 *)0x0);
  }
  puVar8 = (undefined1 *)((int)param_2 + -1);
  if (0 < param_4) {
    param_3 = (undefined1 *)param_4;
    puVar7 = param_1;
    do {
      if (0 < param_5) {
        iVar12 = 0;
        puVar9 = puVar8;
        do {
          iVar3 = iVar12 + 1;
          *puVar9 = *(undefined1 *)puVar7;
          puVar9 = puVar9 + -1;
          (puVar8 + 1 + (int)puVar1)[iVar12] = ((undefined1 *)((int)puVar7 + -1))[(int)puVar1];
          iVar12 = iVar3;
        } while (iVar3 < param_5);
      }
      puVar7 = (undefined4 *)((int)puVar7 + (int)puVar1);
      puVar8 = puVar8 + (int)(puVar1 + param_5 * 2);
      param_3 = param_3 + -1;
    } while (param_3 != (undefined1 *)0x0);
  }
  puVar11 = (undefined4 *)((param_4 + -1) * (int)(puVar1 + param_5 * 2) + (int)param_2);
  puVar7 = (undefined4 *)((int)puVar1 * (param_4 + -1) + (int)param_1);
  if (0 < param_5) {
    puVar8 = (undefined1 *)-(int)param_2;
    local_14 = param_5;
    puVar6 = param_2;
    do {
      puVar6 = (undefined4 *)((int)puVar6 - (int)(puVar1 + param_5 * 2));
      puVar8 = puVar8 + param_5 * 2 + (int)puVar1;
      puVar11 = (undefined4 *)((int)puVar11 + (int)(puVar1 + param_5 * 2));
      if (0 < (int)puVar1) {
        local_10 = puVar1;
        puVar4 = puVar6;
        do {
          *(undefined1 *)puVar4 = ((undefined1 *)((int)param_1 + (int)puVar8))[(int)puVar4];
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          *(undefined1 *)((int)puVar11 + (-1 - (int)puVar6) + (int)puVar4) =
               ((undefined1 *)((int)puVar7 + (int)puVar8) + -1)[(int)puVar4];
          local_10 = local_10 + -1;
        } while (local_10 != (undefined1 *)0x0);
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar12 = (int)param_2 + (param_5 * -2 - (int)puVar1);
  iVar3 = iVar12 + -1;
  param_3 = puVar1 + iVar12;
  puVar8 = (undefined1 *)(param_4 * (int)(puVar1 + param_5 * 2) + -1 + (int)param_2);
  puVar9 = puVar8 + 1 + (int)puVar1;
  if (0 < param_5) {
    local_10 = (undefined1 *)param_5;
    do {
      param_2 = (undefined4 *)param_5;
      puVar5 = puVar8;
      puVar10 = puVar9;
      do {
        (puVar5 + -1)[(iVar3 - (int)puVar8) + 1] = *(undefined1 *)param_1;
        (puVar10 + 1)[(int)(param_3 + (-1 - (int)puVar9))] = (puVar1 + -1)[(int)param_1];
        *puVar5 = *(undefined1 *)puVar7;
        *puVar10 = ((undefined1 *)((int)puVar7 + -1))[(int)puVar1];
        param_2 = (undefined4 *)((int)param_2 + -1);
        puVar5 = puVar5 + -1;
        puVar10 = puVar10 + 1;
      } while (param_2 != (undefined4 *)0x0);
      iVar3 = iVar3 - (int)(puVar1 + param_5 * 2);
      param_3 = param_3 + -(int)(puVar1 + param_5 * 2);
      puVar9 = puVar9 + (int)(puVar1 + param_5 * 2);
      puVar8 = puVar8 + (int)(puVar1 + param_5 * 2);
      local_10 = (undefined1 *)((int)local_10 + -1);
    } while (local_10 != (undefined1 *)0x0);
  }
  return;
}


