/* Module: vidcap30.exe
   Function: FUN_0044ac40
   Address: 0044ac40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044ac40(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  HMENU hMenu;
  BOOL BVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  uint local_48;
  uint local_44;
  int local_40;
  int local_38;
  int local_34;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  int *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar19 = DAT_005bb838;
  if (param_2 == (int *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = *param_2;
  }
  FUN_0042e4f0(DAT_005bb838);
  local_28 = 0;
  bVar12 = false;
  bVar9 = false;
  bVar10 = false;
  bVar8 = false;
  local_2c = 0;
  bVar6 = false;
  local_48 = 0;
  bVar11 = false;
  bVar13 = false;
  local_44 = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(*(HWND *)(param_1 + 0x88),(LPPOINT)&param_3);
  }
  if (local_40 == 0) {
    local_18 = 0x9cc6;
    local_14 = 0x9d58;
    local_10 = 0x9d5a;
    local_c = 0x9d54;
    local_8 = 0x9d80;
    local_4 = 0x9d81;
    hMenu = (HMENU)FUN_00404200(400,0);
    if (hMenu == (HMENU)0x0) {
      return 0x8004e003;
    }
    _SfCullMenu_16(hMenu,&local_18,6,1);
    SendMessageA(*(HWND *)(param_1 + 0x88),0x60e,0,(LPARAM)param_2);
    if ((param_2 != (int *)0x0) && (*param_2 == 1)) {
      local_28 = ~*(uint *)(*(int *)param_2[2] + 0x210) >> 0x12 & 1;
    }
    FUN_0044b400(*(undefined4 *)(param_1 + 0x88),hMenu);
  }
  else {
    local_18 = 0x9d88;
    local_14 = 0x9d56;
    local_10 = 0x9d54;
    local_c = 0x9cc3;
    local_24 = 0x9d82;
    hMenu = (HMENU)FUN_00404200(0x191,0);
    if (hMenu == (HMENU)0x0) {
      return 0x8004e003;
    }
    _SfCullMenu_16(hMenu,&local_18,4,1);
    if ((DAT_005bba70 == (HWND)0x0) || (BVar14 = IsWindow(DAT_005bba70), BVar14 == 0)) {
      _SfCullMenu_16(hMenu,&local_24,1,1);
    }
    local_34 = 0;
    if (0 < local_40) {
      do {
        iVar18 = *(int *)(param_2[2] + local_34 * 4);
        uVar1 = *(undefined4 *)(iVar18 + 0x20c);
        if (local_34 == 0) {
          local_48 = ~*(uint *)(iVar18 + 0x210) >> 0x14 & 1;
          iVar15 = FUN_0044cae0(uVar1);
          if (iVar15 == 4) {
            bVar11 = true;
          }
          else if ((iVar15 == 5) && (iVar15 = FUN_0044c6e0(uVar1), iVar15 != 0)) {
            uVar2 = *(uint *)(iVar15 + 0x38);
            if (((uVar2 & 2) == 0) || (bVar13 = true, (uVar2 & 0x10) != 0)) {
              bVar13 = false;
            }
            bVar11 = true;
            local_2c = uVar2 >> 1 & 1;
            local_44 = ~uVar2 >> 1 & 1;
            if ((uVar2 & 2) == 0) {
              SetMenuDefaultItem(hMenu,0x9d91,0);
            }
            else {
              SetMenuDefaultItem(hMenu,0x9d42,0);
            }
          }
        }
        if ((bVar6) || (bVar6 = false, (*(uint *)(iVar18 + 0x210) & 0x80000) == 0)) {
          bVar6 = true;
        }
        uVar16 = FUN_0044cae0(uVar1);
        switch(uVar16) {
        case 1:
        case 2:
          local_20 = (int *)FUN_0042e4f0(uVar19);
          if (local_20 != (int *)0x0) {
            local_1c = *local_20;
            local_38 = 0;
            if (0 < local_1c) {
              do {
                iVar18 = *(int *)(local_20[2] + local_38 * 4);
                if (iVar18 != 0) {
                  iVar15 = FUN_00443780(iVar18);
                  iVar17 = FUN_004437a0(iVar18);
                  if ((bVar10) ||
                     ((iVar17 < iVar15 && (iVar18 = FUN_00443800(iVar18), iVar18 != 0)))) {
                    bVar10 = true;
                  }
                  else {
                    bVar10 = false;
                  }
                  if ((bVar8) || (0 < iVar17)) {
                    bVar8 = true;
                  }
                  else {
                    bVar8 = false;
                  }
                  if ((bVar9) || (bVar9 = false, 0 < iVar15)) {
                    bVar9 = true;
                  }
                  if ((bVar12) || (0 < iVar15)) {
                    bVar12 = true;
                  }
                  else {
                    bVar12 = false;
                  }
                }
                if ((bVar10) && (bVar8)) goto LAB_0044b1d2;
                local_38 = local_38 + 1;
              } while (local_38 < local_1c);
            }
          }
          break;
        case 3:
          iVar18 = FUN_0044c6a0(uVar1);
          if (iVar18 != 0) {
            iVar15 = FUN_0045f4c0(uVar19,iVar18,1);
            iVar17 = FUN_0045f540(uVar19,iVar18,1);
            if ((bVar9) || (bVar9 = false, 0 < iVar15)) {
              bVar9 = true;
            }
            if ((bVar10) ||
               ((iVar17 < iVar15 && (iVar18 = FUN_0045f5c0(uVar19,iVar18,1), iVar18 != 0)))) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if (bVar8) {
LAB_0044afc0:
              bVar8 = true;
            }
            else {
joined_r0x0044afbe:
              bVar8 = false;
              if (0 < iVar17) goto LAB_0044afc0;
            }
            if ((bVar12) || (0 < iVar15)) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
          }
          break;
        case 4:
          iVar18 = FUN_0044c6c0(uVar1);
          if (iVar18 != 0) {
            iVar15 = FUN_00443780(iVar18);
            iVar17 = FUN_004437a0(iVar18);
            if ((bVar9) || (bVar9 = false, 0 < iVar15)) {
              bVar9 = true;
            }
            if ((bVar10) || ((iVar17 < iVar15 && (iVar18 = FUN_00443800(iVar18), iVar18 != 0)))) {
              bVar10 = true;
            }
            else {
              bVar10 = false;
            }
            if (!bVar8) goto joined_r0x0044afbe;
            goto LAB_0044afc0;
          }
          break;
        case 5:
          iVar18 = FUN_0044c6e0(uVar1);
          if (iVar18 != 0) {
            if ((bVar12) || ((*(byte *)(iVar18 + 0x38) & 2) != 0)) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
            if ((bVar8) || (bVar8 = false, (*(byte *)(iVar18 + 0x38) & 4) != 0)) {
              bVar8 = true;
            }
            if ((bVar10) ||
               (((*(uint *)(iVar18 + 0x38) & 4) == 0 && ((*(uint *)(iVar18 + 0x38) & 0x20) != 0))))
            {
              bVar10 = true;
              bVar9 = true;
            }
            else {
              bVar10 = false;
              bVar9 = true;
            }
          }
        }
        if (bVar8) {
LAB_0044b1d2:
          if ((bVar10) && (bVar9)) break;
        }
        local_34 = local_34 + 1;
      } while (local_34 < local_40);
      if ((local_44 != 0) && (DAT_005bba94 == 0)) {
        bVar7 = true;
        goto LAB_0044ad95;
      }
    }
  }
  bVar7 = false;
LAB_0044ad95:
  if ((!bVar6) || (bVar6 = true, DAT_005bba94 != 0)) {
    bVar6 = false;
  }
  if ((local_48 == 0) || (bVar5 = true, DAT_005bba94 != 0)) {
    bVar5 = false;
  }
  if ((local_2c == 0) || (DAT_005bba94 != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  bVar3 = true;
  if ((!bVar11) || (bVar11 = true, DAT_005bba94 != 0)) {
    bVar11 = false;
  }
  if ((((bVar9) && (DAT_005bba94 == 0)) &&
      (iVar18 = FUN_00435280(*(undefined4 *)(DAT_005ba4c0 + 0x6c),0), iVar18 != 0)) &&
     (iVar18 = FUN_004464b0(*(undefined4 *)(DAT_005ba4c0 + 0x70)), iVar18 != 0)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if ((!bVar10) || (bVar10 = true, DAT_005bba94 != 0)) {
    bVar10 = false;
  }
  if ((!bVar8) || (DAT_005bba94 != 0)) {
    bVar3 = false;
  }
  if ((!bVar12) || (bVar8 = true, DAT_005bba94 != 0)) {
    bVar8 = false;
  }
  if (DAT_005bba30 == 4) {
    bVar9 = false;
    bVar10 = false;
    bVar3 = false;
  }
  EnableMenuItem(hMenu,0x9ccd,(uint)(local_28 == 0));
  EnableMenuItem(hMenu,0x9cc5,(uint)!bVar5);
  EnableMenuItem(hMenu,0x9cc4,(uint)!bVar6);
  EnableMenuItem(hMenu,0x9d42,(uint)!bVar4);
  EnableMenuItem(hMenu,0x9d91,(uint)!bVar7);
  EnableMenuItem(hMenu,0x9d57,(uint)!bVar4);
  EnableMenuItem(hMenu,0x9d82,(uint)!bVar8);
  EnableMenuItem(hMenu,0x9d88,(uint)!bVar9);
  EnableMenuItem(hMenu,0x9d53,(uint)!bVar10);
  EnableMenuItem(hMenu,0x9cd0,(uint)!bVar3);
  EnableMenuItem(hMenu,0x9d52,(uint)!bVar11);
  EnableMenuItem(hMenu,0x9d56,(uint)!bVar13);
  uVar19 = FUN_00404270(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2);
  FUN_00447580(param_1,uVar19,0x1fd,*(undefined4 *)(param_1 + 0x88));
  return 0;
}


