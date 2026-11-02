/* Module: erv23260.dll
   Function: FUN_63813fa0
   Address: 63813fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63813fa0(uint param_1,int param_2,uint param_3,uint param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,uint param_9)

{
  undefined2 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int local_28;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  
  local_14 = param_2;
  local_10 = 0;
  local_1c = 0;
  local_20 = 0;
  local_28 = 0;
  uVar2 = (int)param_1 >> 1;
  puVar3 = (uint *)(param_2 >> 1);
  uVar8 = param_3 + 0xf & 0xfffffff0;
  iVar9 = uVar8 - param_3;
  uVar10 = param_3 >> 1;
  iVar6 = (param_4 + 0xf & 0xfffffff0) - param_4;
  uVar11 = (int)uVar8 >> 1;
  uVar7 = uVar11;
  uVar4 = uVar8;
  if (iVar9 == 0) {
    if (iVar6 == 0) {
      FUN_63814450(param_3,param_4,(int)param_5,(int)param_6,(int)param_7,(int)param_8,param_9);
      return;
    }
    local_10 = param_4 - param_2;
    local_1c = param_3 - param_1;
    local_28 = local_1c >> 1;
    local_20 = local_10 >> 1;
    uVar7 = uVar10;
    uVar4 = param_3;
  }
  param_3 = param_9 - uVar4;
  param_2 = param_9 - uVar7;
  if (0 < local_14) {
    uVar4 = param_1;
    do {
      for (; (uVar4 & 0xfffffff0) != 0; uVar4 = uVar4 - 0x10) {
        *param_6 = *param_5;
        param_6[1] = param_5[1];
        puVar5 = param_5 + 3;
        param_6[2] = param_5[2];
        param_5 = param_5 + 4;
        param_6[3] = *puVar5;
        param_6 = param_6 + 4;
      }
      if ((uVar4 & 8) != 0) {
        puVar5 = param_5 + 1;
        *param_6 = *param_5;
        param_5 = param_5 + 2;
        param_6[1] = *puVar5;
        param_6 = param_6 + 2;
      }
      if ((uVar4 & 4) != 0) {
        uVar4 = *param_5;
        param_5 = param_5 + 1;
        *param_6 = uVar4;
        param_6 = param_6 + 1;
      }
      if (iVar9 != 0) {
        uVar4 = (uint)*(byte *)((int)param_6 + -1) << 0x18;
        uVar4 = uVar4 | (((uint)*(byte *)((int)param_6 + -1) << 0x10 | uVar4) >> 8 | uVar4) >> 8;
        *param_6 = uVar4;
        if (iVar9 != 4 && -1 < iVar9 + -4) {
          param_6[1] = uVar4;
        }
        if (iVar9 != 8 && -1 < iVar9 + -8) {
          param_6[2] = uVar4;
        }
        param_6 = (uint *)((int)param_6 + iVar9);
      }
      if (0 < local_1c) {
        uVar7 = local_1c + 3U >> 2;
        puVar5 = param_6;
        for (uVar4 = uVar7; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        param_6 = param_6 + uVar7;
      }
      param_6 = (uint *)((int)param_6 + param_3);
      local_14 = local_14 + -1;
      uVar4 = param_1;
    } while (local_14 != 0);
  }
  if ((iVar6 != 0) && (iVar12 = iVar6, 0 < iVar6)) {
    do {
      puVar5 = (uint *)((int)param_6 - param_9);
      if (0 < (int)uVar8) {
        uVar4 = uVar8 + 3 >> 2;
        do {
          uVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          *param_6 = uVar7;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      param_6 = (uint *)((int)param_6 + param_3);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (0 < local_10) {
    do {
      if (0 < (int)uVar8) {
        uVar7 = uVar8 + 3 >> 2;
        puVar5 = param_6;
        for (uVar4 = uVar7; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        param_6 = param_6 + uVar7;
      }
      param_6 = (uint *)((int)param_6 + param_3);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  uVar4 = uVar2;
  param_6 = puVar3;
  if (0 < (int)puVar3) {
    do {
      for (; (uVar4 & 0xfffffff8) != 0; uVar4 = uVar4 - 8) {
        *param_7 = *param_5;
        param_7[1] = param_5[1];
        param_7 = param_7 + 2;
        param_5 = param_5 + 2;
      }
      if ((uVar4 & 4) != 0) {
        *param_7 = *param_5;
        param_7 = param_7 + 1;
        param_5 = param_5 + 1;
      }
      if ((uVar4 & 2) != 0) {
        *(short *)param_7 = (short)*param_5;
        param_7 = (uint *)((int)param_7 + 2);
        param_5 = (uint *)((int)param_5 + 2);
      }
      if (iVar9 != 0) {
        uVar1 = CONCAT11(*(undefined1 *)((int)param_7 + -1),*(undefined1 *)((int)param_7 + -1));
        *(undefined2 *)param_7 = uVar1;
        puVar5 = (uint *)((int)param_7 + 2);
        if (iVar9 != 4 && -1 < iVar9 + -4) {
          *(undefined2 *)((int)param_7 + 2) = uVar1;
          puVar5 = param_7 + 1;
        }
        param_7 = puVar5;
        if (iVar9 != 8 && -1 < iVar9 + -8) {
          *(undefined2 *)param_7 = uVar1;
          param_7 = (uint *)((int)param_7 + 2);
        }
      }
      if (0 < local_28) {
        uVar7 = local_28 + 3U >> 2;
        puVar5 = param_7;
        for (uVar4 = uVar7; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0x80808080;
          puVar5 = puVar5 + 1;
        }
        param_7 = param_7 + uVar7;
      }
      param_7 = (uint *)((int)param_7 + param_2);
      param_6 = (uint *)((int)param_6 + -1);
      uVar4 = uVar2;
    } while (param_6 != (uint *)0x0);
  }
  uVar4 = iVar6 >> 1;
  if ((iVar6 != 0) && (param_1 = uVar4, 0 < (int)uVar4)) {
    do {
      puVar5 = (uint *)((int)param_7 - param_9);
      if (0 < (int)uVar11) {
        uVar7 = uVar11 + 3 >> 2;
        do {
          uVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          *param_7 = uVar8;
          param_7 = param_7 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_7 = (uint *)((int)param_7 + param_2);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  iVar12 = local_20;
  if (0 < local_20) {
    do {
      if (uVar10 != 0) {
        uVar8 = uVar10 + 3 >> 2;
        puVar5 = param_7;
        for (uVar7 = uVar8; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar5 = 0x80808080;
          puVar5 = puVar5 + 1;
        }
        param_7 = param_7 + uVar8;
      }
      param_7 = (uint *)((int)param_7 + param_2);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  uVar7 = uVar2;
  param_6 = puVar3;
  if (0 < (int)puVar3) {
    do {
      for (; (uVar7 & 0xfffffff8) != 0; uVar7 = uVar7 - 8) {
        *param_8 = *param_5;
        param_8[1] = param_5[1];
        param_8 = param_8 + 2;
        param_5 = param_5 + 2;
      }
      if ((uVar7 & 4) != 0) {
        *param_8 = *param_5;
        param_8 = param_8 + 1;
        param_5 = param_5 + 1;
      }
      if ((uVar7 & 2) != 0) {
        *(short *)param_8 = (short)*param_5;
        param_8 = (uint *)((int)param_8 + 2);
        param_5 = (uint *)((int)param_5 + 2);
      }
      if (iVar9 != 0) {
        uVar1 = CONCAT11(*(undefined1 *)((int)param_8 + -1),*(undefined1 *)((int)param_8 + -1));
        *(undefined2 *)param_8 = uVar1;
        puVar3 = (uint *)((int)param_8 + 2);
        if (iVar9 != 4 && -1 < iVar9 + -4) {
          *(undefined2 *)((int)param_8 + 2) = uVar1;
          puVar3 = param_8 + 1;
        }
        param_8 = puVar3;
        if (iVar9 != 8 && -1 < iVar9 + -8) {
          *(undefined2 *)param_8 = uVar1;
          param_8 = (uint *)((int)param_8 + 2);
        }
      }
      if (0 < local_28) {
        uVar8 = local_28 + 3U >> 2;
        puVar3 = param_8;
        for (uVar7 = uVar8; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar3 = 0x80808080;
          puVar3 = puVar3 + 1;
        }
        param_8 = param_8 + uVar8;
      }
      param_8 = (uint *)((int)param_8 + param_2);
      param_6 = (uint *)((int)param_6 + -1);
      uVar7 = uVar2;
    } while (param_6 != (uint *)0x0);
  }
  if ((iVar6 != 0) && (0 < (int)uVar4)) {
    do {
      puVar3 = (uint *)((int)param_8 - param_9);
      if (0 < (int)uVar11) {
        uVar7 = uVar11 + 3 >> 2;
        do {
          uVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          *param_8 = uVar2;
          param_8 = param_8 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_8 = (uint *)((int)param_8 + param_2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (0 < local_20) {
    do {
      if (uVar10 != 0) {
        uVar7 = uVar10 + 3 >> 2;
        puVar3 = param_8;
        for (uVar4 = uVar7; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar3 = 0x80808080;
          puVar3 = puVar3 + 1;
        }
        param_8 = param_8 + uVar7;
      }
      param_8 = (uint *)((int)param_8 + param_2);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}


