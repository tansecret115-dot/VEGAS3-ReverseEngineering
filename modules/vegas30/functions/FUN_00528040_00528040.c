/* Module: vegas30.exe
   Function: FUN_00528040
   Address: 00528040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00528040(int param_1)

{
  LONG x;
  LONG LVar1;
  int *piVar2;
  int iVar3;
  HDC hdc;
  HGDIOBJ pvVar4;
  int iVar5;
  HDWP pvVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint local_144;
  int local_13c;
  int local_12c;
  uint local_128;
  int *local_124;
  tagRECT local_120;
  int local_110;
  tagSIZE local_10c;
  CHAR local_104 [260];
  
  if (*(int *)(param_1 + 0xe8) != 0) {
    piVar2 = (int *)_SfGetUIFontSize_4(100);
    local_124 = piVar2;
    GetClientRect(*(HWND *)(param_1 + 0x8c),&local_120);
    *(LONG *)(param_1 + 0x90) = local_120.left;
    *(LONG *)(param_1 + 0x94) = local_120.top;
    *(LONG *)(param_1 + 0x98) = local_120.right;
    *(LONG *)(param_1 + 0x9c) = local_120.bottom;
    InflateRect(&local_120,-2,-2);
    iVar3 = *piVar2 * 0x32;
    puVar7 = &DAT_00644a78;
    iVar5 = *piVar2 * 2;
    iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    uVar9 = (int)(piVar2[1] * 0xe + (piVar2[1] * 0xe >> 0x1f & 7U)) >> 3;
    local_110 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
    local_144 = uVar9;
    do {
      FUN_00527fa0(param_1,*puVar7,&local_12c);
      local_12c = local_12c + 0xc;
      local_128 = local_128 + 4;
      if (iVar3 < local_12c) {
        iVar3 = local_12c;
      }
      if ((int)uVar9 < (int)local_128) {
        uVar9 = local_128;
        local_144 = local_128;
      }
      puVar7 = puVar7 + 1;
    } while (puVar7 < &DAT_00644a84);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      local_12c = 0;
      local_128 = 0;
      _SfGetToolbarSize_8(*(undefined4 *)(param_1 + 0xe4),&local_12c);
      local_13c = local_110 + iVar3;
      if (local_13c <= local_12c) {
        local_13c = local_12c;
      }
      hdc = GetDC(*(HWND *)(param_1 + 0xe0));
      pvVar4 = (HGDIOBJ)SendMessageA(*(HWND *)(param_1 + 0xe0),0x31,0,0);
      pvVar4 = SelectObject(hdc,pvVar4);
      iVar5 = GetWindowTextA(*(HWND *)(param_1 + 0xe0),local_104,0x103);
      GetTextExtentPoint32A(hdc,local_104,iVar5,&local_10c);
      SelectObject(hdc,pvVar4);
      ReleaseDC(*(HWND *)(param_1 + 0xe0),hdc);
      pvVar6 = BeginDeferWindowPos(*(int *)(param_1 + 0xe8));
      LVar1 = local_120.right;
      x = local_120.left;
      iVar11 = DAT_0064b3f4;
      iVar5 = DAT_0064b3f4 + 8;
      if (*(int *)(param_1 + 0xe4) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xe4),(HWND)0x0,
                                (local_120.right - local_13c) - local_12c,
                                (int)(iVar5 - local_128) / 2 + local_120.top,local_12c,local_128,
                                0x14);
      }
      iVar10 = LVar1 + ((-1 - local_13c) - local_12c);
      if (*(HWND *)(param_1 + 0xd8) != (HWND)0x0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xd8),(HWND)0x0,x,local_120.top,
                                iVar10 - x,iVar5,0x14);
      }
      iVar8 = x + 4;
      iVar10 = (iVar10 - iVar8) + -4;
      if (*(int *)(param_1 + 0xdc) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xdc),(HWND)0x0,iVar8,
                                (iVar5 - iVar11) / 2 + local_120.top,iVar10,iVar11,0x10);
      }
      if (*(int *)(param_1 + 0xe0) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xe0),(HWND)0x0,iVar8,
                                (iVar5 - local_10c.cy) / 2 + local_120.top,iVar10,local_10c.cy,0x10)
        ;
      }
      iVar8 = local_120.bottom + (-2 - iVar5);
      iVar10 = ((int)(local_124[1] * 4 + (local_124[1] * 4 >> 0x1f & 7U)) >> 3) + local_144;
      iVar11 = local_120.top + 1;
      if (*(int *)(param_1 + 0xc4) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xc4),(HWND)0x0,local_120.right - iVar3,
                                iVar11,iVar3,(iVar8 <= (int)(iVar11 + local_144)) - 1 & local_144,
                                0x14);
        iVar11 = iVar11 + iVar10;
      }
      if (*(int *)(param_1 + 200) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 200),(HWND)0x0,local_120.right - iVar3,
                                iVar11,iVar3,(iVar8 <= (int)(iVar11 + local_144)) - 1 & local_144,
                                0x14);
        iVar11 = iVar11 + ((int)(local_124[1] * 3 + (local_124[1] * 3 >> 0x1f & 7U)) >> 3) + iVar10;
      }
      if (*(int *)(param_1 + 0xcc) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xcc),(HWND)0x0,local_120.right - iVar3,
                                iVar11,iVar3,(iVar8 <= (int)(iVar11 + local_144)) - 1 & local_144,
                                0x14);
        iVar11 = iVar11 + iVar10;
      }
      if (*(int *)(param_1 + 0xd0) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xd0),(HWND)0x0,local_120.right - iVar3,
                                iVar11,iVar3,(iVar8 <= (int)(iVar11 + local_144)) - 1 & local_144,
                                0x14);
        iVar11 = iVar11 + iVar10;
      }
      if (*(int *)(param_1 + 0xd4) != 0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xd4),(HWND)0x0,local_120.right - iVar3,
                                iVar11,iVar3,(iVar8 <= (int)(iVar11 + local_144)) - 1 & local_144,
                                0x14);
      }
      iVar5 = local_120.top + 0xb + iVar5;
      local_124 = (int *)local_120.left;
      iVar3 = (((local_120.right - local_120.left) - local_110) - iVar3) + -2;
      if (*(HWND *)(param_1 + 0xb0) != (HWND)0x0) {
        pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xb0),(HWND)0x0,local_120.left,iVar5,
                                iVar3,iVar8 - iVar5,0x14);
        *(int **)(param_1 + 0xb4) = local_124;
        *(int *)(param_1 + 0xb8) = iVar5 + -8;
        *(int *)(param_1 + 0xbc) = iVar3;
        *(int *)(param_1 + 0xc0) = iVar5 + -6;
      }
      EndDeferWindowPos(pvVar6);
      if (*(int *)(*(int *)(param_1 + 0x84) + 4) == 0) {
        InvalidateRect(*(HWND *)(param_1 + 0xe0),(RECT *)0x0,1);
        return;
      }
      InvalidateRect(*(HWND *)(param_1 + 0xdc),(RECT *)0x0,1);
      return;
    }
    pvVar6 = BeginDeferWindowPos(*(int *)(param_1 + 0xe8));
    if (*(HWND *)(param_1 + 0xb0) != (HWND)0x0) {
      pvVar6 = DeferWindowPos(pvVar6,*(HWND *)(param_1 + 0xb0),(HWND)0x0,local_120.left,
                              local_120.top,local_120.right - local_120.left,
                              local_120.bottom - local_120.top,0x14);
    }
    EndDeferWindowPos(pvVar6);
  }
  return;
}


