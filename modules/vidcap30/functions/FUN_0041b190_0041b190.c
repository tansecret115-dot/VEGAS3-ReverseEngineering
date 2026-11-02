/* Module: vidcap30.exe
   Function: FUN_0041b190
   Address: 0041b190
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041b190(HWND param_1,HWND param_2,uint param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  WPARAM wParam;
  uint uVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  HWND pHVar5;
  int iVar6;
  double *pdVar7;
  bool bVar8;
  float10 fVar9;
  undefined8 uVar10;
  UINT UVar11;
  undefined4 uVar12;
  undefined *puVar13;
  LPARAM LVar14;
  UINT bEnable;
  undefined8 local_148;
  CHAR local_13c [40];
  undefined8 local_114;
  CHAR local_10c [264];
  
  if (param_3 < 0x4b5) {
    if (param_3 == 0x4b4) {
      if (param_4 != 1) {
        return 1;
      }
      LVar4 = SendMessageA(param_2,0x147,0,0);
      if (LVar4 == -1) {
        return 1;
      }
      if (*(int *)(*param_5 + 0xf18) == (&DAT_00588f34)[LVar4 * 2]) {
        return 1;
      }
      *(undefined4 *)(*param_5 + 0xf18) = (&DAT_00588f34)[LVar4 * 2];
      LVar14 = 0;
      UVar11 = 0x468;
      pHVar5 = GetParent(param_1);
      SendMessageA(pHVar5,UVar11,(WPARAM)param_1,LVar14);
      param_5[2] = 1;
      return 1;
    }
    switch(param_3) {
    case 0x488:
      if (param_4 == 1) {
        LVar4 = SendMessageA(param_2,0x147,0,0);
        if (LVar4 == -1) {
          return 1;
        }
        iVar6 = *param_5;
        if (*(double *)(iVar6 + 0xf08) == (double)(&DAT_00588ec8)[LVar4 * 2]) {
          return 1;
        }
        LVar14 = 0;
        *(undefined4 *)(iVar6 + 0xf08) = *(undefined4 *)(&DAT_00588ec8 + LVar4 * 2);
        UVar11 = 0x468;
        *(undefined4 *)(iVar6 + 0xf0c) = *(undefined4 *)((int)&DAT_00588ec8 + LVar4 * 0x10 + 4);
        pHVar5 = GetParent(param_1);
        SendMessageA(pHVar5,UVar11,(WPARAM)param_1,LVar14);
        param_5[2] = 1;
        return 1;
      }
      if (param_4 == 4) {
        local_13c[0] = '\0';
        GetWindowTextA(param_2,local_13c,0x28);
        fVar9 = (float10)_SfTextToDoubleTokenEx_32
                                   (local_13c,*(undefined4 *)(*param_5 + 0xf08),
                                    *(undefined4 *)(*param_5 + 0xf0c),0x9999999a,0x3fa99999,0,
                                    0x408f4000,0);
        local_148 = (double)fVar9;
        pdVar7 = (double *)&DAT_00588ec8;
        do {
          uVar3 = *(undefined4 *)((int)pdVar7 + 4);
          uVar12 = *(undefined4 *)pdVar7;
          uVar1 = _SfGetString_8(DAT_005ba2a0,*(undefined4 *)(pdVar7 + -1));
          SfPrintF(local_10c,uVar1,uVar12,uVar3);
          iVar6 = lstrcmpA(local_13c,local_10c);
          if (iVar6 == 0) {
            local_148 = *pdVar7;
          }
          pdVar7 = pdVar7 + 2;
        } while (pdVar7 < &DAT_00588f38);
        wParam = FUN_0041ad80((undefined4)local_148,local_148._4_4_);
        if (wParam == 0xffffffff) {
          SfSetWindowText(param_2,&DAT_00589f48,(undefined4)local_148,local_148._4_4_);
          return 1;
        }
        SendMessageA(param_2,0x14e,wParam,0);
        return 1;
      }
      if (param_4 != 5) {
        return 1;
      }
    case 0x493:
      goto LAB_0041b78d;
    default:
      goto switchD_0041b1cb_caseD_489;
    case 0x491:
      UVar11 = IsDlgButtonChecked(param_1,0x491);
      pHVar5 = GetDlgItem(param_1,0x4cc);
      EnableWindow(pHVar5,UVar11);
      pHVar5 = GetDlgItem(param_1,0x4cd);
      EnableWindow(pHVar5,UVar11);
      pHVar5 = GetDlgItem(param_1,0x493);
      break;
    case 0x495:
      if (param_4 != 0x300) {
        if (param_4 != 0x200) {
          return 1;
        }
        GetDlgItemTextA(param_1,param_3,local_13c,0x20);
        _SfTextToDWordToken_8(local_13c,0);
        uVar2 = _SfTextToDWordToken_8(local_13c,0);
        if (uVar2 < 0x3d) {
          uVar3 = _SfTextToDWordToken_8(local_13c,0);
        }
        else {
          uVar3 = 0x3c;
        }
        puVar13 = &DAT_00589f30;
        pHVar5 = GetDlgItem(param_1,param_3);
        SfSetWindowText(pHVar5,puVar13,uVar3);
        return 1;
      }
      GetDlgItemTextA(param_1,param_3,local_13c,0x20);
      iVar6 = _SfTextToDWordToken_8(local_13c,0);
      bVar8 = iVar6 * 1000 == *(int *)(*param_5 + 0xfbc);
LAB_0041b679:
      if (!bVar8) {
        LVar14 = 0;
        UVar11 = 0x468;
        pHVar5 = GetParent(param_1);
        SendMessageA(pHVar5,UVar11,(WPARAM)param_1,LVar14);
        param_5[2] = 1;
        return 1;
      }
switchD_0041b1cb_caseD_489:
      return 1;
    case 0x4b3:
      UVar11 = IsDlgButtonChecked(param_1,0x4b3);
      pHVar5 = GetDlgItem(param_1,0x488);
      EnableWindow(pHVar5,UVar11);
      LVar14 = 0;
      UVar11 = 0x468;
      pHVar5 = GetParent(param_1);
      SendMessageA(pHVar5,UVar11,(WPARAM)param_1,LVar14);
      param_5[2] = 1;
      return 1;
    }
  }
  else if (param_3 < 0x4fb) {
    if (param_3 != 0x4fa) {
      if (param_3 != 0x4cc) {
        if (param_3 != 0x4d0) {
          return 1;
        }
        GetDlgItemTextA(param_1,0x4d0,local_13c,0x20);
        fVar9 = (float10)FUN_0042ed90(DAT_005bb838);
        local_114 = FUN_0045ae30(local_13c,(double)fVar9);
        if (param_4 == 0x200) {
          FUN_0045b820(0,0,local_13c,0x20);
          SetDlgItemTextA(param_1,0x4d0,local_13c);
          return 1;
        }
        if (param_4 != 0x300) {
          return 1;
        }
        iVar6 = *param_5;
        uVar10 = ftol();
        if (((int)uVar10 == *(int *)(iVar6 + 0x12c8)) &&
           ((int)((ulonglong)uVar10 >> 0x20) == *(int *)(iVar6 + 0x12cc))) {
          return 1;
        }
        LVar14 = 0;
        UVar11 = 0x468;
        pHVar5 = GetParent(param_1);
        SendMessageA(pHVar5,UVar11,(WPARAM)param_1,LVar14);
        param_5[2] = 1;
        return 1;
      }
      GetDlgItemTextA(param_1,0x4cc,local_13c,0x20);
      iVar6 = _SfTextToLongToken_8(local_13c,0);
      iVar6 = iVar6 * 1000;
      if (param_4 == 0x200) {
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else if (10000 < iVar6) {
          iVar6 = 10000;
        }
        SfPrintF(local_13c,&DAT_00589f30,iVar6 / 1000);
        SetDlgItemTextA(param_1,0x4cc,local_13c);
        return 1;
      }
      if (param_4 != 0x300) {
        return 1;
      }
      bVar8 = iVar6 == *(int *)(*param_5 + 0xf78);
      goto LAB_0041b679;
    }
    UVar11 = IsDlgButtonChecked(param_1,0x4fa);
    bEnable = UVar11;
    pHVar5 = GetDlgItem(param_1,0x495);
    EnableWindow(pHVar5,bEnable);
    pHVar5 = GetDlgItem(param_1,0x4ce);
  }
  else {
    if (param_3 != 0x551) {
      if (param_3 != 0x9c56) {
        return 1;
      }
      FUN_0041b810(param_1,param_5);
      return 1;
    }
    UVar11 = IsDlgButtonChecked(param_1,0x551);
    pHVar5 = GetDlgItem(param_1,0x4d0);
  }
  EnableWindow(pHVar5,UVar11);
LAB_0041b78d:
  LVar14 = 0;
  UVar11 = 0x468;
  pHVar5 = GetParent(param_1);
  SendMessageA(pHVar5,UVar11,(WPARAM)param_1,LVar14);
  param_5[2] = 1;
  return 1;
}


