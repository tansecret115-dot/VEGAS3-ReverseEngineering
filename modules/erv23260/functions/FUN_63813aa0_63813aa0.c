/* Module: erv23260.dll
   Function: FUN_63813aa0
   Address: 63813aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_63813aa0(uint param_1,int param_2,uint param_3,int param_4,uint *param_5,uint *param_6,
            uint *param_7,uint *param_8,int param_9)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
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
  uVar9 = param_3 + 0xf & 0xfffffff0;
  iVar10 = uVar9 - param_3;
  uVar11 = param_3 >> 1;
  iVar7 = (param_4 + 0xfU & 0xfffffff0) - param_4;
  uVar12 = (int)uVar9 >> 1;
  uVar8 = uVar12;
  uVar4 = uVar9;
  if (iVar10 == 0) {
    local_10 = param_4 - param_2;
    local_1c = param_3 - param_1;
    local_28 = local_1c >> 1;
    local_20 = local_10 >> 1;
    uVar8 = uVar11;
    uVar4 = param_3;
  }
  param_3 = param_9 - uVar4;
  param_2 = param_9 - uVar8;
  if (0 < local_14) {
    uVar4 = param_1;
    puVar5 = param_5;
    do {
      for (; (uVar4 & 0xfffffff0) != 0; uVar4 = uVar4 - 0x10) {
        *param_6 = *puVar5 >> 1 & 0x7f7f7f7f;
        param_6[1] = puVar5[1] >> 1 & 0x7f7f7f7f;
        param_6[2] = puVar5[2] >> 1 & 0x7f7f7f7f;
        param_6[3] = puVar5[3] >> 1 & 0x7f7f7f7f;
        param_6 = param_6 + 4;
        puVar5 = puVar5 + 4;
      }
      param_5 = puVar5;
      if ((uVar4 & 8) != 0) {
        param_5 = puVar5 + 2;
        *param_6 = *puVar5 >> 1 & 0x7f7f7f7f;
        param_6[1] = puVar5[1] >> 1 & 0x7f7f7f7f;
        param_6 = param_6 + 2;
      }
      if ((uVar4 & 4) != 0) {
        uVar4 = *param_5;
        param_5 = param_5 + 1;
        *param_6 = uVar4 >> 1 & 0x7f7f7f7f;
        param_6 = param_6 + 1;
      }
      if (iVar10 != 0) {
        uVar4 = (uint)*(byte *)((int)param_6 + -1) << 0x18;
        uVar4 = uVar4 | (((uint)*(byte *)((int)param_6 + -1) << 0x10 | uVar4) >> 8 | uVar4) >> 8;
        *param_6 = uVar4;
        if (iVar10 != 4 && -1 < iVar10 + -4) {
          param_6[1] = uVar4;
        }
        if (iVar10 != 8 && -1 < iVar10 + -8) {
          param_6[2] = uVar4;
        }
        param_6 = (uint *)((int)param_6 + iVar10);
      }
      if (0 < local_1c) {
        uVar8 = local_1c + 3U >> 2;
        puVar5 = param_6;
        for (uVar4 = uVar8; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        param_6 = param_6 + uVar8;
      }
      param_6 = (uint *)((int)param_6 + param_3);
      local_14 = local_14 + -1;
      uVar4 = param_1;
      puVar5 = param_5;
    } while (local_14 != 0);
  }
  if ((iVar7 != 0) && (iVar13 = iVar7, 0 < iVar7)) {
    do {
      puVar5 = (uint *)((int)param_6 - param_9);
      if (0 < (int)uVar9) {
        uVar4 = uVar9 + 3 >> 2;
        do {
          uVar8 = *puVar5;
          puVar5 = puVar5 + 1;
          *param_6 = uVar8;
          param_6 = param_6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      param_6 = (uint *)((int)param_6 + param_3);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  if (0 < local_10) {
    do {
      if (0 < (int)uVar9) {
        uVar8 = uVar9 + 3 >> 2;
        puVar5 = param_6;
        for (uVar4 = uVar8; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        param_6 = param_6 + uVar8;
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
        *param_7 = *param_5 >> 1 & 0x7f7f7f7f;
        param_7[1] = param_5[1] >> 1 & 0x7f7f7f7f;
        param_7 = param_7 + 2;
        param_5 = param_5 + 2;
      }
      puVar5 = param_7;
      if ((uVar4 & 4) != 0) {
        uVar8 = *param_5;
        puVar5 = param_7 + 1;
        param_5 = param_5 + 1;
        *param_7 = uVar8 >> 1 & 0x7f7f7f7f;
      }
      puVar6 = puVar5;
      if ((uVar4 & 2) != 0) {
        uVar4 = *param_5;
        puVar6 = (uint *)((int)puVar5 + 2);
        param_5 = (uint *)((int)param_5 + 2);
        *(ushort *)puVar5 = (ushort)uVar4 >> 1 & 0x7f7f;
      }
      if (iVar10 != 0) {
        uVar1 = CONCAT11(*(undefined1 *)((int)puVar6 + -1),*(undefined1 *)((int)puVar6 + -1));
        *(ushort *)puVar6 = uVar1;
        puVar5 = (uint *)((int)puVar6 + 2);
        if (iVar10 != 4 && -1 < iVar10 + -4) {
          *(ushort *)((int)puVar6 + 2) = uVar1;
          puVar5 = puVar6 + 1;
        }
        puVar6 = puVar5;
        if (iVar10 != 8 && -1 < iVar10 + -8) {
          *(ushort *)puVar6 = uVar1;
          puVar6 = (uint *)((int)puVar6 + 2);
        }
      }
      if (0 < local_28) {
        uVar8 = local_28 + 3U >> 2;
        puVar5 = puVar6;
        for (uVar4 = uVar8; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        puVar6 = puVar6 + uVar8;
      }
      param_7 = (uint *)((int)puVar6 + param_2);
      param_6 = (uint *)((int)param_6 + -1);
      uVar4 = uVar2;
    } while (param_6 != (uint *)0x0);
  }
  uVar4 = iVar7 >> 1;
  if ((iVar7 != 0) && (param_1 = uVar4, 0 < (int)uVar4)) {
    do {
      puVar5 = (uint *)((int)param_7 - param_9);
      if (0 < (int)uVar12) {
        uVar8 = uVar12 + 3 >> 2;
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          *param_7 = uVar9;
          param_7 = param_7 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      param_7 = (uint *)((int)param_7 + param_2);
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  iVar13 = local_20;
  if (0 < local_20) {
    do {
      if (uVar11 != 0) {
        uVar9 = uVar11 + 3 >> 2;
        puVar5 = param_7;
        for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar5 = 0x40404040;
          puVar5 = puVar5 + 1;
        }
        param_7 = param_7 + uVar9;
      }
      param_7 = (uint *)((int)param_7 + param_2);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  uVar8 = uVar2;
  param_6 = puVar3;
  if (0 < (int)puVar3) {
    do {
      for (; (uVar8 & 0xfffffff8) != 0; uVar8 = uVar8 - 8) {
        *param_8 = *param_5 >> 1 & 0x7f7f7f7f;
        param_8[1] = param_5[1] >> 1 & 0x7f7f7f7f;
        param_8 = param_8 + 2;
        param_5 = param_5 + 2;
      }
      puVar3 = param_8;
      if ((uVar8 & 4) != 0) {
        uVar9 = *param_5;
        puVar3 = param_8 + 1;
        param_5 = param_5 + 1;
        *param_8 = uVar9 >> 1 & 0x7f7f7f7f;
      }
      puVar5 = puVar3;
      if ((uVar8 & 2) != 0) {
        uVar8 = *param_5;
        puVar5 = (uint *)((int)puVar3 + 2);
        param_5 = (uint *)((int)param_5 + 2);
        *(ushort *)puVar3 = (ushort)uVar8 >> 1 & 0x7f7f;
      }
      if (iVar10 != 0) {
        uVar1 = CONCAT11(*(undefined1 *)((int)puVar5 + -1),*(undefined1 *)((int)puVar5 + -1));
        *(ushort *)puVar5 = uVar1;
        puVar3 = (uint *)((int)puVar5 + 2);
        if (iVar10 != 4 && -1 < iVar10 + -4) {
          *(ushort *)((int)puVar5 + 2) = uVar1;
          puVar3 = puVar5 + 1;
        }
        puVar5 = puVar3;
        if (iVar10 != 8 && -1 < iVar10 + -8) {
          *(ushort *)puVar5 = uVar1;
          puVar5 = (uint *)((int)puVar5 + 2);
        }
      }
      if (0 < local_28) {
        uVar9 = local_28 + 3U >> 2;
        puVar3 = puVar5;
        for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar3 = 0x40404040;
          puVar3 = puVar3 + 1;
        }
        puVar5 = puVar5 + uVar9;
      }
      param_8 = (uint *)((int)puVar5 + param_2);
      param_6 = (uint *)((int)param_6 + -1);
      uVar8 = uVar2;
    } while (param_6 != (uint *)0x0);
  }
  if ((iVar7 != 0) && (0 < (int)uVar4)) {
    do {
      puVar3 = (uint *)((int)param_8 - param_9);
      if (0 < (int)uVar12) {
        uVar8 = uVar12 + 3 >> 2;
        do {
          uVar2 = *puVar3;
          puVar3 = puVar3 + 1;
          *param_8 = uVar2;
          param_8 = param_8 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      param_8 = (uint *)((int)param_8 + param_2);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (0 < local_20) {
    do {
      if (uVar11 != 0) {
        uVar8 = uVar11 + 3 >> 2;
        puVar3 = param_8;
        for (uVar4 = uVar8; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar3 = 0x40404040;
          puVar3 = puVar3 + 1;
        }
        param_8 = param_8 + uVar8;
      }
      param_8 = (uint *)((int)param_8 + param_2);
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  return;
}


