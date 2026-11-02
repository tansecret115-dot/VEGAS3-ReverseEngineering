/* Module: vegas30.exe
   Function: FUN_0055a390
   Address: 0055a390
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0055a390(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  LONG LVar4;
  uint uVar5;
  int iVar6;
  HBRUSH pHVar7;
  DWORD DVar8;
  HGDIOBJ pvVar9;
  HWND pHVar10;
  code *pcVar11;
  HGDIOBJ unaff_EDI;
  float10 fVar12;
  HGDIOBJ ho;
  undefined4 uVar13;
  uint local_12c;
  RECT local_128;
  undefined8 local_118;
  CHAR local_10c [264];
  
  local_12c = 0;
  LVar4 = GetWindowLongA(param_1,8);
  if (LVar4 == 0) {
    if (param_2 == 0x110) {
      uVar5 = FUN_0055ac00();
      return uVar5;
    }
  }
  else {
    puVar1 = (undefined4 *)(LVar4 + 0x10);
    iVar6 = GetDlgCtrlID(param_4);
    if (param_2 < 0x4f) {
      if (param_2 == 0x4e) {
        iVar6 = param_4[2].unused;
        if (iVar6 == -0xcb) {
          FUN_0055b090();
          return 0;
        }
        if (iVar6 != -0xca) {
          if (iVar6 != -0xc9) {
            return 0;
          }
          SetWindowLongA(param_1,0,0);
          return 0;
        }
        FUN_0055b090();
        iVar6 = FUN_0055b370();
        if (iVar6 < 0) {
          SetWindowLongA(param_1,0,1);
        }
        else {
          SetWindowLongA(param_1,0,0);
        }
      }
      else if (param_2 == 2) {
        *puVar1 = 0;
      }
      else {
        if (param_2 == 6) {
          FUN_00404790();
          return 0;
        }
        if (param_2 != 0x2b) {
          return 0;
        }
        local_128.left = param_4[7].unused;
        local_128.top = param_4[8].unused;
        local_128.right = param_4[9].unused;
        local_128.bottom = param_4[10].unused;
        pcVar11 = FrameRect_exref;
        if ((param_4[4].unused & 0x10) != 0) {
          pHVar7 = GetStockObject(4);
          pcVar11 = FrameRect_exref;
          FrameRect((HDC)param_4[6].unused,&local_128,pHVar7);
          local_128.left = local_128.left + 1;
          local_128.top = local_128.top + 1;
          local_128.right = local_128.right + -1;
          local_128.bottom = local_128.bottom + -1;
        }
        iVar6 = param_4[1].unused;
        if (((iVar6 == 0x439) || (iVar6 == 0x43b)) || (iVar6 == 0x43a)) {
          uVar2 = ftol();
          uVar3 = ftol();
          uVar5 = ftol();
          local_12c = (uint)CONCAT11(uVar2,uVar3) << 8 | uVar5 & 0xff;
          uVar2 = ftol();
          uVar3 = ftol();
          uVar5 = ftol();
          local_118 = (double)CONCAT44(local_118._4_4_,
                                       (uint)CONCAT11(uVar2,uVar3) << 8 | uVar5 & 0xff);
          uVar2 = ftol();
          uVar3 = ftol();
          uVar5 = ftol();
          uVar5 = (uint)CONCAT11(uVar2,uVar3) << 8 | uVar5 & 0xff;
          pcVar11 = FrameRect_exref;
        }
        else {
          uVar5 = (uint)local_118;
        }
        if (param_3 == 0x439) {
          local_118 = (double)CONCAT44(local_118._4_4_,local_12c);
        }
        else if (param_3 == 0x43a) {
          local_118 = (double)CONCAT44(local_118._4_4_,uVar5);
        }
        else if (param_3 != 0x43b) {
          local_118 = (double)((ulonglong)local_118._4_4_ << 0x20);
        }
        if ((param_4[4].unused & 1) == 0) {
          DVar8 = GetSysColor(0x15);
          CreateSolidBrush(DVar8);
          pvVar9 = (HGDIOBJ)param_4[6].unused;
          (*pcVar11)();
          DeleteObject(unaff_EDI);
          local_128.left = local_128.left + -1;
          DVar8 = GetSysColor(0x14);
          CreateSolidBrush(DVar8);
          ho = (HGDIOBJ)param_4[6].unused;
          (*pcVar11)();
          DeleteObject(pvVar9);
          DVar8 = GetSysColor(0x10);
          pHVar7 = CreateSolidBrush(DVar8);
          (*pcVar11)(param_4[6].unused,&stack0xfffffec0,pHVar7);
          DeleteObject(ho);
          DVar8 = GetSysColor(0xf);
          pHVar7 = CreateSolidBrush(DVar8);
          FillRect((HDC)param_4[6].unused,(RECT *)&stack0xfffffeb4,pHVar7);
          DeleteObject(pHVar7);
          pvVar9 = GetStockObject(4);
          (*pcVar11)(param_4[6].unused,&stack0xfffffeb4,pvVar9);
          local_128.top = local_128.top + 1;
          local_128.left = local_128.left + 1;
          local_128.right = local_128.right + -1;
          local_128.bottom = local_128.bottom + -1;
          pHVar7 = CreateSolidBrush(SUB84(local_118,0));
          FillRect((HDC)param_4[6].unused,&local_128,pHVar7);
          DeleteObject(pHVar7);
        }
        else {
          DVar8 = GetSysColor(0x10);
          CreateSolidBrush(DVar8);
          (*pcVar11)();
          DeleteObject(unaff_EDI);
          local_128.left = local_128.left + -1;
          DVar8 = GetSysColor(0xf);
          pHVar7 = CreateSolidBrush(DVar8);
          FillRect((HDC)param_4[6].unused,(RECT *)&stack0xfffffecc,pHVar7);
          DeleteObject(pHVar7);
          local_128.left = local_128.left + -3;
          GetStockObject(4);
          (*pcVar11)(param_4[6].unused);
          local_128.top = local_128.top + 1;
          local_128.left = local_128.left + 1;
          local_128.right = local_128.right + -1;
          local_128.bottom = local_128.bottom + -1;
          pHVar7 = CreateSolidBrush(SUB84(local_118,0));
          FillRect((HDC)param_4[6].unused,&local_128,pHVar7);
          DeleteObject(pHVar7);
        }
      }
    }
    else {
      if (param_2 != 0x53) {
        if (param_2 != 0x111) {
          if (param_2 != 0x115) {
            return 0;
          }
          if (iVar6 != 0x62f) {
            iVar6 = LVar4 + 0x130;
            uVar13 = 0;
            pHVar10 = GetDlgItem(param_1,0x4bd);
            uVar5 = FUN_0055b240(puVar1,pHVar10,iVar6,uVar13);
            return uVar5;
          }
          iVar6 = LVar4 + 0x138;
          uVar13 = 0x9999999a;
          local_118 = (double)CONCAT44(local_118._4_4_,iVar6);
          pHVar10 = GetDlgItem(param_1,0x4bf);
          uVar5 = FUN_0055b240(puVar1,pHVar10,iVar6,uVar13);
          GetDlgItem(param_1,0x635);
          SfSetWindowText();
          return uVar5;
        }
        uVar5 = param_3 & 0xffff;
        local_118 = (double)(CONCAT44(local_118._4_4_,param_3) & 0xffffffff0000ffff);
        param_3 = param_3 >> 0x10;
        if (uVar5 == 0x4bd) {
          if (param_3 != 0x200) {
            return 0;
          }
          GetDlgItemTextA((HWND)*puVar1,0x4bd,local_10c,0x104);
          fVar12 = (float10)_SfTextToDoubleTokenEx_32
                                      (local_10c,*(undefined4 *)(LVar4 + 0x130),
                                       *(undefined4 *)(LVar4 + 0x134));
          local_118 = (double)fVar12;
          *(double *)(LVar4 + 0x130) = (double)fVar12;
          SfSetWindowText();
          return 0;
        }
        if (uVar5 == 0x4bf) {
          if (param_3 != 0x200) {
            return 0;
          }
          GetDlgItemTextA((HWND)*puVar1,0x4bf,local_10c,0x104);
          fVar12 = (float10)_SfTextToDoubleTokenEx_32
                                      (local_10c,*(undefined4 *)(LVar4 + 0x138),
                                       *(undefined4 *)(LVar4 + 0x13c));
          local_118 = (double)fVar12;
          *(double *)(LVar4 + 0x138) = (double)fVar12;
          SfSetWindowText();
          GetDlgItem(param_1,0x635);
          SfSetWindowText();
          return 0;
        }
        if (param_3 == 6) {
          uVar5 = SendMessageA(param_1,0x400,0,0);
          if ((uVar5 >> 0x10 == 0x534b) && ((uVar5 & 0xffff) != (uint)local_118)) {
            DAT_00645410 = uVar5 & 0xffff;
          }
          SendMessageA(param_1,0x401,(uint)local_118,0);
          return 0;
        }
        if (param_3 != 7) {
          if (param_3 != 0) {
            return 0;
          }
          if (uVar5 < 0x439) {
            return 0;
          }
          if (0x43b < uVar5) {
            return 0;
          }
          uVar5 = FUN_005587d0();
          return uVar5;
        }
        SendMessageA(param_1,0x401,DAT_00645410,0);
        return 0;
      }
      _SfHelp_ContextPopupHelp_24(0);
    }
    local_12c = 1;
  }
  return local_12c;
}


