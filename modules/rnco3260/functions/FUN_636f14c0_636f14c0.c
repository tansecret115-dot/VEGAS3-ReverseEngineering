/* Module: rnco3260.dll
   Function: FUN_636f14c0
   Address: 636f14c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_636f14c0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4,int param_5,
            undefined1 *param_6,uint param_7,int param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  
  iVar1 = param_3;
  iVar4 = (int)param_6 * param_3;
  if (param_8 != 0) {
    param_3 = param_8;
    puVar8 = (undefined4 *)(param_2 + iVar4 + param_5);
    puVar10 = param_1;
    do {
      puVar6 = puVar8;
      puVar9 = puVar10;
      for (uVar2 = param_7 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar9 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar2 = param_7 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar10 = (undefined4 *)((int)puVar10 + param_9);
      param_3 = param_3 + -1;
      puVar8 = (undefined4 *)((int)puVar8 + iVar1);
    } while (param_3 != 0);
  }
  iVar4 = ((int)(param_6 + ((int)param_6 >> 0x1f & 3)) >> 2) * iVar1;
  puVar3 = param_2 + ((int)(param_5 + (param_5 >> 0x1f & 3U)) >> 2) +
                     ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + param_4 * iVar1;
  iVar7 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  iVar1 = param_4 * iVar7;
  uVar2 = (int)(param_7 + ((int)param_7 >> 0x1f & 3U)) >> 2;
  iVar7 = iVar7 - uVar2;
  puVar8 = (undefined4 *)(param_9 * param_8 + (int)param_1);
  iVar4 = param_9 / 2;
  param_6 = (undefined1 *)((int)puVar8 + iVar4);
  puVar5 = (undefined1 *)((param_8 * iVar4) / 2 + (int)puVar8);
  param_2 = puVar5 + iVar4;
  puVar11 = puVar3 + ((int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  iVar1 = iVar4 * 2 - (int)param_7 / 2;
  param_8 = (int)(param_8 + (param_8 >> 0x1f & 3U)) >> 2;
  if (0 < param_8) {
    do {
      param_7 = uVar2;
      if (0 < (int)uVar2) {
        do {
          *(undefined1 *)puVar8 = *puVar11;
          *(undefined1 *)((int)puVar8 + 1) = *puVar11;
          puVar8 = (undefined4 *)((int)puVar8 + 2);
          *param_6 = *puVar11;
          param_6[1] = *puVar11;
          param_6 = param_6 + 2;
          puVar11 = puVar11 + 1;
          *puVar5 = *puVar3;
          puVar5[1] = *puVar3;
          puVar5 = puVar5 + 2;
          *param_2 = *puVar3;
          param_2[1] = *puVar3;
          param_2 = param_2 + 2;
          puVar3 = puVar3 + 1;
          param_7 = param_7 - 1;
        } while (param_7 != 0);
      }
      puVar11 = puVar11 + iVar7;
      puVar3 = puVar3 + iVar7;
      param_6 = param_6 + iVar1;
      puVar8 = (undefined4 *)((int)puVar8 + iVar1);
      puVar5 = puVar5 + iVar1;
      param_2 = param_2 + iVar1;
      param_8 = param_8 + -1;
    } while (param_8 != 0);
  }
  return 0;
}


