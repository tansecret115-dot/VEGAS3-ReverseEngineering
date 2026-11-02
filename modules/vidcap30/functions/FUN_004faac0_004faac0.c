/* Module: vidcap30.exe
   Function: FUN_004faac0
   Address: 004faac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_004faac0(undefined4 *param_1,HWND param_2,uint param_3,HMENU param_4,int param_5)

{
  byte bVar1;
  uchar *lpsz;
  uchar *puVar2;
  HWND pHVar3;
  LRESULT LVar4;
  int iVar5;
  WPARAM WVar6;
  HCURSOR pHVar7;
  LPCSTR lpString2;
  undefined4 uVar8;
  LPCSTR pCVar9;
  uchar *puVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  CHAR *pCVar15;
  tagRECT *ptVar16;
  CHAR *pCVar17;
  undefined4 *puVar18;
  bool bVar19;
  bool bVar20;
  LRESULT local_55c;
  tagRECT local_554;
  undefined4 local_544 [5];
  CHAR *local_530;
  uchar *local_52c;
  byte local_524 [16];
  uchar local_514;
  char local_513;
  char local_512 [258];
  CHAR local_410 [259];
  undefined1 local_30d;
  CHAR local_30c [520];
  uchar local_104 [260];
  
  pHVar3 = (HWND)param_1[6];
  local_55c = 0;
  if (param_3 < 6) {
    if (param_3 == 5) {
      local_554.bottom = param_1[0x132];
      local_554.left = 0;
      local_554.top = 0;
      local_554.right = ((int)(param_1[0x133] - 2) < 0) - 1 & param_1[0x133] - 2;
      FUN_00497bc0(param_2,local_524);
      iVar11 = 0x10;
      bVar19 = false;
      iVar5 = 0;
      bVar20 = true;
      pbVar13 = local_524;
      ptVar16 = &local_554;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        bVar1 = (byte)ptVar16->left;
        bVar19 = *pbVar13 < bVar1;
        bVar20 = *pbVar13 == bVar1;
        pbVar13 = pbVar13 + 1;
        ptVar16 = (tagRECT *)((int)&ptVar16->left + 1);
      } while (bVar20);
      if (!bVar20) {
        iVar5 = (1 - (uint)bVar19) - (uint)(bVar19 != 0);
      }
      if (iVar5 != 0) {
        param_4->unused = local_554.left;
        param_4[1].unused = local_554.top;
        param_4[2].unused = local_554.right;
        param_4[3].unused = local_554.bottom;
        return 1;
      }
    }
    else if (param_3 == 1) {
      pHVar3 = (HWND)param_1[5];
      uVar12 = (param_1[0x138] & 4) << 0x1a;
      if (pHVar3 == (HWND)0x0) {
        uVar12 = uVar12 | 0x46010042;
        pHVar3 = CreateWindowExA(0,"ComboBoxEx32",(LPCSTR)0x0,uVar12,0,0,0,0xe6,(HWND)param_1[1],
                                 param_4,(HINSTANCE)*param_1,(LPVOID)0x0);
        param_1[5] = pHVar3;
        LVar4 = SendMessageA(pHVar3,0x407,0,0);
        param_1[0x13a] = LVar4;
        GetWindowRect(pHVar3,&local_554);
        param_1[0x131] = local_554.bottom - local_554.top;
      }
      else {
        ShowWindow(pHVar3,(param_1[0x138] & 4) >> 2);
      }
      if ((uVar12 & 0x10000000) == 0) {
        param_1[0x132] = 0;
      }
      else {
        param_1[0x132] = param_1[0x131];
      }
      SendMessageA(pHVar3,0x402,0,param_1[0xc]);
      FUN_004fb390(pHVar3);
      if ((*(byte *)(param_1 + 0x138) & 4) != 0) {
        FUN_004fb410(param_1);
        return 0;
      }
    }
    else if (param_3 == 2) {
      FUN_004fb390(param_2);
      DestroyWindow(param_2);
      return 0;
    }
  }
  else if (param_3 == 0x4e) {
    if (*(int *)(param_5 + 8) == -0x325) {
      param_1[0x13b] = param_2;
      DAT_0066234c = 0;
      param_1[0x139] = 1;
      if (*(int *)(param_5 + 0x118) == 2) {
        GetWindowTextA(param_2,(LPSTR)local_104,0x104);
        if (((*(byte *)(param_1 + 0x138) & 0x20) == 0) || (param_1[0x2eb] == 0)) {
          _mbscpy(&local_514,local_104);
        }
        else {
          _SfList_DeleteList_16(param_1[0x2eb],0,0xffffffff,0);
          FUN_004fb5c0(local_104,&local_514,param_1[0x2eb]);
          if (*(int *)param_1[0x2eb] != 0) {
            param_1[0x138] = param_1[0x138] | 1;
          }
        }
        if (local_514 == '\0') {
          FUN_004f93e0(param_1);
          param_1[0x139] = 0;
          return 0;
        }
        pHVar7 = (HCURSOR)_SfGetUICursor_4(0x7f8a);
        pHVar7 = SetCursor(pHVar7);
        if (local_514 != '\\') {
          if ((local_514 == '.') && (local_513 == '.')) {
            FUN_004fa8d0(param_1,pHVar7,&local_514);
            return 0;
          }
          puVar10 = &local_514;
          puVar2 = &local_514;
          while (lpsz = puVar10, local_514 != '\0') {
            puVar10 = (uchar *)CharNextA((LPCSTR)lpsz);
            local_514 = *puVar10;
            puVar2 = lpsz;
          }
          if (*puVar2 == '\\') {
            *puVar2 = '\0';
          }
          if (local_513 == ':') {
            pCVar9 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x108a);
            lstrcpynA(local_410,pCVar9,0x104);
            local_30d = 0;
            iVar5 = lstrlenA(local_410);
            pCVar15 = local_410 + iVar5;
            uVar8 = _SfGetString2_8(DAT_005c16d8,0x108c);
            FUN_00524500("{20D04FE0-3AEA-1069-A2D8-08002B30309D}",uVar8,pCVar15);
            SfPrintF(local_30c,"%s\\%s",local_410,&local_514);
            iVar5 = lstrcmpiA(local_30c,(LPCSTR)(param_1 + 0x94));
            if (iVar5 == 0) {
              FUN_004f93e0(param_1);
              SetCursor(pHVar7);
              param_1[0x139] = 0;
              return 0;
            }
          }
          else {
            SfPrintF(local_30c,"%s\\%s",param_1 + 0x94,&local_514);
          }
          SendMessageA(pHVar3,0xb,0,0);
          iVar5 = FUN_004f8100(param_1,local_30c,1,1);
          if (iVar5 == 0) {
            FUN_004f93e0(param_1);
          }
          SendMessageA(pHVar3,0xb,1,0);
          SetCursor(pHVar7);
          param_1[0x139] = 0;
          return 0;
        }
        if ((local_513 == '\\') && (local_512[0] != '\0')) {
          pCVar9 = local_512;
          lpString2 = (LPCSTR)_SfGetString2_8(DAT_005c16d8,0x108a);
          lstrcpynA(local_410,lpString2,0x104);
          local_30d = 0;
          iVar5 = lstrlenA(local_410);
          pCVar15 = local_410 + iVar5;
          uVar8 = _SfGetString2_8(DAT_005c16d8,0x108b);
          FUN_00524500("{208D2C60-3AEA-1069-A2D7-08002B30309D}",uVar8,pCVar15);
          SfPrintF(local_30c,"%s\\%s",local_410,local_512);
          SendMessageA(pHVar3,0xb,0,0);
          iVar5 = FUN_004f8100(param_1,local_30c,1,1);
          if (iVar5 == 0) {
            while ((local_512[0] != '\0' && (local_512[0] != '\\'))) {
              pCVar9 = CharNextA(pCVar9);
              local_512[0] = *pCVar9;
            }
            uVar14 = (int)pCVar9 - (int)local_512;
            pCVar15 = local_512;
            pCVar17 = local_30c;
            for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pCVar17 = *(undefined4 *)pCVar15;
              pCVar15 = pCVar15 + 4;
              pCVar17 = pCVar17 + 4;
            }
            for (uVar12 = uVar14 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pCVar17 = *pCVar15;
              pCVar15 = pCVar15 + 1;
              pCVar17 = pCVar17 + 1;
            }
            local_30c[uVar14] = '\0';
            puVar18 = local_544;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *puVar18 = 0;
              puVar18 = puVar18 + 1;
            }
            local_530 = local_30c;
            local_52c = local_104;
            local_544[0] = 0x405;
            (**(code **)(*(int *)param_1[0xf] + 0xc))((int *)param_1[0xf],local_544);
            if (local_104[0] != '\0') {
              SfPrintF(local_30c,"%s\\Entire Network\\%s\\%s",local_410,local_104,local_512);
              FUN_004f8100(param_1,local_30c,1,1);
            }
          }
          SendMessageA(pHVar3,0xb,1,0);
          SetCursor(pHVar7);
          param_1[0x139] = 0;
          return 0;
        }
        FUN_004fa990(param_1,pHVar7,&local_514);
        SetCursor(pHVar7);
        param_1[0x139] = 0;
        return 0;
      }
    }
    else if (*(int *)(param_5 + 8) == -0x324) {
      FUN_00497bf0(param_1,1);
      return 0;
    }
    local_55c = DefWindowProcA(param_2,0x4e,(WPARAM)param_4,param_5);
  }
  else if (param_3 == 0x111) {
    uVar12 = (uint)param_4 >> 0x10;
    switch(uVar12) {
    case 1:
      if (DAT_0066234c == 0) {
        LVar4 = SendMessageA(param_2,0x147,0,0);
        FUN_004fb4c0(param_2,LVar4,local_30c);
        SendMessageA((HWND)param_1[6],0xb,0,0);
        FUN_004f8100(param_1,local_30c,1,0);
        SendMessageA((HWND)param_1[6],0xb,1,0);
        _DAT_00662348 = uVar12;
        return 0;
      }
      DAT_0066234c = 0;
      _DAT_00662348 = uVar12;
      return 0;
    default:
      LVar4 = DefWindowProcA(param_2,0x111,(WPARAM)param_4,param_5);
      _DAT_00662348 = uVar12;
      return LVar4;
    case 8:
      WVar6 = SendMessageA(param_2,0x147,0,0);
      if (WVar6 == 0xffffffff) {
        SendMessageA(param_2,0x14e,DAT_00662350,0);
        PostMessageA((HWND)param_1[1],0x600,0xffffffff,0);
        _DAT_00662348 = uVar12;
        return 0;
      }
      break;
    case 9:
      WVar6 = SendMessageA(param_2,0x147,0,0);
      if (WVar6 == 0xffffffff) {
        SendMessageA(param_2,0x14e,DAT_00662350,0);
        PostMessageA((HWND)param_1[1],0x600,0xffffffff,0);
        _DAT_00662348 = uVar12;
        return 0;
      }
      break;
    case 10:
      DAT_0066234c = 1;
      _DAT_00662348 = uVar12;
      return 0;
    }
    DAT_00662350 = WVar6;
    _DAT_00662348 = uVar12;
    return 0;
  }
  return local_55c;
}


