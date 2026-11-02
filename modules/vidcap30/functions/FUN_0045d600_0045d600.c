/* Module: vidcap30.exe
   Function: FUN_0045d600
   Address: 0045d600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045d600(HWND param_1,HWND param_2,uint param_3,int param_4,int *param_5)

{
  HWND pHVar1;
  WPARAM WVar2;
  char *pcVar3;
  HWND pHVar4;
  undefined4 uVar5;
  CHAR *pCVar6;
  uchar *puVar7;
  uint uVar8;
  UINT UVar9;
  int iVar10;
  int iVar11;
  LPARAM lParam;
  CHAR local_258 [4];
  WPARAM local_254;
  undefined4 local_250;
  uchar *local_244;
  int local_240;
  undefined4 local_23c;
  undefined1 local_230 [8];
  undefined4 local_228;
  int local_224;
  undefined4 local_220;
  uchar *local_21c;
  uchar local_208 [260];
  uchar local_104 [260];
  
  pHVar1 = GetDlgItem(param_1,0x4d1);
  WVar2 = SendMessageA(pHVar1,0x1042,0,0);
  if (param_3 < 0x4d3) {
    if (param_3 == 0x4d2) {
      if (param_4 != 0x300) {
        if (param_4 != 0x200) {
          return;
        }
        GetWindowTextA(param_2,local_258,0x20);
        uVar8 = _SfTextToDWordToken_8(local_258,0);
        if (uVar8 < 5) {
          SfSetWindowText(param_2,&DAT_0058c34c,5);
          return;
        }
        uVar8 = _SfTextToDWordToken_8(local_258,0);
        if (0x400 < uVar8) {
          SfSetWindowText(param_2,&DAT_0058c34c,0x400);
          return;
        }
LAB_0045da40:
        uVar5 = _SfTextToDWordToken_8(local_258,0);
        SfSetWindowText(param_2,&DAT_0058c34c,uVar5);
        return;
      }
      GetWindowTextA(param_2,local_258,0x20);
      iVar11 = _SfTextToDWordToken_8(local_258,0);
      iVar10 = *(int *)(*param_5 + 0xbc0);
      goto LAB_0045d816;
    }
    if (param_3 < 0x4bc) {
      if (param_3 != 0x4bb) {
        if (param_3 == 0x1e6) {
          if (WVar2 == 0xffffffff) {
            return;
          }
          local_220 = 0xf000;
          uVar8 = SendMessageA(pHVar1,0x102c,WVar2,0xf000);
          local_224 = (2 - (uint)(uVar8 >> 0xc != 1)) * 0x1000;
          SendMessageA(pHVar1,0x102b,WVar2,(LPARAM)local_230);
          return;
        }
        if (param_3 != 0x4ba) {
          return;
        }
        iVar11 = 1;
        iVar10 = 0;
        puVar7 = local_208;
        uVar8 = 0x104;
        pcVar3 = (char *)_SfGetString_8(DAT_005ba2a0,0xa2c6);
        iVar10 = SfSelectDirectoryDlgEx(param_1,pcVar3,(char *)puVar7,uVar8,iVar10,iVar11);
        if (iVar10 < 0) goto LAB_0045daff;
        SetFocus(pHVar1);
        if (WVar2 == 0xffffffff) {
          WVar2 = 0;
        }
        pCVar6 = local_258;
        for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
          pCVar6[0] = '\0';
          pCVar6[1] = '\0';
          pCVar6[2] = '\0';
          pCVar6[3] = '\0';
          pCVar6 = pCVar6 + 4;
        }
        local_258[0] = '\x03';
        local_258[1] = '\0';
        local_258[2] = '\0';
        local_258[3] = '\0';
        local_23c = 0x13;
        local_254 = WVar2;
        local_244 = local_208;
        local_240 = lstrlenA((LPCSTR)local_208);
        SendMessageA(pHVar1,0x1007,0,(LPARAM)local_258);
        local_220 = 0xf000;
        local_224 = 0x2000;
        SendMessageA(pHVar1,0x102b,local_254,(LPARAM)local_230);
        if (WVar2 == 0) {
          param_5[5] = 0;
        }
        FUN_0045cb80(pHVar1,WVar2,local_208);
        goto LAB_0045d821;
      }
      uVar8 = FUN_0045db80(pHVar1,param_5);
    }
    else {
      if (param_3 < 0x4bc) {
        return;
      }
      if (0x4bd < param_3) {
        return;
      }
      uVar8 = FUN_0045dbd0(pHVar1,(-(uint)(param_3 != 0x4bc) & 2) - 1,param_5);
    }
  }
  else {
    if (0x505 < param_3) {
      if (param_3 != 0x9d7e) {
        return;
      }
      pHVar4 = GetDlgItem(param_1,0x4d1);
      WVar2 = SendMessageA(pHVar4,0x1042,0,0);
      if (WVar2 == 0xffffffff) {
        return;
      }
      local_244 = local_104;
      local_250 = 0;
      local_240 = 0x104;
      SendMessageA(pHVar4,0x102d,WVar2,(LPARAM)local_258);
      _mbscpy(local_208,local_104);
      puVar7 = local_208;
      iVar11 = 1;
      iVar10 = 1;
      uVar8 = 0x104;
      pcVar3 = (char *)_SfGetString_8(DAT_005ba2a0,0xa2c6);
      iVar10 = SfSelectDirectoryDlgEx(param_1,pcVar3,(char *)puVar7,uVar8,iVar10,iVar11);
      if (iVar10 < 0) {
LAB_0045daff:
        if (iVar10 == -0x7ffb1ff4) {
          return;
        }
        FUN_00404910(iVar10,0);
        return;
      }
      iVar10 = lstrcmpiA((LPCSTR)local_104,(LPCSTR)local_208);
      if (iVar10 == 0) {
        return;
      }
      if (WVar2 == 0) {
        param_5[5] = 0;
      }
      local_228 = 0;
      local_21c = local_208;
      SendMessageA(pHVar4,0x102e,WVar2,(LPARAM)local_230);
      FUN_0045cb80(pHVar4,WVar2,local_208);
      goto LAB_0045d821;
    }
    if (param_3 != 0x505) {
      if (param_3 == 0x4d4) {
        if (WVar2 == 0xffffffff) {
          return;
        }
        SendMessageA(pHVar1,0x1017,WVar2,0);
        return;
      }
      if (param_3 != 0x504) {
        return;
      }
      UVar9 = IsDlgButtonChecked(param_1,0x504);
      pHVar4 = GetDlgItem(param_1,0x505);
      EnableWindow(pHVar4,UVar9);
      pHVar4 = GetDlgItem(param_1,0x4d4);
      EnableWindow(pHVar4,UVar9);
      goto LAB_0045d821;
    }
    if (param_4 != 0x300) {
      if (param_4 != 0x200) {
        return;
      }
      GetWindowTextA(param_2,local_258,0x20);
      iVar10 = _SfTextToDWordToken_8(local_258,0);
      if (iVar10 == 0) {
        SfSetWindowText(param_2,&DAT_0058c34c,1);
        return;
      }
      uVar8 = _SfTextToDWordToken_8(local_258,0);
      if (0xfffffff < uVar8) {
        SfSetWindowText(param_2,&DAT_0058c34c,0xfffffff);
        return;
      }
      goto LAB_0045da40;
    }
    GetWindowTextA(param_2,local_258,0x20);
    iVar11 = _SfTextToDWordToken_8(local_258,0);
    iVar10 = *(int *)(*param_5 + 0xbc8);
LAB_0045d816:
    uVar8 = (uint)(iVar11 != iVar10);
  }
  if (uVar8 == 0) {
    return;
  }
LAB_0045d821:
  FUN_0045d450(param_1,pHVar1,*(undefined4 *)(*param_5 + 0xbc0));
  InvalidateRect(pHVar1,(RECT *)0x0,0);
  lParam = 0;
  UVar9 = 0x468;
  pHVar1 = GetParent(param_1);
  SendMessageA(pHVar1,UVar9,(WPARAM)param_1,lParam);
  param_5[4] = 1;
  return;
}


