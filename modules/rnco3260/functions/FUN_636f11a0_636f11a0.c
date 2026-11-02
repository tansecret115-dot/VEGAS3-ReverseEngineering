/* Module: rnco3260.dll
   Function: FUN_636f11a0
   Address: 636f11a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_636f11a0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7,undefined4 *param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar4 = param_3;
  iVar3 = param_6 * param_3;
  if (param_8 != (undefined4 *)0x0) {
    param_3 = (int)param_8;
    puVar5 = (undefined4 *)(iVar3 + param_5 + param_2);
    puVar8 = param_1;
    do {
      puVar7 = puVar5;
      puVar10 = puVar8;
      for (uVar1 = param_7 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar1 = param_7 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar8 = (undefined4 *)((int)puVar8 + param_9);
      param_3 = param_3 + -1;
      puVar5 = (undefined4 *)((int)puVar5 + iVar4);
    } while (param_3 != 0);
  }
  iVar2 = param_9 * (int)param_8;
  iVar3 = ((param_6 / 2) * iVar4) / 2 + param_4 * iVar4;
  iVar4 = iVar4 / 2;
  iVar6 = param_5 / 2;
  iVar9 = (int)param_8 / 2;
  puVar5 = (undefined4 *)((param_4 * iVar4) / 2 + param_2 + iVar6 + iVar3);
  if (iVar9 != 0) {
    param_5 = iVar9;
    param_8 = (undefined4 *)((int)param_1 + iVar2);
    do {
      puVar8 = puVar5;
      puVar7 = param_8;
      for (uVar1 = (uint)((int)param_7 / 2) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar7 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
      }
      param_8 = (undefined4 *)((int)param_8 + param_9 / 2);
      for (uVar1 = (int)param_7 / 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      puVar5 = (undefined4 *)((int)puVar5 + iVar4);
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  puVar5 = (undefined4 *)((int)param_1 + iVar2 + (param_9 * iVar9) / 2);
  puVar8 = (undefined4 *)(iVar6 + param_2 + iVar3);
  if (iVar9 != 0) {
    iVar3 = param_9 / 2;
    param_9 = iVar9;
    do {
      puVar7 = puVar8;
      puVar10 = puVar5;
      for (uVar1 = (uint)((int)param_7 / 2) >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar10 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar5 = (undefined4 *)((int)puVar5 + iVar3);
      for (uVar1 = (int)param_7 / 2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      puVar8 = (undefined4 *)((int)puVar8 + iVar4);
      param_9 = param_9 + -1;
    } while (param_9 != 0);
  }
  return 0;
}


