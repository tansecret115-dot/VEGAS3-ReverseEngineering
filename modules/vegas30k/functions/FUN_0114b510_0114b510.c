/* Module: vegas30k.dll
   Function: FUN_0114b510
   Address: 0114b510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0114b510(int param_1,undefined4 *param_2,uint param_3,uint *param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_8;
  
  uVar9 = 0;
  piVar2 = *(int **)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  if ((iVar3 < 0) || (iVar5 + -1 < iVar3)) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = (int *)(piVar2[1] * iVar3 + piVar2[2]);
  }
  piVar2 = (int *)local_1c[2];
  while( true ) {
    if (piVar2 == (int *)0x0) {
      if ((uVar9 & 0x7ff) == 0) {
        *param_4 = uVar9;
        return 0;
      }
      uVar7 = 0x800 - (uVar9 & 0x7ff);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *param_2 = 0;
        param_2 = param_2 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)param_2 = 0;
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      *param_4 = uVar9 + uVar7;
      return 0;
    }
    iVar3 = *local_1c;
    if ((iVar3 == 5) || (iVar3 == 6)) {
      bVar1 = *(byte *)(piVar2 + 0x99);
      iVar5 = (int)piVar2 + 0xe6;
      piVar6 = (int *)((int)piVar2 + 0x265);
    }
    else {
      bVar1 = *(byte *)((int)piVar2 + 0x293);
      iVar5 = (int)piVar2 + 0x12d;
      piVar6 = piVar2 + 0xa5;
    }
    local_8 = (uint)bVar1;
    if (*(int *)(*piVar2 + 0x21c) == 0) {
      if (iVar3 == 5) {
        uVar4 = *(undefined4 *)(param_1 + 0xee);
        local_18 = CONCAT13((char)uVar4,
                            CONCAT12((char)((uint)uVar4 >> 8),
                                     CONCAT11((char)((uint)uVar4 >> 0x10),
                                              (char)((uint)uVar4 >> 0x18))));
        *(undefined4 *)((int)piVar6 + 2) = local_18;
        local_22 = CONCAT11((char)(short)piVar2[2],(char)((ushort)(short)piVar2[2] >> 8));
      }
      else if (iVar3 == 7) {
        uVar4 = *(undefined4 *)(param_1 + 0x8ee);
        local_14 = CONCAT13((char)uVar4,
                            CONCAT12((char)((uint)uVar4 >> 8),
                                     CONCAT11((char)((uint)uVar4 >> 0x10),
                                              (char)((uint)uVar4 >> 0x18))));
        *(undefined4 *)((int)piVar6 + 2) = local_14;
        local_20 = CONCAT11((char)(short)piVar2[2],(char)((ushort)(short)piVar2[2] >> 8));
        local_22 = local_20;
      }
      else if (iVar3 == 6) {
        *(undefined4 *)((int)piVar6 + 2) = *(undefined4 *)(param_1 + 0xee);
        local_22 = (undefined2)piVar2[2];
      }
      else {
        *(undefined4 *)((int)piVar6 + 2) = *(undefined4 *)(param_1 + 0x8ee);
        local_22 = (undefined2)piVar2[2];
      }
    }
    else if ((iVar3 == 5) || (iVar3 == 7)) {
      uVar4 = *(undefined4 *)(iVar5 + 2);
      local_10 = CONCAT13((char)uVar4,
                          CONCAT12((char)((uint)uVar4 >> 8),
                                   CONCAT11((char)((uint)uVar4 >> 0x10),(char)((uint)uVar4 >> 0x18))
                                  ));
      *(undefined4 *)((int)piVar6 + 2) = local_10;
      local_1e = CONCAT11((char)(short)piVar2[2],(char)((ushort)(short)piVar2[2] >> 8));
      local_22 = local_1e;
    }
    else {
      *(undefined4 *)((int)piVar6 + 2) = *(undefined4 *)(iVar5 + 2);
      local_22 = (undefined2)piVar2[2];
    }
    *(undefined2 *)((int)piVar6 + 6) = local_22;
    uVar7 = local_8 - *(int *)(param_1 + 0x30);
    uVar8 = param_3;
    if (uVar7 < param_3) {
      uVar8 = uVar7;
    }
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0x30) + (int)piVar6);
    puVar11 = param_2;
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    param_3 = param_3 - uVar8;
    for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    param_2 = (undefined4 *)((int)param_2 + uVar8);
    uVar9 = uVar9 + uVar8;
    if (*(int *)(param_1 + 0x30) + uVar8 != local_8) break;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((*local_1c == 5) || (*local_1c == 6)) {
      piVar2 = (int *)piVar2[0xb];
    }
    else {
      piVar2 = (int *)piVar2[0xc];
    }
  }
  *(uint *)(param_1 + 0x30) = uVar8;
  local_1c[2] = (int)piVar2;
  *param_4 = uVar9;
  return 1;
}


