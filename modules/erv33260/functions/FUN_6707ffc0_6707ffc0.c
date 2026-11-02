/* Module: erv33260.dll
   Function: FUN_6707ffc0
   Address: 6707ffc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6707ffc0(uint param_1,int param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,int param_9)

{
  undefined2 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_c;
  
  local_24 = 0;
  local_18 = 0;
  local_1c = 0;
  local_c = 0;
  uVar2 = (int)param_1 >> 1;
  puVar3 = (uint *)(param_2 >> 1);
  uVar6 = param_3 >> 1;
  uVar7 = param_3 + 0xf & 0xfffffff0;
  iVar8 = uVar7 - param_3;
  iVar9 = (param_4 + 0xfU & 0xfffffff0) - param_4;
  uVar10 = (int)uVar7 >> 1;
  uVar4 = uVar10;
  uVar11 = uVar7;
  if (iVar8 == 0) {
    local_24 = param_4 - param_2;
    local_18 = param_3 - param_1;
    local_c = local_18 >> 1;
    local_1c = (int)local_24 >> 1;
    uVar4 = uVar6;
    uVar11 = param_3;
  }
  param_4 = param_9 - uVar11;
  param_3 = param_9 - uVar4;
  if (0 < param_2) {
    local_20 = param_2;
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
      if (iVar8 != 0) {
        uVar4 = (uint)*(byte *)((int)param_6 + -1) << 0x18;
        uVar4 = uVar4 | (((uint)*(byte *)((int)param_6 + -1) << 0x10 | uVar4) >> 8 | uVar4) >> 8;
        *param_6 = uVar4;
        if (iVar8 != 4 && -1 < iVar8 + -4) {
          param_6[1] = uVar4;
        }
        if (iVar8 != 8 && -1 < iVar8 + -8) {
          param_6[2] = uVar4;
        }
        param_6 = (uint *)((int)param_6 + iVar8);
      }
      if (0 < local_18) {
        uVar11 = local_18 + 3U >> 2;
        puVar5 = param_6;
        for (uVar4 = uVar11; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        param_6 = param_6 + uVar11;
      }
      param_6 = (uint *)((int)param_6 + param_4);
      local_20 = local_20 + -1;
      uVar4 = param_1;
    } while (local_20 != 0);
  }
  if ((iVar9 != 0) && (iVar12 = iVar9, 0 < iVar9)) {
    do {
      puVar5 = (uint *)((int)param_6 - param_9);
      if (0 < (int)uVar7) {
        uVar4 = uVar7 + 3 >> 2;
        do {
          uVar11 = *puVar5;
          puVar5 = puVar5 + 1;
          *param_6 = uVar11;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      param_6 = (uint *)((int)param_6 + param_4);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (0 < (int)local_24) {
    param_1 = local_24;
    do {
      if (0 < (int)uVar7) {
        uVar11 = uVar7 + 3 >> 2;
        puVar5 = param_6;
        for (uVar4 = uVar11; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        param_6 = param_6 + uVar11;
      }
      param_6 = (uint *)((int)param_6 + param_4);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
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
      if (iVar8 != 0) {
        uVar1 = CONCAT11(*(undefined1 *)((int)param_7 + -1),*(undefined1 *)((int)param_7 + -1));
        *(undefined2 *)param_7 = uVar1;
        puVar5 = (uint *)((int)param_7 + 2);
        if (0 < iVar8 + -4) {
          *(undefined2 *)((int)param_7 + 2) = uVar1;
          puVar5 = param_7 + 1;
        }
        param_7 = puVar5;
        if (iVar8 != 8 && -1 < iVar8 + -8) {
          *(undefined2 *)param_7 = uVar1;
          param_7 = (uint *)((int)param_7 + 2);
        }
      }
      if (0 < local_c) {
        uVar11 = local_c + 3U >> 2;
        puVar5 = param_7;
        for (uVar4 = uVar11; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        param_7 = param_7 + uVar11;
      }
      param_7 = (uint *)((int)param_7 + param_3);
      param_6 = (uint *)((int)param_6 + -1);
      uVar4 = uVar2;
    } while (param_6 != (uint *)0x0);
  }
  uVar4 = iVar9 >> 1;
  if ((iVar9 != 0) && (param_1 = uVar4, 0 < (int)uVar4)) {
    do {
      puVar5 = (uint *)((int)param_7 - param_9);
      if (0 < (int)uVar10) {
        uVar11 = uVar10 + 3 >> 2;
        do {
          uVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          *param_7 = uVar7;
          param_7 = param_7 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      param_7 = (uint *)((int)param_7 + param_3);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  if (0 < (int)local_1c) {
    param_1 = local_1c;
    do {
      if (uVar6 != 0) {
        uVar7 = uVar6 + 3 >> 2;
        puVar5 = param_7;
        for (uVar11 = uVar7; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        param_7 = param_7 + uVar7;
      }
      param_7 = (uint *)((int)param_7 + param_3);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  uVar11 = uVar2;
  param_6 = puVar3;
  if (0 < (int)puVar3) {
    do {
      for (; (uVar11 & 0xfffffff8) != 0; uVar11 = uVar11 - 8) {
        *param_8 = *param_5;
        param_8[1] = param_5[1];
        param_8 = param_8 + 2;
        param_5 = param_5 + 2;
      }
      if ((uVar11 & 4) != 0) {
        *param_8 = *param_5;
        param_8 = param_8 + 1;
        param_5 = param_5 + 1;
      }
      if ((uVar11 & 2) != 0) {
        *(short *)param_8 = (short)*param_5;
        param_8 = (uint *)((int)param_8 + 2);
        param_5 = (uint *)((int)param_5 + 2);
      }
      if (iVar8 != 0) {
        uVar1 = CONCAT11(*(undefined1 *)((int)param_8 + -1),*(undefined1 *)((int)param_8 + -1));
        *(undefined2 *)param_8 = uVar1;
        puVar3 = (uint *)((int)param_8 + 2);
        if (0 < iVar8 + -4) {
          *(undefined2 *)((int)param_8 + 2) = uVar1;
          puVar3 = param_8 + 1;
        }
        param_8 = puVar3;
        if (iVar8 != 8 && -1 < iVar8 + -8) {
          *(undefined2 *)param_8 = uVar1;
          param_8 = (uint *)((int)param_8 + 2);
        }
      }
      if (0 < local_c) {
        uVar7 = local_c + 3U >> 2;
        puVar3 = param_8;
        for (uVar11 = uVar7; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar3 = 0x40404040;
          puVar3 = puVar3 + 1;
        }
        param_8 = param_8 + uVar7;
      }
      param_8 = (uint *)((int)param_8 + param_3);
      param_6 = (uint *)((int)param_6 + -1);
      uVar11 = uVar2;
    } while (param_6 != (uint *)0x0);
  }
  if ((iVar9 != 0) && (0 < (int)uVar4)) {
    do {
      puVar3 = (uint *)((int)param_8 - param_9);
      if (0 < (int)uVar10) {
        uVar11 = uVar10 + 3 >> 2;
        do {
          uVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          *param_8 = uVar2;
          param_8 = param_8 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      param_8 = (uint *)((int)param_8 + param_3);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (0 < (int)local_1c) {
    do {
      if (uVar6 != 0) {
        uVar11 = uVar6 + 3 >> 2;
        puVar3 = param_8;
        for (uVar4 = uVar11; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar3 = 0x40404040;
          puVar3 = puVar3 + 1;
        }
        param_8 = param_8 + uVar11;
      }
      param_8 = (uint *)((int)param_8 + param_3);
      local_1c = local_1c - 1;
    } while (local_1c != 0);
  }
  return;
}


