/* Module: vegas30.exe
   Function: FUN_0048d6a0
   Address: 0048d6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0048d6a0(int *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  WPARAM wParam;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int local_850;
  uint local_84c;
  int local_848;
  uint local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  int local_834;
  int local_830;
  int local_82c;
  int local_828;
  undefined1 *local_824;
  undefined1 local_820 [24];
  undefined4 local_808 [14];
  undefined1 local_7d0 [1000];
  undefined1 local_3e8 [1000];
  
  iVar2 = *param_1;
  uVar8 = 0;
  local_840 = 0;
  local_848 = 0;
  local_844 = 0;
  local_838 = param_3;
  if (param_2[5] == 1) {
    uVar4 = FUN_0048daf0(param_1,param_2,param_3);
    return uVar4;
  }
  do {
    iVar5 = FUN_0048deb0(&local_838,0,0,&local_84c);
    if (iVar5 != 0) {
      uVar8 = uVar8 + 1;
    }
  } while (local_84c == 0);
  if (uVar8 == 0) {
    return 0;
  }
  uVar10 = param_2[2];
  if ((param_2[1] == 0xffff) && (*param_2 == 0xffff)) {
    local_850 = param_2[4];
  }
  else {
    uVar6 = uVar10 + uVar8;
    if (**(uint **)(iVar2 + 0x134) < uVar10 + uVar8) {
      uVar6 = **(uint **)(iVar2 + 0x134);
    }
    local_850 = uVar6 - uVar10;
  }
  local_84c = uVar10;
  local_844 = uVar8;
  SendMessageA(*(HWND *)(iVar2 + 0xdc),0x426,0x18,(LPARAM)local_820);
  uVar4 = *(undefined4 *)(iVar2 + 0x130);
  local_83c = uVar4;
  switch(*(undefined4 *)(iVar2 + 0x94)) {
  case 1:
    FUN_004e9f70(uVar4,0x17,0);
    uVar9 = uVar10 + local_850;
    uVar8 = uVar10;
    uVar10 = local_84c;
    uVar6 = local_84c;
    while (local_84c = uVar10, uVar6 < uVar9) {
      piVar3 = *(int **)(iVar2 + 0x134);
      if (piVar3 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *piVar3;
      }
      if (((int)uVar8 < 0) || (iVar5 + -1 < (int)uVar8)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(piVar3[2] + uVar8 * 4);
      }
      if (iVar5 != 0) {
        FUN_004ea250(uVar4,*(undefined4 *)(iVar5 + 8),1,0);
      }
      uVar8 = uVar8 + 1;
      uVar10 = local_84c;
      uVar6 = uVar8;
    }
    goto LAB_0048d851;
  default:
    goto switchD_0048d791_caseD_2;
  case 3:
    FUN_004e9f70(uVar4,9,0);
    uVar12 = 3;
    break;
  case 4:
    FUN_004e9f70(uVar4,10,0);
    uVar12 = 3;
    break;
  case 5:
    FUN_004e9f70(uVar4,0x41,0);
    uVar12 = 5;
    break;
  case 6:
    FUN_004e9f70(uVar4,0x47,0);
    uVar12 = 7;
    break;
  case 7:
    FUN_004e9f70(uVar4,0x24f,0);
    uVar12 = 9;
  }
  FUN_004ead60(uVar4,0,uVar12);
LAB_0048d851:
  local_848 = 1;
  iVar5 = FUN_0048d440(iVar2,uVar10,local_850);
  if (-1 < iVar5) {
    iVar5 = *(int *)(iVar2 + 0x94);
    if (iVar5 == 1) {
      FUN_004eb2b0(uVar4);
    }
    else if ((2 < iVar5) && (iVar5 < 8)) {
      iVar5 = FUN_0048d640(iVar2);
      local_838 = param_3;
      local_84c = 0;
      local_82c = iVar5;
      if (local_844 != 0) {
        do {
          puVar11 = local_808;
          for (iVar7 = 0xe; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          iVar7 = _SfList_AllocAndInsertItem_20(iVar5,local_808,0x38,0xffffffff,&local_834);
          local_850 = *(int *)(*(int *)(iVar5 + 8) + local_834 * 4);
          _SfList_InsertList_16(*(undefined4 *)(iVar2 + 0x134),0xffffffff,&local_850,1);
          if (iVar7 < 0) {
            *(uint *)**(undefined4 **)(iVar2 + 0x130) =
                 *(uint *)**(undefined4 **)(iVar2 + 0x130) | 0x10000;
            FUN_0048de40(iVar2,iVar5);
            goto switchD_0048d791_caseD_2;
          }
          wParam = **(int **)(iVar2 + 0x134) - 1;
          iVar7 = FUN_0048deb0(&local_838,local_3e8,1000,&local_830);
          if (iVar7 != 0) {
            local_824 = local_3e8;
            iVar7 = 0;
            local_850 = 0;
            while( true ) {
              local_7d0[0] = 0;
              FUN_0048df90(&local_824,local_7d0,1000,&local_828);
              if (local_828 != 0) break;
              uVar1 = *(ushort *)(*(int *)(iVar2 + 0xf4) + 4 + local_850);
              if ((((uVar1 & 0x4000) == 0) ||
                  (iVar5 = (*(code *)param_1[0x10])(param_1,wParam,iVar7,0), iVar5 == 1)) &&
                 ((uVar1 & 0xc000) != 0)) {
                SendMessageA(*(HWND *)(iVar2 + 0xdc),0x41a,0,0);
                SendMessageA(*(HWND *)(iVar2 + 0xdc),0x40f,wParam,iVar7);
                (*(code *)param_1[0x11])(param_1,wParam,iVar7,3,local_7d0);
                local_840 = 6;
              }
              iVar7 = iVar7 + 1;
              local_850 = local_850 + 0x10;
              iVar5 = local_82c;
            }
          }
          uVar4 = local_83c;
        } while ((local_830 == 0) && (local_84c = local_84c + 1, local_84c < local_844));
      }
      FUN_004eb2b0(uVar4);
      FUN_0048de40(iVar2,iVar5);
      local_840 = 6;
      *(uint *)**(undefined4 **)(iVar2 + 0x130) =
           *(uint *)**(undefined4 **)(iVar2 + 0x130) | 0x10000;
      goto switchD_0048d791_caseD_2;
    }
    if (DAT_00647630 != 0) {
      FUN_00469280(DAT_00647630);
    }
  }
switchD_0048d791_caseD_2:
  SendMessageA(*(HWND *)(iVar2 + 0xdc),0x427,0x18,(LPARAM)local_820);
  if ((local_848 != 0) &&
     ((iVar2 = *(int *)(iVar2 + 0x94), iVar2 == 1 || ((2 < iVar2 && (iVar2 < 7)))))) {
    FUN_004ea040(uVar4,0);
  }
  return local_840;
}


