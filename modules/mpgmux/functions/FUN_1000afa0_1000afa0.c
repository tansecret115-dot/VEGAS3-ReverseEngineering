/* Module: mpgmux.dll
   Function: FUN_1000afa0
   Address: 1000afa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_1000afa0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint local_4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(iVar1 + 0x2630);
  if ((iVar2 < (int)*(uint *)(iVar1 + 0x2634)) &&
     (*(uint *)(iVar1 + 0x2634) < (uint)(iVar2 + param_3))) {
    return 0;
  }
  local_4 = *(uint *)(iVar1 + 0x2dbc);
  uVar5 = 0;
  if (*(uint *)(iVar1 + 0x2638) < (uint)(iVar2 + param_3)) {
    uVar5 = *(uint *)(iVar1 + 0x2638) - iVar2;
    puVar3 = param_2;
    puVar7 = (undefined4 *)(*(int *)(iVar1 + 0x262c) + iVar2);
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    if (*(uint *)(iVar1 + 0x2634) < param_3 - uVar5) {
      return 0;
    }
    if (local_4 != 0) {
      if (uVar5 < local_4) {
        local_4 = local_4 - uVar5;
      }
      else {
        iVar2 = local_4 + iVar2;
        local_4 = 0;
        *(undefined4 *)(iVar1 + 0x263c + *(int *)(iVar1 + 0x2dc4) * 8) =
             *(undefined4 *)(iVar1 + 0x11cc);
        *(int *)(iVar1 + 0x2640 + *(int *)(iVar1 + 0x2dc4) * 8) = iVar2;
      }
    }
    iVar2 = 0;
  }
  puVar3 = (undefined4 *)((int)param_2 + uVar5);
  puVar7 = (undefined4 *)(*(int *)(iVar1 + 0x262c) + iVar2);
  for (uVar4 = param_3 - uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = param_3 - uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  if (local_4 != 0) {
    *(undefined4 *)(iVar1 + 0x263c + *(int *)(iVar1 + 0x2dc4) * 8) = *(undefined4 *)(iVar1 + 0x11cc)
    ;
    *(uint *)(iVar1 + 0x2640 + *(int *)(iVar1 + 0x2dc4) * 8) = local_4 + iVar2;
  }
  *(uint *)(iVar1 + 0x2630) = (iVar2 - uVar5) + param_3;
  if (*(int *)(iVar1 + 0x2dbc) != 0) {
    iVar2 = *(int *)(iVar1 + 0x2dc4);
    iVar6 = *(int *)(iVar1 + 0x2640 + iVar2 * 8);
    FUN_1000b210(iVar1,iVar6,iVar2 + -1,1);
    FUN_1000b210(iVar1,iVar6 + 6,iVar2 - *(int *)(iVar1 + 0x2dc0),0);
    if (*(int *)(iVar1 + 0x2dc0) < *(int *)(iVar1 + 0x2dc4)) {
      iVar2 = *(int *)(iVar1 + 0x2640);
      FUN_1000b210(iVar1,iVar2 + 3,1,1);
      FUN_1000b210(iVar1,iVar2 + 9,*(int *)(iVar1 + 0x2dc0),0);
      iVar2 = *(int *)(iVar1 + 0x2634);
      if (*(int *)(iVar1 + 0x2648) < iVar2) {
        iVar6 = *(int *)(iVar1 + 0x2638) - iVar2;
        iVar2 = (**(code **)(iVar1 + 0x2628))(param_1,iVar2 + *(int *)(iVar1 + 0x262c),iVar6);
        if (iVar2 != iVar6) {
          return 0;
        }
        iVar2 = *(int *)(iVar1 + 0x2648);
        iVar6 = (**(code **)(iVar1 + 0x2628))(param_1,*(undefined4 *)(iVar1 + 0x262c),iVar2);
        if (iVar6 != iVar2) {
          return 0;
        }
        *(int *)(iVar1 + 0x2634) = iVar2;
      }
      else {
        iVar6 = *(int *)(iVar1 + 0x2648) - iVar2;
        iVar2 = (**(code **)(iVar1 + 0x2628))(param_1,iVar2 + *(int *)(iVar1 + 0x262c),iVar6);
        if (iVar2 != iVar6) {
          return 0;
        }
        *(int *)(iVar1 + 0x2634) = *(int *)(iVar1 + 0x2634) + iVar6;
      }
      uVar5 = 0;
      if (*(int *)(iVar1 + 0x2dc4) != 0) {
        puVar3 = (undefined4 *)(iVar1 + 0x263c);
        do {
          uVar5 = uVar5 + 1;
          *puVar3 = puVar3[2];
          puVar3[1] = puVar3[3];
          puVar3 = puVar3 + 2;
        } while (uVar5 < *(uint *)(iVar1 + 0x2dc4));
        return param_3;
      }
    }
    else {
      *(int *)(iVar1 + 0x2dc4) = *(int *)(iVar1 + 0x2dc4) + 1;
    }
  }
  return param_3;
}


