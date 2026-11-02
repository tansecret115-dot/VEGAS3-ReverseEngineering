/* Module: vegas30.exe
   Function: FUN_00554650
   Address: 00554650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00554650(HWND__ *param_1,uint param_2,HWND param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  UINT UVar2;
  HWND pHVar3;
  char *pcVar4;
  long lVar5;
  LPCSTR lpString;
  LRESULT LVar6;
  int iVar7;
  char **ppcVar8;
  UINT Msg;
  LPARAM LVar9;
  int local_8a0;
  char *local_89c [8];
  undefined **local_87c;
  uchar local_81c [260];
  char local_718 [256];
  char local_618 [260];
  SFFILETYPEINFO local_514 [1300];
  
  if (param_2 < 0x488) {
    if (param_2 == 0x487) {
      UVar2 = IsDlgButtonChecked(param_1,0x487);
      LVar9 = 0;
      Msg = 0x468;
      *(UINT *)(*param_5 + 0x1194) = UVar2;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,Msg,(WPARAM)param_1,LVar9);
      param_5[2] = 1;
      param_5[0x19] = 1;
      return 0;
    }
    switch(param_2) {
    case 0x41d:
      uVar1 = FUN_00554080(param_1,param_5);
      return uVar1;
    case 0x41e:
      _SfLoadString_16(DAT_00647204,0xbf,local_89c,0x80);
      _mbscpy(local_81c,(uchar *)(*param_5 + 0x474));
      local_8a0 = 1;
      _SfLoadString_16(DAT_00647204,0xc0,local_718,0x100);
      _SfStringReplaceChars_12(local_718,9,0);
      _SfHelp_GetHelpFilePath_12(0,local_618,0x104);
      lVar5 = SfSelectFileDlg(param_1,(char *)local_89c,(char *)local_81c,0x104,local_718,&local_8a0
                              ,DAT_00647200,0,local_618,0,1);
      if ((-1 < lVar5) &&
         (iVar7 = lstrcmpA((LPCSTR)(*param_5 + 0x474),(LPCSTR)local_81c), iVar7 != 0)) {
        _mbscpy((uchar *)(*param_5 + 0x474),local_81c);
        SetDlgItemTextA(param_1,0x444,(LPCSTR)(*param_5 + 0x474));
        LVar9 = 0;
        UVar2 = 0x468;
        pHVar3 = GetParent(param_1);
        SendMessageA(pHVar3,UVar2,(WPARAM)param_1,LVar9);
        param_5[2] = 1;
        param_5[0x19] = 1;
        return 0;
      }
      break;
    default:
      return 1;
    case 0x43f:
      uVar1 = FUN_00554020(param_1,param_5);
      return uVar1;
    case 0x46e:
      if (*(int *)(*param_5 + 0x2438) == 0) {
        uVar1 = 0;
        *(undefined4 *)(*param_5 + 0x2438) = 1;
LAB_005547fe:
        FUN_005533c0(param_1,uVar1);
        LVar9 = 0;
        UVar2 = 0x468;
        pHVar3 = GetParent(param_1);
        SendMessageA(pHVar3,UVar2,(WPARAM)param_1,LVar9);
        param_5[2] = 1;
        param_5[0x19] = 1;
        return 0;
      }
      break;
    case 0x46f:
      if (*(int *)(*param_5 + 0x2438) != 0) {
        *(undefined4 *)(*param_5 + 0x2438) = 0;
        uVar1 = 1;
        goto LAB_005547fe;
      }
      break;
    case 0x485:
      uVar1 = FUN_00553230(param_1,param_5,param_4);
      return uVar1;
    }
  }
  else if (param_2 < 0x55a) {
    if (param_2 == 0x559) {
      _SfLoadString_16(DAT_00647204,0x55b,local_718,0x80);
      _mbscpy(local_81c,(uchar *)(*param_5 + 0x2540));
      ppcVar8 = local_89c;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppcVar8 = (char *)0x0;
        ppcVar8 = ppcVar8 + 1;
      }
      local_89c[0] = local_718;
      local_89c[1] = (char *)0xf;
      local_89c[3] = (char *)0x104;
      local_89c[2] = (char *)0x4;
      pcVar4 = (char *)_SfGetFileNameExtensionPtrA_4(local_81c);
      if (*pcVar4 == '\0') {
        local_87c = &PTR_LAB_0061ae98;
      }
      else {
        local_87c = (undefined **)(pcVar4 + 1);
      }
      lVar5 = Project_FileOpenDlg(param_1,(char *)local_81c,(SFFILE_DLG_PARAMS *)local_89c,local_514
                                 );
      if ((-1 < lVar5) &&
         (iVar7 = lstrcmpA((LPCSTR)(*param_5 + 0x2540),(LPCSTR)local_81c), iVar7 != 0)) {
        _mbscpy((uchar *)(*param_5 + 0x2540),local_81c);
        lpString = (LPCSTR)(*param_5 + 0x2540);
        iVar7 = 0x557;
LAB_00554bd4:
        SetDlgItemTextA(param_1,iVar7,lpString);
        LVar9 = 0;
        UVar2 = 0x468;
        pHVar3 = GetParent(param_1);
        SendMessageA(pHVar3,UVar2,(WPARAM)param_1,LVar9);
        param_5[2] = 1;
        param_5[0x19] = 1;
        return 0;
      }
    }
    else if (param_2 == 0x4b0) {
      if (param_4 == 1) {
        FUN_00554490(param_1,param_5);
        return 0;
      }
    }
    else if (param_2 == 0x4b1) {
      if (param_4 == 1) {
        FUN_00554250(param_1,param_5);
        FUN_005543e0(param_1,param_5);
        FUN_00554490(param_1,param_5);
        return 0;
      }
    }
    else {
      if (param_2 != 0x558) {
        return 1;
      }
      _SfLoadString_16(DAT_00647204,0x55a,local_718,0x80);
      _mbscpy(local_81c,(uchar *)(*param_5 + 0x243c));
      ppcVar8 = local_89c;
      for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
        *ppcVar8 = (char *)0x0;
        ppcVar8 = ppcVar8 + 1;
      }
      local_89c[0] = local_718;
      local_89c[1] = (char *)0xf;
      local_89c[3] = (char *)0x104;
      local_89c[2] = (char *)0x4;
      pcVar4 = (char *)_SfGetFileNameExtensionPtrA_4(local_81c);
      if (*pcVar4 == '\0') {
        local_87c = &PTR_LAB_0061ae98;
      }
      else {
        local_87c = (undefined **)(pcVar4 + 1);
      }
      lVar5 = Project_FileOpenDlg(param_1,(char *)local_81c,(SFFILE_DLG_PARAMS *)local_89c,local_514
                                 );
      if ((-1 < lVar5) &&
         (iVar7 = lstrcmpA((LPCSTR)(*param_5 + 0x243c),(LPCSTR)local_81c), iVar7 != 0)) {
        _mbscpy((uchar *)(*param_5 + 0x243c),local_81c);
        lpString = (LPCSTR)(*param_5 + 0x243c);
        iVar7 = 0x556;
        goto LAB_00554bd4;
      }
    }
  }
  else if (param_2 == 0x5e8) {
    if ((param_4 == 1) && (LVar6 = SendMessageA(param_3,0x147,0,0), LVar6 != -1)) {
      LVar9 = 0;
      *(LRESULT *)(*param_5 + 0x2e70) = LVar6;
      UVar2 = 0x468;
      pHVar3 = GetParent(param_1);
      SendMessageA(pHVar3,UVar2,(WPARAM)param_1,LVar9);
      param_5[2] = 1;
      param_5[0x1e] = 1;
    }
  }
  else {
    if (param_2 != 0x662) {
      return 1;
    }
    if (param_4 == 1) {
      FUN_005543e0(param_1,param_5);
      return 0;
    }
  }
  return 0;
}


