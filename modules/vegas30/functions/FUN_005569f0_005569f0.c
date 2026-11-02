/* Module: vegas30.exe
   Function: FUN_005569f0
   Address: 005569f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005569f0(HWND param_1,int *param_2,int param_3)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint bEnable;
  undefined4 uVar6;
  WPARAM WVar7;
  double *pdVar8;
  float10 fVar9;
  double *local_280;
  undefined1 local_26c [52];
  uchar local_238 [152];
  CHAR local_1a0 [256];
  undefined1 local_a0 [156];
  
  iVar1 = *(int *)(*(int *)(*(int *)(*param_2 + 0x130) + 8) + param_3 * 4);
  iVar5 = *(int *)(*(int *)(param_2[2] + 8) + param_3 * 4);
  if (((*(uint *)(*(int *)(iVar1 + 8) + 0x134) >> 5 & 1) != 0) ||
     ((*(uint *)(iVar1 + 0x8c) & 1) != 0)) {
    FUN_00557120(param_1,*(undefined4 *)(iVar1 + 4),1);
    pHVar2 = GetDlgItem(param_1,0x4c8);
    uVar3 = _SfGetString_8(DAT_00647204,0x6d88);
    SfSetWindowText(pHVar2,uVar3);
    return;
  }
  FUN_00557120(param_1,*(undefined4 *)(iVar1 + 4),0);
  local_1a0[0] = '\0';
  local_26c[0] = 0;
  _SfNanoTimeToTextEx_20
            (local_26c,&DAT_0064b110,*(undefined4 *)(iVar5 + 0x80),*(undefined4 *)(iVar5 + 0x84),2);
  if ((*(uint *)(*(int *)(iVar1 + 8) + 0x134) & 0x400) == 0) {
    iVar4 = FUN_005f3180(*(undefined4 *)(iVar1 + 0x10),local_1a0,0x100);
    if ((iVar4 < 0) || (local_1a0[0] == '\0')) {
      _SfLoadString_16(DAT_00647204,0x6d91,local_1a0,0x100);
    }
    pHVar2 = GetDlgItem(param_1,0x60d);
    SetWindowTextA(pHVar2,local_1a0);
    local_1a0[0] = '\0';
  }
  if (*(int *)(iVar1 + 4) == 2) {
    if ((*(uint *)(*(int *)(iVar1 + 8) + 0x134) & 0x400) == 0) {
      local_238[0] = '\0';
      iVar5 = FUN_005f7af0(local_238,0x96);
      if (iVar5 < 0) {
        _mbscpy(local_238,"???");
      }
      SfPrintF(local_1a0,"%s$, %s",local_238,local_26c);
      pHVar2 = GetDlgItem(param_1,0x4c8);
      SetWindowTextA(pHVar2,local_1a0);
    }
    else {
      local_238[0] = '\0';
      SfPrintF(local_238,&DAT_0061052c,*(undefined2 *)(*(int *)(iVar1 + 0x2c) + 0xe));
      pHVar2 = GetDlgItem(param_1,0x505);
      SfSetWindowText(pHVar2,"Bit depth:");
      pHVar2 = GetDlgItem(param_1,0x6627);
      SfSetWindowText(pHVar2,local_26c);
      local_238[0] = '\0';
      SfPrintF(local_a0,&DAT_0061052c,*(undefined4 *)(*(int *)(iVar1 + 0x2c) + 4));
      pHVar2 = GetDlgItem(param_1,0x507);
      SfSetWindowText(pHVar2,"Bit rate:");
      pHVar2 = GetDlgItem(param_1,0x6625);
      SfSetWindowText(pHVar2,local_a0);
    }
  }
  else if (*(int *)(iVar1 + 4) == 3) {
    bEnable = *(uint *)(*(int *)(iVar1 + 8) + 0x134) >> 0xb & 1;
    pHVar2 = GetDlgItem(param_1,0x633);
    EnableWindow(pHVar2,bEnable);
    if ((*(uint *)(*(int *)(iVar1 + 8) + 0x134) & 0x400) == 0) {
      local_238[0] = '\0';
      iVar4 = FUN_005f7af0(local_238,0x96);
      if (iVar4 < 0) {
        _mbscpy(local_238,"???");
      }
      SfPrintF(local_1a0,"%s$, %s",local_238,local_26c);
      pHVar2 = GetDlgItem(param_1,0x4c8);
      SetWindowTextA(pHVar2,local_1a0);
      pHVar2 = GetDlgItem(param_1,0x633);
      if (*(WPARAM *)(iVar5 + 0x50) == 0xffffffff) {
        WVar7 = 0;
        if (0 < DAT_0062a1ac) {
          pdVar8 = (double *)&DAT_00646b68;
          do {
            if ((*(double *)(iVar5 + 0x58) - _DAT_00612af8 <= *pdVar8) &&
               (*pdVar8 <= *(double *)(iVar5 + 0x58) + _DAT_00612af8)) {
              if (WVar7 != 0xffffffff) {
                SendMessageA(pHVar2,0x14e,WVar7,0);
                goto LAB_00556f1e;
              }
              break;
            }
            WVar7 = WVar7 + 1;
            pdVar8 = pdVar8 + 2;
          } while ((int)WVar7 < DAT_0062a1ac);
        }
        SfSetWindowText(pHVar2,&DAT_00619d20,*(undefined4 *)(iVar5 + 0x58),
                        *(undefined4 *)(iVar5 + 0x5c));
      }
      else {
        SendMessageA(pHVar2,0x14e,*(WPARAM *)(iVar5 + 0x50),0);
      }
    }
    else {
      pHVar2 = GetDlgItem(param_1,0x505);
      SfSetWindowText(pHVar2,"Frame size:");
      pHVar2 = GetDlgItem(param_1,0x4c9);
      SfSetWindowText(pHVar2,&DAT_0061052c,*(undefined4 *)(iVar5 + 100));
      pHVar2 = GetDlgItem(param_1,0x4ca);
      SfSetWindowText(pHVar2,&DAT_0061052c,*(undefined4 *)(iVar5 + 0x68));
      pHVar2 = GetDlgItem(param_1,0x508);
      SendMessageA(pHVar2,0x60e,0,8);
      SendMessageA(pHVar2,0x60f,0,0x800);
      SendMessageA(pHVar2,0x610,0,*(LPARAM *)(iVar5 + 100));
      pHVar2 = GetDlgItem(param_1,0x509);
      SendMessageA(pHVar2,0x60e,0,8);
      SendMessageA(pHVar2,0x60f,0,0x800);
      SendMessageA(pHVar2,0x610,0,*(LPARAM *)(iVar5 + 0x68));
      uVar3 = DAT_0064b138;
      local_238[0] = '\0';
      if (*(double *)(iVar5 + 0x58) == _DAT_00610fd8) {
        SfPrintF(local_238,"(Still)");
      }
      else {
        uVar6 = FUN_005ba4b0(DAT_0064b138,0);
        fVar9 = (float10)FUN_005b8c00(uVar3,uVar6);
        SfPrintF(local_238,"$.3f fps",(double)fVar9);
      }
      pHVar2 = GetDlgItem(param_1,0x507);
      SfSetWindowText(pHVar2,"Frame rate:");
      pHVar2 = GetDlgItem(param_1,0x6625);
      SfSetWindowText(pHVar2,local_238);
      pHVar2 = GetDlgItem(param_1,0x6627);
      SfSetWindowText(pHVar2,local_26c);
    }
LAB_00556f1e:
    pHVar2 = GetDlgItem(param_1,0x4c3);
    switch(*(undefined4 *)(iVar5 + 0x10)) {
    case 1:
      WVar7 = 1;
      break;
    case 2:
      WVar7 = 2;
      break;
    default:
      WVar7 = 0;
    }
    SendMessageA(pHVar2,0x14e,WVar7,0);
    local_280 = (double *)0x0;
    pHVar2 = GetDlgItem(param_1,0x4c4);
    switch(*(undefined4 *)(iVar5 + 0x14)) {
    case 0:
      WVar7 = 1;
      break;
    case 1:
      WVar7 = 2;
      break;
    case 2:
      WVar7 = 3;
      local_280 = (double *)0x1;
      break;
    case 3:
      WVar7 = 4;
      local_280 = (double *)0x1;
      break;
    default:
      WVar7 = 0;
    }
    SendMessageA(pHVar2,0x14e,WVar7,0);
    pHVar2 = GetDlgItem(param_1,0x4d1);
    EnableWindow(pHVar2,(BOOL)local_280);
    pHVar2 = GetDlgItem(param_1,0x4cd);
    EnableWindow(pHVar2,(BOOL)local_280);
    pHVar2 = GetDlgItem(param_1,0x4d5);
    if (*(WPARAM *)(iVar5 + 0x28) == 0xffffffff) {
      WVar7 = 0;
      if (0 < DAT_0062a1a8) {
        local_280 = (double *)&DAT_00646990;
        do {
          if ((*(double *)(iVar5 + 0x30) - _DAT_0061aec0 <= *local_280) &&
             (*local_280 <= _DAT_0061aec0 + *(double *)(iVar5 + 0x30))) {
            if (WVar7 != 0xffffffff) {
              SendMessageA(pHVar2,0x14e,WVar7,0);
              goto LAB_00557089;
            }
            break;
          }
          WVar7 = WVar7 + 1;
          local_280 = local_280 + 5;
        } while ((int)WVar7 < DAT_0062a1a8);
      }
      SfSetWindowText(pHVar2,&DAT_0061aedc,*(undefined4 *)(iVar5 + 0x30),
                      *(undefined4 *)(iVar5 + 0x34));
    }
    else {
      SendMessageA(pHVar2,0x14e,*(WPARAM *)(iVar5 + 0x28),0);
    }
  }
LAB_00557089:
  pHVar2 = GetDlgItem(param_1,0x611);
  if (pHVar2 != (HWND)0x0) {
    if ((*(int *)(iVar1 + 4) == 3) && (*(double *)(iVar1 + 0x48) != _DAT_00610fd8)) {
      ShowWindow(pHVar2,5);
      return;
    }
    ShowWindow(pHVar2,0);
  }
  return;
}


