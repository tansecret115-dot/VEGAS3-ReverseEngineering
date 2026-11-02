/* Module: mp3plug.dll
   Function: FUN_5f6d5b90
   Address: 5f6d5b90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_5f6d5b90(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  if ((DAT_5f7529a4 == 0) || ((((uint)param_1 | (uint)param_2) & 0xf) != 0)) {
    for (uVar8 = param_3 & 0x3fffffff; uVar8 != 0; uVar8 = uVar8 - 1) {
      *param_2 = *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
      *(undefined1 *)param_2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  else {
    uVar8 = 0;
    if (0 < (int)(param_3 & 0xfffffff8)) {
      do {
        puVar11 = param_1 + uVar8;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar3 = puVar11[3];
        puVar12 = param_1 + uVar8 + 4;
        uVar4 = *puVar12;
        uVar5 = puVar12[1];
        uVar6 = puVar12[2];
        uVar7 = puVar12[3];
        puVar12 = param_2 + uVar8;
        *puVar12 = *puVar11;
        puVar12[1] = uVar1;
        puVar12[2] = uVar2;
        puVar12[3] = uVar3;
        puVar11 = param_2 + uVar8 + 4;
        *puVar11 = uVar4;
        puVar11[1] = uVar5;
        puVar11[2] = uVar6;
        puVar11[3] = uVar7;
        uVar8 = uVar8 + 8;
      } while ((int)uVar8 < (int)(param_3 & 0xfffffff8));
    }
    if (uVar8 != param_3) {
      puVar11 = param_1 + uVar8;
      puVar12 = param_2 + uVar8;
      for (uVar9 = param_3 - uVar8 & 0x3fffffff; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
    }
  }
  return;
}


