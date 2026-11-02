/* Module: vidcap30.exe
   Function: FUN_004fe5f0
   Address: 004fe5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_004fe5f0(int param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  POINT pt;
  POINT pt_00;
  short sVar1;
  BOOL BVar2;
  HCURSOR pHVar3;
  LRESULT LVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  HWND pHVar8;
  int iVar9;
  byte *pbVar10;
  WPARAM *pWVar11;
  undefined4 uVar12;
  tagPOINT local_38;
  tagRECT local_30;
  WPARAM local_20 [4];
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  sVar1 = (short)((uint)param_4 >> 0x10);
  if (param_2 < 0x203) {
    if (param_2 != 0x202) {
      if (param_2 == 0x20) {
        DVar7 = GetMessagePos();
        local_38.x = (LONG)(short)DVar7;
        local_38.y = (LONG)(short)(DVar7 >> 0x10);
        ScreenToClient(*(HWND *)(param_1 + 4),&local_38);
        iVar9 = *(int *)(param_1 + 0x490);
        if (iVar9 != -1) {
          if (sVar1 != 0x200) {
            if (sVar1 != 0x201) {
              return 0;
            }
            *(undefined4 *)(param_1 + 0x488) = 1;
            SetCapture(*(HWND *)(param_1 + 4));
            iVar5 = param_1 + iVar9 * 0x18;
            if ((*(byte *)(param_1 + 0x46c + iVar9 * 0x18) & 1) != 0) {
              *(LONG *)(param_1 + 0x48c) = local_38.x - *(int *)(iVar5 + 0x458);
              return 0;
            }
            *(LONG *)(param_1 + 0x48c) = local_38.y - *(int *)(iVar5 + 0x45c);
            return 0;
          }
          pt_00.y = local_38.y;
          pt_00.x = local_38.x;
          BVar2 = PtInRect((RECT *)(param_1 + 0x458 + iVar9 * 0x18),pt_00);
          if (BVar2 != 0) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x490) = 0xffffffff;
          pHVar3 = (HCURSOR)_SfGetUICursor_4(0x7f8a);
          SetCursor(pHVar3);
        }
        LVar4 = DefWindowProcA(*(HWND *)(param_1 + 4),0x20,param_3,param_4);
        return LVar4;
      }
      if (param_2 != 0x200) {
        return 0;
      }
      local_38.x = (LONG)(short)param_4;
      local_38.y = (LONG)sVar1;
      if (*(int *)(param_1 + 0x488) != 1) {
        if (*(int *)(param_1 + 0x488) == 2) {
          LVar4 = FUN_004fdc50(param_1,local_38.x,local_38.y);
          return LVar4;
        }
        if (*(int *)(param_1 + 0x490) != -1) {
          return 0;
        }
        iVar9 = 0;
        pbVar10 = (byte *)(param_1 + 0x46c);
        do {
          if (((*pbVar10 & 4) != 0) &&
             (pt.y = local_38.y, pt.x = local_38.x, BVar2 = PtInRect((RECT *)(pbVar10 + -0x14),pt),
             BVar2 != 0)) {
            if ((*pbVar10 & 1) == 0) {
              uVar12 = 0xc;
            }
            else {
              uVar12 = 0xb;
            }
            pHVar3 = (HCURSOR)_SfGetUICursor_4(uVar12);
            SetCursor(pHVar3);
            *(int *)(param_1 + 0x490) = iVar9;
          }
          iVar9 = iVar9 + 1;
          pbVar10 = pbVar10 + 0x18;
        } while (iVar9 < 2);
        return 0;
      }
      iVar9 = *(int *)(param_1 + 0x490);
      iVar5 = GetSystemMetrics(0x20);
      GetClientRect(*(HWND *)(param_1 + 4),&local_30);
      *(undefined4 *)(param_1 + (iVar9 * 3 + 0x8d) * 8) = 0xffffffff;
      if (iVar9 == 0) {
        iVar9 = (int)(short)local_38.x - *(int *)(param_1 + 0x48c);
        if (iVar9 < 0x20) {
          iVar9 = 0x20;
        }
        else {
          iVar5 = (local_30.right - iVar5) + -0x20;
          if (iVar5 < iVar9) {
            iVar9 = iVar5;
          }
        }
        *(int *)(param_1 + 0x458) = iVar9;
      }
      else if (iVar9 == 1) {
        iVar6 = (int)(short)local_38.y - *(int *)(param_1 + 0x48c);
        iVar9 = *(int *)(param_1 + 0x4c8) + *(int *)(param_1 + 0x4dc) + 0x18 + iVar5;
        if (iVar6 < iVar9) {
          *(int *)(param_1 + 0x474) = iVar9;
        }
        else {
          iVar9 = ((local_30.bottom - *(int *)(param_1 + 0x4dc)) - iVar5) + -0x18;
          if (iVar9 < iVar6) {
            iVar6 = iVar9;
          }
          *(int *)(param_1 + 0x474) = iVar6;
        }
      }
      FUN_00498230(param_1,local_30.bottom << 0x10 | local_30.right & 0xffffU);
      return 0;
    }
  }
  else {
    if (param_2 == 0x204) {
      if (*(int *)(param_1 + 0x488) != 2) {
        return 0;
      }
      pWVar11 = local_20;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pWVar11 = 0;
        pWVar11 = pWVar11 + 1;
      }
      DVar7 = GetMessagePos();
      local_20[3] = (WPARAM)(short)DVar7;
      local_20[0] = *(WPARAM *)(param_1 + 4);
      local_8 = *(undefined4 *)(param_1 + 0x3c);
      local_10 = (int)(short)(DVar7 >> 0x10);
      local_c = *(undefined4 *)(param_1 + 0x498);
      local_20[1] = *(WPARAM *)(param_1 + 0x2c);
      local_20[2] = 5;
      SendMessageA(*(HWND *)(param_1 + 8),0x4e,local_20[1],(LPARAM)local_20);
      return 0;
    }
    if (param_2 != 0x205) {
      return 0;
    }
  }
  local_38.x = (LONG)(short)param_4;
  local_38.y = (LONG)sVar1;
  if (*(int *)(param_1 + 0x488) == 2) {
    if ((*(byte *)(param_1 + 0x4a4) & 2) == 0) {
      if (param_2 != 0x205) {
        LVar4 = FUN_004fe080(param_1,local_38.x,local_38.y);
        return LVar4;
      }
    }
    else if (param_2 != 0x202) {
      LVar4 = FUN_004fe080(param_1,local_38.x,local_38.y);
      return LVar4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x488) = 0;
    *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffffe;
    pHVar8 = GetCapture();
    if (pHVar8 == *(HWND *)(param_1 + 4)) {
      ReleaseCapture();
      return 0;
    }
  }
  return 0;
}


