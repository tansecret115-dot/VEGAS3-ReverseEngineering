/* Module: vegas30.exe
   Function: FUN_00558ba0
   Address: 00558ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00558ba0(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  LONG LVar2;
  int iVar3;
  HWND pHVar4;
  uint uVar5;
  UINT UVar6;
  LRESULT LVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  WPARAM wParam;
  LPARAM lParam;
  
  uVar8 = 0;
  LVar2 = GetWindowLongA(param_1,8);
  if (LVar2 == 0) {
    if (param_2 != 0x110) {
      return 0;
    }
    uVar8 = FUN_005598f0(param_1,param_3,param_4[7].unused);
    return uVar8;
  }
  puVar1 = (undefined4 *)(LVar2 + 0x10);
  if (param_2 < 0x54) {
    if (param_2 == 0x53) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,param_4[2].unused,&DAT_006452c8,0);
      return 1;
    }
    if (param_2 == 2) {
      *puVar1 = 0;
      return 1;
    }
    if (param_2 != 0x4e) {
      return 0;
    }
    iVar3 = param_4[2].unused;
    if (iVar3 != -0xcb) {
      if (iVar3 == -0xca) {
        FUN_00559c40(puVar1);
        iVar3 = FUN_0055a0a0(puVar1);
        if (iVar3 < 0) {
          SetWindowLongA(param_1,0,1);
          return 1;
        }
        SetWindowLongA(param_1,0,0);
        return 1;
      }
      if (iVar3 != -0xc9) {
        return 0;
      }
      SetWindowLongA(param_1,0,0);
      return 0;
    }
LAB_00558d80:
    FUN_00559c40(puVar1);
    return uVar8;
  }
  if (param_2 != 0x111) {
    if (param_2 != 0x115) {
      return 0;
    }
    iVar3 = GetDlgCtrlID(param_4);
    if (*(int *)(LVar2 + 0x130) != 1) {
      if (*(int *)(LVar2 + 0x130) != 2) {
        return 0;
      }
      if (iVar3 == 0xe76) {
        uVar10 = 0x18;
        iVar3 = LVar2 + 0x18;
        uVar8 = 0xffffffe8;
        iVar9 = 0xe79;
      }
      else {
        if (iVar3 != 0xe7f) {
          return 0;
        }
        uVar10 = 100;
        iVar3 = LVar2 + 0x1c;
        uVar8 = 0xffffff9c;
        iVar9 = 0xe7e;
      }
      pHVar4 = GetDlgItem(param_1,iVar9);
      uVar8 = FUN_00559f90(puVar1,pHVar4,iVar3,uVar8,uVar10,param_3,param_4);
      FUN_00558630(puVar1,1);
      FUN_00559c40(puVar1);
      return uVar8;
    }
    if (iVar3 == 0xe74) {
      uVar10 = 0x18;
      iVar3 = LVar2 + 0x18;
      uVar8 = 0xffffffe8;
      iVar9 = 0xe77;
    }
    else {
      if (iVar3 != 0xe75) {
        return 0;
      }
      uVar10 = 100;
      iVar3 = LVar2 + 0x1c;
      uVar8 = 0xffffff9c;
      iVar9 = 0xe78;
    }
    pHVar4 = GetDlgItem(param_1,iVar9);
    uVar8 = FUN_00559f90(puVar1,pHVar4,iVar3,uVar8,uVar10,param_3,param_4);
    FUN_00558630(puVar1,0);
    goto LAB_00558d80;
  }
  uVar5 = param_3 & 0xffff;
  param_3 = param_3 >> 0x10;
  if (0xe77 < uVar5) {
    if (uVar5 != 0xe78) {
      if ((uVar5 != 0xe79) && (uVar5 != 0xe7e)) {
        return 0;
      }
      if (param_3 != 0x200) {
        return 0;
      }
      if (*(int *)(LVar2 + 0x130) != 2) {
        return 0;
      }
LAB_00558ed2:
      FUN_00559c40(puVar1);
      FUN_00558630(puVar1,0);
      FUN_00558fe0(puVar1);
      return 0;
    }
    if (param_3 != 0x200) {
      return 0;
    }
    iVar3 = *(int *)(LVar2 + 0x130);
    if (iVar3 != 0) {
      if (iVar3 == 1) goto LAB_00558ed2;
      if (iVar3 != 2) {
        return 0;
      }
    }
    FUN_00559c40(puVar1);
    FUN_005586d0(puVar1);
    FUN_00558fe0(puVar1);
    return 0;
  }
  if (uVar5 == 0xe77) {
    if (param_3 != 0x200) {
      return 0;
    }
    if (*(int *)(LVar2 + 0x130) != 1) {
      return 0;
    }
    FUN_00559c40(puVar1);
    FUN_00558630(puVar1,0);
    FUN_00558fe0(puVar1);
    return 0;
  }
  if (uVar5 == 0x434) {
    lParam = 0;
    wParam = 0;
    UVar6 = 0x147;
    pHVar4 = GetDlgItem((HWND)*puVar1,0x434);
    LVar7 = SendMessageA(pHVar4,UVar6,wParam,lParam);
    if (*(int *)(LVar2 + 0x130) != LVar7 + -1) {
      *(LRESULT *)(LVar2 + 0x130) = LVar7 + -1;
      FUN_00558fe0(puVar1);
    }
    return 1;
  }
  if (uVar5 != 0x439) {
    if (uVar5 != 0x488) {
      return 0;
    }
    UVar6 = IsDlgButtonChecked(param_1,0x488);
    *(UINT *)(LVar2 + 0x134) = (UVar6 & 1) << 3 | *(uint *)(LVar2 + 0x134) & 0xfffffff7;
    if (((UVar6 & 1) == 0) || (*(float *)(LVar2 + 0x138) != (float)_DAT_006106d0))
    goto LAB_00558e23;
  }
  FUN_0055a060(puVar1);
LAB_00558e23:
  FUN_00558f30(puVar1);
  return 1;
}


