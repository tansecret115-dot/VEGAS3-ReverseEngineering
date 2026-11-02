/* Module: vidcap30.exe
   Function: FUN_0044b510
   Address: 0044b510
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044b510(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  HMENU hMenu;
  BOOL BVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint local_2c;
  uint local_28;
  uint local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar15 = DAT_005bb838;
  bVar1 = false;
  bVar5 = false;
  bVar2 = false;
  local_28 = 0;
  local_2c = 0;
  bVar6 = false;
  local_20 = 0;
  bVar3 = false;
  bVar9 = false;
  local_10 = 0x9d88;
  local_c = 0x9cc3;
  local_8 = 0x9d54;
  local_4 = 0;
  local_1c = 0x9d82;
  *(undefined4 *)(param_1 + 0x8c) = 1;
  if ((param_3 == 0) && (param_4 == 0)) {
    param_3 = 4;
    param_4 = 4;
    ClientToScreen(*(HWND *)(param_1 + 0x88),(LPPOINT)&param_3);
  }
  hMenu = (HMENU)FUN_00404200(0x18e,0);
  if (hMenu == (HMENU)0x0) {
    return 0x8004e003;
  }
  iVar14 = **(int **)(param_2 + 8);
  uVar16 = 0;
  _SfCullMenu_16(hMenu,&local_10,4,1);
  if ((DAT_005bba70 == (HWND)0x0) || (BVar10 = IsWindow(DAT_005bba70), BVar10 == 0)) {
    _SfCullMenu_16(hMenu,&local_1c,1,1);
  }
  if (iVar14 != 0) {
    uVar16 = *(undefined4 *)(iVar14 + 0x20c);
    uVar11 = ~*(uint *)(iVar14 + 0x210);
    local_28 = uVar11 >> 0x13 & 1;
    local_2c = uVar11 >> 0x14 & 1;
    local_20 = uVar11 >> 0x12 & 1;
  }
  uVar12 = FUN_0044cae0(uVar16);
  switch(uVar12) {
  case 1:
  case 2:
    local_18 = (int *)FUN_0042e4f0(uVar15);
    if (local_18 != (int *)0x0) {
      local_14 = *local_18;
      param_2 = 0;
      if (0 < local_14) {
        do {
          iVar14 = *(int *)(local_18[2] + param_2 * 4);
          if (iVar14 != 0) {
            iVar17 = FUN_00443780(iVar14);
            iVar13 = FUN_004437a0(iVar14);
            if ((bVar1) || (bVar1 = false, 0 < iVar17)) {
              bVar1 = true;
            }
            if ((bVar5) || ((iVar13 < iVar17 && (iVar14 = FUN_00443800(iVar14), iVar14 != 0)))) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar2) || (bVar2 = false, 0 < iVar13)) {
              bVar2 = true;
            }
            if ((bVar3) || (bVar3 = false, 0 < iVar17)) {
              bVar3 = true;
            }
          }
        } while ((((!bVar5) || (!bVar2)) || (!bVar1)) && (param_2 = param_2 + 1, param_2 < local_14)
                );
      }
    }
    break;
  case 3:
    iVar14 = FUN_0044c6a0(uVar16);
    if (iVar14 != 0) {
      iVar17 = FUN_0045f4c0(uVar15,iVar14,1);
      iVar13 = FUN_0045f540(uVar15,iVar14,1);
      bVar1 = 0 < iVar17;
      if ((iVar13 < iVar17) && (iVar14 = FUN_0045f5c0(uVar15,iVar14,1), iVar14 != 0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      bVar2 = 0 < iVar13;
      bVar3 = 0 < iVar17;
    }
    break;
  case 4:
    iVar14 = FUN_0044c6c0(uVar16);
    if (iVar14 == 0) break;
    bVar6 = true;
    iVar17 = FUN_00443780(iVar14);
    iVar13 = FUN_004437a0(iVar14);
    bVar1 = 0 < iVar17;
    if (iVar13 < iVar17) {
      iVar14 = FUN_00443800(iVar14);
      bVar5 = true;
      if (iVar14 == 0) goto LAB_0044b692;
    }
    else {
LAB_0044b692:
      bVar5 = false;
    }
    bVar2 = 0 < iVar13;
    bVar3 = bVar1;
    break;
  case 7:
    bVar9 = true;
    iVar14 = FUN_0044c620(uVar16);
    iVar17 = 0;
    if (0 < iVar14) {
      bVar5 = false;
      do {
        uVar15 = FUN_0044c5c0(uVar16,iVar17);
        iVar13 = FUN_0044c6e0(uVar15);
        if (iVar13 != 0) {
          if ((bVar5) || ((*(byte *)(iVar13 + 0x38) & 0x20) != 0)) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if ((bVar2) || (bVar2 = false, (*(byte *)(iVar13 + 0x38) & 4) != 0)) {
            bVar2 = true;
          }
          if ((bVar3) || (bVar3 = false, (*(byte *)(iVar13 + 0x38) & 2) != 0)) {
            bVar3 = true;
          }
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar14);
    }
  }
  if ((local_28 == 0) || (DAT_005bba94 != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  bVar4 = true;
  if ((local_2c == 0) || (bVar7 = true, DAT_005bba94 != 0)) {
    bVar7 = false;
  }
  if ((!bVar6) || (bVar6 = true, DAT_005bba94 != 0)) {
    bVar6 = false;
  }
  if ((((bVar1) && (DAT_005bba94 == 0)) &&
      (iVar14 = FUN_00435280(*(undefined4 *)(DAT_005ba4c0 + 0x6c),0), iVar14 != 0)) &&
     (iVar14 = FUN_004464b0(*(undefined4 *)(DAT_005ba4c0 + 0x70)), iVar14 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((!bVar5) || (bVar5 = true, DAT_005bba94 != 0)) {
    bVar5 = false;
  }
  if ((!bVar2) || (DAT_005bba94 != 0)) {
    bVar4 = false;
  }
  if ((bVar9) && (DAT_005bba94 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((bVar3) && (DAT_005bba94 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (DAT_005bba30 == 4) {
    bVar1 = false;
    bVar5 = false;
    bVar4 = false;
  }
  FUN_0044b400(*(undefined4 *)(param_1 + 0x88),hMenu);
  EnableMenuItem(hMenu,0x9d82,(uint)!bVar3);
  EnableMenuItem(hMenu,0x9d88,(uint)!bVar1);
  EnableMenuItem(hMenu,0x9d53,(uint)!bVar5);
  EnableMenuItem(hMenu,0x9cd0,(uint)!bVar4);
  EnableMenuItem(hMenu,0x9d52,(uint)!bVar6);
  EnableMenuItem(hMenu,0x9d8f,(uint)!bVar2);
  EnableMenuItem(hMenu,0x9ccd,(uint)(local_20 == 0));
  EnableMenuItem(hMenu,0x9cc5,(uint)!bVar7);
  EnableMenuItem(hMenu,0x9cc4,(uint)!bVar8);
  uVar15 = FUN_00404270(*(undefined4 *)(param_1 + 8),hMenu,&param_3,2);
  FUN_00447580(param_1,uVar15,0x1fd,*(undefined4 *)(param_1 + 0x88));
  return 0;
}


