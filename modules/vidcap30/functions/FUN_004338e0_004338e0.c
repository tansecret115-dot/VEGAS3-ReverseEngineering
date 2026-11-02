/* Module: vidcap30.exe
   Function: FUN_004338e0
   Address: 004338e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004338e0(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  HMENU hMenu;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar8 = 0;
  if (param_2 == (int *)0x0) {
    local_2c = 0;
  }
  else {
    local_2c = *param_2;
  }
  uVar7 = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  bVar5 = false;
  local_20 = 0;
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(*(HWND *)(param_1 + 0x184),(LPPOINT)&param_3);
  }
  if (local_2c == 0) {
    local_18 = 0x9cc9;
    local_14 = 0x9cca;
    local_10 = 0x9ccb;
    local_c = 0x9d80;
    local_8 = 0x9d81;
    local_4 = 0x9d89;
    hMenu = (HMENU)FUN_00404200(400,0);
    if (hMenu == (HMENU)0x0) {
      return 0x8004e003;
    }
    _SfCullMenu_16(hMenu,&local_18,6,1);
    SendMessageA(*(HWND *)(param_1 + 0x184),0x60e,0,(LPARAM)param_2);
    if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
      uVar1 = *(uint *)(*(int *)param_2[2] + 0x210);
      local_24 = uVar1 & 0x10;
      local_28 = ~uVar1 >> 0x12 & 1;
      if ((local_28 != 0) && ((local_24 != 0 && ((uVar1 & 1) != 0)))) {
        local_28 = 0;
      }
    }
  }
  else {
    local_18 = 0x9d91;
    local_14 = 0x9d53;
    local_10 = 0x9cd0;
    local_c = 0x9d52;
    local_8 = 0;
    hMenu = (HMENU)FUN_00404200(0x191,0);
    if (hMenu == (HMENU)0x0) {
      return 0x8004e003;
    }
    FUN_004177a0(param_2,1,0,0);
    _SfCullMenu_16(hMenu,&local_18,5,1);
    if (0 < local_2c) {
      do {
        iVar2 = *(int *)(param_2[2] + iVar8 * 4);
        if (iVar8 == 0) {
          local_24 = *(uint *)(iVar2 + 0x210) & 0x10;
          uVar7 = ~*(uint *)(iVar2 + 0x210) >> 0x14 & 1;
          local_20 = FUN_0045b2c0(iVar2,DAT_005bba28);
        }
        if ((bVar5) || (bVar5 = false, (*(uint *)(iVar2 + 0x210) & 0x80000) == 0)) {
          bVar5 = true;
        }
        local_1c = FUN_00433c10(*(undefined4 *)(param_1 + 0x184),iVar2);
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_2c);
      if ((bVar5) && (DAT_005bba94 == 0)) {
        bVar5 = true;
        goto LAB_00433b24;
      }
    }
  }
  bVar5 = false;
LAB_00433b24:
  bVar3 = false;
  if ((uVar7 != 0) && (DAT_005bba94 == 0)) {
    bVar3 = true;
  }
  if ((local_20 == 0) || (DAT_005bba94 != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  FUN_00433c70(*(undefined4 *)(param_1 + 0x184),hMenu);
  EnableMenuItem(hMenu,0x9ccd,(uint)(local_28 == 0));
  EnableMenuItem(hMenu,0x9cc5,(uint)!bVar3);
  EnableMenuItem(hMenu,0x9cc4,(uint)!bVar5);
  EnableMenuItem(hMenu,0x9cc3,(uint)(local_1c == 0));
  EnableMenuItem(hMenu,0x9d54,(uint)(local_24 == 0));
  EnableMenuItem(hMenu,0x9d42,(uint)!bVar4);
  EnableMenuItem(hMenu,0x9d57,(uint)!bVar4);
  uVar6 = FUN_00404270(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2);
  FUN_00432b60(param_1,uVar6,0x461,*(undefined4 *)(param_1 + 0x184));
  return 0;
}


