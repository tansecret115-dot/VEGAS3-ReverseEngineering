/* Module: erv13260.dll
   Function: YUV420toRV10GetDecodedYUVFrames
   Address: 635f18d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
YUV420toRV10GetDecodedYUVFrames(int *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *local_34;
  int *local_30;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
                    /* 0x18d0  9  YUV420toRV10GetDecodedYUVFrames */
  local_8 = *(uint *)(param_4 + 0x4e);
  uVar4 = *(uint *)(param_4 + 0x23cb);
  uVar8 = *(uint *)(param_4 + 0x23cf);
  FUN_635f6910(&local_c,&local_10,&local_14);
  if (*param_3 == 2) {
    if (local_8 == uVar4) {
      uVar1 = uVar8 * uVar4;
      puVar2 = (undefined4 *)*param_1;
      puVar9 = puVar2;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar9 = *local_20;
        local_20 = local_20 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)local_20;
        local_20 = (undefined4 *)((int)local_20 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      uVar8 = (uVar4 >> 1) * (uVar8 >> 1);
      puVar9 = (undefined4 *)((int)puVar2 + uVar1);
      for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *local_24;
        local_24 = local_24 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)local_24;
        local_24 = (undefined4 *)((int)local_24 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + uVar8 + uVar1);
      for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *local_28;
        local_28 = local_28 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)local_28;
        local_28 = (undefined4 *)((int)local_28 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar2 = (undefined4 *)*param_2;
      puVar9 = puVar2;
      for (uVar4 = uVar1 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *local_c;
        local_c = local_c + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar1 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)local_c;
        local_c = (undefined4 *)((int)local_c + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar9 = (undefined4 *)((int)puVar2 + uVar1);
      for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *local_10;
        local_10 = local_10 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + uVar8 + uVar1);
      for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *local_14;
        local_14 = local_14 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)local_14;
        local_14 = (undefined4 *)((int)local_14 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      return 0;
    }
    puVar2 = (undefined4 *)*param_1;
    for (uVar1 = uVar8; uVar1 != 0; uVar1 = uVar1 - 1) {
      puVar9 = local_20;
      puVar10 = puVar2;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar2 = (undefined4 *)((int)puVar2 + uVar4);
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_20 = (undefined4 *)((int)local_20 + local_8);
    }
    iVar6 = uVar8 * uVar4;
    puVar2 = (undefined4 *)(*param_1 + iVar6);
    piVar5 = (int *)(uVar8 >> 1);
    if (piVar5 != (int *)0x0) {
      local_30 = piVar5;
      do {
        puVar9 = local_24;
        puVar10 = puVar2;
        for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        local_24 = (undefined4 *)((int)local_24 + (local_8 >> 1));
        puVar2 = (undefined4 *)((int)puVar2 + (uVar4 >> 1));
        local_30 = (int *)((int)local_30 - 1);
      } while (local_30 != (int *)0x0);
    }
    uVar1 = uVar4 >> 1;
    iVar7 = iVar6 + (int)piVar5 * uVar1;
    puVar2 = (undefined4 *)(*param_1 + iVar7);
    if (piVar5 != (int *)0x0) {
      local_34 = piVar5;
      do {
        puVar9 = local_28;
        puVar10 = puVar2;
        for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        local_28 = (undefined4 *)((int)local_28 + (local_8 >> 1));
        puVar2 = (undefined4 *)((int)puVar2 + uVar1);
        local_34 = (int *)((int)local_34 - 1);
      } while (local_34 != (int *)0x0);
    }
    puVar2 = (undefined4 *)*param_2;
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      puVar9 = local_c;
      puVar10 = puVar2;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_c = (undefined4 *)((int)local_c + local_8);
      puVar2 = (undefined4 *)((int)puVar2 + uVar4);
    }
    puVar2 = (undefined4 *)(*param_1 + iVar6);
    if (piVar5 != (int *)0x0) {
      param_2 = piVar5;
      do {
        puVar9 = local_10;
        puVar10 = puVar2;
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        local_10 = (undefined4 *)((int)local_10 + (local_8 >> 1));
        puVar2 = (undefined4 *)((int)puVar2 + uVar1);
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)(*param_1 + iVar7);
    if (piVar5 != (int *)0x0) {
      param_1 = piVar5;
      do {
        puVar9 = local_14;
        puVar10 = puVar2;
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        local_14 = (undefined4 *)((int)local_14 + (local_8 >> 1));
        puVar2 = (undefined4 *)((int)puVar2 + uVar1);
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
      return 0;
    }
  }
  else if (*param_3 != 0) {
    if (local_8 == uVar4) {
      uVar1 = uVar8 * uVar4;
      puVar2 = (undefined4 *)*param_1;
      puVar9 = puVar2;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar9 = *local_c;
        local_c = local_c + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)local_c;
        local_c = (undefined4 *)((int)local_c + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      uVar8 = (uVar4 >> 1) * (uVar8 >> 1);
      puVar9 = (undefined4 *)((int)puVar2 + uVar1);
      for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar9 = *local_10;
        local_10 = local_10 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar4 = uVar8 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar2 = (undefined4 *)((int)puVar2 + uVar1 + uVar8);
      for (uVar4 = uVar8 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar2 = *local_14;
        local_14 = local_14 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)local_14;
        local_14 = (undefined4 *)((int)local_14 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      return 0;
    }
    puVar2 = (undefined4 *)*param_1;
    for (uVar1 = uVar8; uVar1 != 0; uVar1 = uVar1 - 1) {
      puVar9 = local_c;
      puVar10 = puVar2;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar2 = (undefined4 *)((int)puVar2 + uVar4);
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      local_c = (undefined4 *)((int)local_c + local_8);
    }
    puVar2 = (undefined4 *)(*param_1 + uVar8 * uVar4);
    piVar5 = (int *)(uVar8 >> 1);
    if (piVar5 != (int *)0x0) {
      param_2 = piVar5;
      do {
        puVar9 = local_10;
        puVar10 = puVar2;
        for (uVar1 = uVar4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar1 = uVar4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        local_10 = (undefined4 *)((int)local_10 + (local_8 >> 1));
        puVar2 = (undefined4 *)((int)puVar2 + (uVar4 >> 1));
        param_2 = (undefined4 *)((int)param_2 + -1);
      } while (param_2 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)((int)piVar5 * (uVar4 >> 1) + *param_1 + uVar8 * uVar4);
    if (piVar5 != (int *)0x0) {
      param_1 = piVar5;
      do {
        puVar9 = local_14;
        puVar10 = puVar2;
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar4 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        local_14 = (undefined4 *)((int)local_14 + (local_8 >> 1));
        puVar2 = (undefined4 *)((int)puVar2 + (uVar4 >> 1));
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
    }
  }
  return 0;
}


