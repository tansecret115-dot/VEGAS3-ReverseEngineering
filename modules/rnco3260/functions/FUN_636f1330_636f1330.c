/* Module: rnco3260.dll
   Function: FUN_636f1330
   Address: 636f1330
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_636f1330(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,undefined4 *param_8,int param_9)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_8;
  
  puVar5 = (undefined4 *)(param_6 * param_3 + param_5 + param_2);
  if (param_8 != (undefined4 *)0x0) {
    local_8 = param_8;
    puVar1 = param_1;
    do {
      puVar7 = puVar5;
      puVar8 = puVar1;
      for (uVar3 = param_7 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = param_7 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar5 = (undefined4 *)((int)puVar5 + param_3);
      puVar1 = (undefined4 *)((int)puVar1 + param_9);
      local_8 = (undefined4 *)((int)local_8 + -1);
    } while (local_8 != (undefined4 *)0x0);
  }
  iVar4 = param_9 * (int)param_8;
  iVar2 = ((param_6 / 2) * param_3) / 2 + param_4 * param_3;
  iVar6 = (int)param_8 / 2;
  puVar5 = (undefined4 *)(param_2 + param_5 / 2 + iVar2);
  if (iVar6 != 0) {
    param_8 = (undefined4 *)((int)param_1 + iVar4);
    local_8 = (undefined4 *)iVar6;
    do {
      puVar1 = puVar5;
      puVar7 = param_8;
      for (uVar3 = (uint)((int)param_7 / 2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar7 = puVar7 + 1;
      }
      param_8 = (undefined4 *)((int)param_8 + param_9 / 2);
      for (uVar3 = (int)param_7 / 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar1;
        puVar1 = (undefined4 *)((int)puVar1 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar5 = (undefined4 *)((int)puVar5 + param_3 / 2);
      local_8 = (undefined4 *)((int)local_8 + -1);
    } while (local_8 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)((int)param_1 + iVar4 + (param_9 * iVar6) / 2);
  puVar1 = (undefined4 *)((param_4 * (param_3 / 2)) / 2 + param_2 + param_5 / 2 + iVar2);
  if (iVar6 != 0) {
    iVar2 = param_9 / 2;
    param_9 = iVar6;
    do {
      puVar7 = puVar1;
      puVar8 = puVar5;
      for (uVar3 = (uint)((int)param_7 / 2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      puVar5 = (undefined4 *)((int)puVar5 + iVar2);
      for (uVar3 = (int)param_7 / 2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      puVar1 = (undefined4 *)((int)puVar1 + param_3 / 2);
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  return 0;
}


