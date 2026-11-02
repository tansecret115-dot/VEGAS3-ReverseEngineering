/* Module: vegas30k.dll
   Function: FUN_0112b640
   Address: 0112b640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0112b640(undefined4 *param_1,void *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 local_26;
  undefined4 local_20;
  undefined4 *local_1c;
  void *local_18;
  undefined4 local_14;
  uint local_8;
  
  iVar4 = param_3;
  local_14 = 0;
  piVar1 = (int *)param_1[7];
  iVar6 = param_1[8];
  uVar10 = 0x800;
  if (piVar1 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar1;
  }
  if ((iVar6 < 0) || (iVar5 + -1 < iVar6)) {
    iVar6 = 0;
  }
  else {
    iVar6 = piVar1[1] * iVar6 + piVar1[2];
  }
  local_18 = param_2;
  memmove(param_2,(void *)(iVar6 + 0xc),8);
  iVar5 = param_1[0x11];
  puVar9 = (undefined4 *)((int)param_2 + 8);
  local_1c = puVar9;
  if (iVar5 != 0) {
    do {
      iVar2 = param_1[0x10];
      uVar7 = *(uint *)(iVar5 + 0x158);
      puVar11 = (undefined4 *)(iVar5 + 0x15c);
      if (iVar2 == 0) {
        uVar3 = *(undefined4 *)(iVar5 + 0x15e);
        local_20 = CONCAT13((char)uVar3,
                            CONCAT12((char)((uint)uVar3 >> 8),
                                     CONCAT11((char)((uint)uVar3 >> 0x10),
                                              (char)((uint)uVar3 >> 0x18))));
        *(undefined4 *)(iVar5 + 0x15e) = local_20;
        local_26 = CONCAT11((char)*(undefined2 *)(iVar5 + 0x162),
                            (char)((ushort)*(undefined2 *)(iVar5 + 0x162) >> 8));
        *(undefined2 *)(iVar5 + 0x162) = local_26;
        if (uVar7 < uVar10) {
          puVar12 = puVar9;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          puVar9 = (undefined4 *)((int)puVar9 + uVar7);
          uVar10 = uVar10 - uVar7;
          for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
        }
        else {
          for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar9 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar9 = puVar9 + 1;
          }
          for (uVar8 = uVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar9 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
          param_2 = (void *)((int)param_2 + 0x91c);
          local_1c = local_1c + 0x247;
          param_3 = param_3 + -0x91c;
          if (param_3 == 0) {
            local_14 = 1;
            param_1[0x10] = uVar10;
            param_1[0x11] = iVar5;
            param_3 = 0;
            goto LAB_0112b856;
          }
          memmove(param_2,(void *)(iVar6 + 0xc),8);
          uVar8 = uVar7 - local_8;
          puVar9 = (undefined4 *)(local_8 + iVar5 + 0x15c);
          puVar11 = local_1c;
          for (uVar10 = uVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          uVar10 = (local_8 - uVar7) + 0x800;
          for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          puVar9 = (undefined4 *)((int)local_1c + uVar8);
          local_18 = param_2;
        }
      }
      else {
        local_8 = uVar7 - iVar2;
        puVar11 = (undefined4 *)((int)puVar11 + iVar2 * 9);
        puVar12 = puVar9;
        for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar9 = (undefined4 *)((int)puVar9 + local_8);
        for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar12 = (undefined4 *)((int)puVar12 + 1);
        }
        uVar10 = uVar10 - local_8;
        param_1[0x10] = 0;
      }
      iVar5 = *(int *)(iVar5 + 0x24);
    } while (iVar5 != 0);
    if (uVar10 == 0) goto LAB_0112b818;
  }
  for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
LAB_0112b818:
  param_3 = param_3 + -0x91c;
  *(undefined1 *)((int)local_18 + 6) = 0x89;
  *(undefined1 *)((int)local_18 + 2) = 0x89;
  param_1[0x11] = *(undefined4 *)(*(int *)*param_1 + 0x34c);
LAB_0112b856:
  *param_4 = iVar4 - param_3;
  return local_14;
}


