/* Module: sfpublish.dll
   Function: FUN_0040ef70
   Address: 0040ef70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0040f3c9) */
/* WARNING: Removing unreachable block (ram,0x0040f3ec) */

int __thiscall FUN_0040ef70(void *this,undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  UINT UVar1;
  SHORT SVar2;
  HWND pHVar3;
  DWORD DVar4;
  LRESULT LVar5;
  int iVar6;
  uchar *puVar7;
  HICON hicon;
  HBITMAP hbmImage;
  undefined4 *lParam;
  int *piVar8;
  int iVar9;
  int *unaff_EBX;
  WPARAM wParam;
  int *unaff_ESI;
  uint uVar10;
  WINDOWPLACEMENT *pWVar11;
  uint uVar12;
  tagRECT local_14c [2];
  undefined4 local_12c [3];
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  WINDOWPLACEMENT WStack_104;
  uchar local_c8 [199];
  undefined1 local_1;
  
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),500);
  *(HWND *)((int)this + 0x48) = pHVar3;
  *param_3 = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 100) != 0) {
    SendMessageA(*(HWND *)((int)this + 4),0x80,0,*(int *)((int)this + 100));
  }
  local_14c[0].top = **(int **)((int)this + 0x5c);
  local_14c[0].left = (LONG)ImageList_Create(0x30,0x30,0xff,1,1);
  pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),0x3e9);
  SendMessageA(pHVar3,0x1036,0,0x80);
  DVar4 = GetSysColor(0xf);
  SendMessageA(pHVar3,0x1001,0,DVar4);
  DVar4 = GetSysColor(0xf);
  SendMessageA(pHVar3,0x1026,0,DVar4);
  SendMessageA(pHVar3,0x101e,0,DAT_0043f360 - 6 & 0xffff);
  local_14c[0].right = 0;
  local_14c[0].bottom = 0;
  if (0 < local_14c[0].top) {
    do {
      iVar6 = *(int *)(*(int *)(*(int *)((int)this + 0x5c) + 8) + local_14c[0].bottom * 4);
      LVar5 = SendMessageA(pHVar3,0x1011,0,*(LPARAM *)(iVar6 + 8));
      if (local_14c[0].right <= LVar5) {
        local_14c[0].right = SendMessageA(pHVar3,0x1011,0,*(LPARAM *)(iVar6 + 8));
      }
      local_14c[0].bottom = local_14c[0].bottom + 1;
    } while (local_14c[0].bottom < local_14c[0].top);
  }
  local_14c[0].bottom = GetSystemMetrics(0x20);
  iVar6 = GetSystemMetrics(2);
  DAT_0043f360 = local_14c[0].right + iVar6 + 4 + local_14c[0].bottom * 4;
  SendMessageA(pHVar3,0x1035,0,DAT_0043f360 & 0xffff | 0x480000);
  local_14c[0].bottom = 0;
  if (0 < local_14c[0].top) {
    do {
      UVar1 = *(UINT *)(*(int *)(*(int *)((int)this + 0x5c) + 8) + local_14c[0].bottom * 4);
      local_10c = 0xffffffff;
      local_110 = 0;
      local_11c = 0xf;
      local_108 = *(undefined4 *)(UVar1 + 8);
      local_114 = 0;
      local_118 = 0x7fff;
      WStack_104.flags = local_14c[0].bottom;
      WStack_104.showCmd = UVar1;
      SendMessageA(pHVar3,0x1007,0,(LPARAM)&local_11c);
      lstrcpynA((LPSTR)local_c8,*(LPCSTR *)(UVar1 + 0x1c),200);
      local_1 = 0;
      _mbslwr(local_c8);
      puVar7 = _mbsstr(local_c8,".ico");
      if (puVar7 == (uchar *)0x0) {
        puVar7 = _mbsstr(local_c8,".bmp");
        if ((puVar7 != (uchar *)0x0) &&
           (hbmImage = (HBITMAP)FUN_0041b6c0((undefined4 *)0x0,(LPCSTR)local_c8,0,0x30,0x30,0x2010),
           hbmImage != (HBITMAP)0x0)) {
          ImageList_AddMasked((HIMAGELIST)local_14c[0].left,hbmImage,0xff00ff);
          DeleteObject(hbmImage);
        }
      }
      else {
        hicon = (HICON)FUN_0041b6c0((undefined4 *)0x0,(LPCSTR)local_c8,1,0x30,0x30,0x2010);
        if (hicon != (HICON)0x0) {
          ImageList_ReplaceIcon((HIMAGELIST)local_14c[0].left,-1,hicon);
          DestroyIcon(hicon);
        }
      }
      local_14c[0].bottom = local_14c[0].bottom + 1;
    } while (local_14c[0].bottom < local_14c[0].top);
  }
  SendMessageA(pHVar3,0x1003,0,local_14c[0].left);
  wParam = 0;
  iVar6 = 4;
  if (0 < local_14c[0].top) {
    local_14c[0].left = (int)(DAT_0043f360 - 0x30) / 2 & 0xffff;
    do {
      SendMessageA(pHVar3,0x100f,wParam,iVar6 << 0x10 | local_14c[0].left);
      SendMessageA(pHVar3,0x102a,wParam,0);
      if (&stack0x00000000 == (undefined1 *)0x12c) {
        lParam = (undefined4 *)0x0;
      }
      else {
        local_12c[0] = 0;
        lParam = local_12c;
      }
      SendMessageA(pHVar3,0x100e,wParam,(LPARAM)lParam);
      wParam = wParam + 1;
      iVar6 = local_120 + 4;
    } while ((int)wParam < local_14c[0].top);
  }
  WStack_104.rcNormalPosition.top = 3;
  WStack_104.rcNormalPosition.left = 3;
  SendMessageA(pHVar3,0x102b,**(WPARAM **)((int)this + 0x60),(LPARAM)&WStack_104.ptMinPosition.y);
  *(undefined4 *)((int)this + 0x50) = 0;
  if (&stack0x00000000 == (undefined1 *)0x14c) {
    iVar6 = -0x7fffbffd;
  }
  else {
    piVar8 = (int *)SendMessageA(*(HWND *)((int)this + 0x48),DAT_004413f0,0,0);
    iVar6 = (-(uint)(piVar8 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < iVar6) {
      iVar6 = (**(code **)*piVar8)();
    }
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 8))();
    }
  }
  if (-1 < iVar6) {
    local_14c[0].right = 0;
    local_14c[0].left = 0;
    iVar6 = (**(code **)**(undefined4 **)((int)this + 0x50))();
    if ((-1 < iVar6) &&
       (iVar6 = (**(code **)(*unaff_EBX + 0x10))(unaff_EBX,&DAT_0043cb30), -1 < iVar6)) {
      iVar6 = (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,(int)this + 0x1c);
    }
    if (unaff_ESI != (int *)0x0) {
      (**(code **)(*unaff_ESI + 8))();
    }
    FUN_00407d90((int *)&stack0xfffffeb0);
    if (-1 < iVar6) {
      if (*(int *)((int)this + 0x4c) != 0) {
        iVar6 = FUN_0040e110(*(HWND *)((int)this + 0x48),(LRESULT *)&stack0xfffffea8);
        if (-1 < iVar6) {
          iVar6 = (*(code *)*puRam00000000)(0,&DAT_00435620);
        }
        if (-1 < iVar6) {
          iVar6 = (*(code *)puRam00000000[7])(0);
        }
      }
      if (-1 < iVar6) {
        if (&stack0x00000000 == (undefined1 *)0x158) {
          iVar6 = -0x7fffbffd;
        }
        else {
          piVar8 = (int *)SendMessageA(*(HWND *)((int)this + 0x48),DAT_004413f4,0,0);
          iVar6 = (-(uint)(piVar8 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
          if (-1 < iVar6) {
            iVar6 = (**(code **)*piVar8)(piVar8,&DAT_00435490);
          }
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 8))();
          }
        }
        if (-1 < iVar6) {
          SVar2 = GetKeyState(0x10);
          if ((-1 < SVar2) || (SVar2 = GetKeyState(0x11), -1 < SVar2)) {
            iVar6 = (*(code *)puRam00000000[0x1d])(0);
          }
          (*(code *)puRam00000000[2])();
          if (-1 < iVar6) {
            pWVar11 = &WStack_104;
            uVar12 = 0x2c;
            uVar10 = 0x3f6;
            iVar9 = FUN_00401310();
            uVar10 = FUN_0041f600(iVar9,uVar10,(LPBYTE)pWVar11,uVar12);
            if (uVar10 == 0) {
              FUN_00424f50(*(HWND *)((int)this + 4),(HWND)0x0,(int *)0x0,0x8001);
            }
            else {
              WStack_104.length = 0x2c;
              SetWindowPlacement(*(HWND *)((int)this + 4),&WStack_104);
            }
            SetFocus(*(HWND *)((int)this + 4));
            pHVar3 = GetDlgItem(*(HWND *)((int)this + 4),500);
            ShowWindow(pHVar3,0);
            FUN_0040e6e0((int)this);
            GetWindowRect(*(HWND *)((int)this + 4),local_14c);
            pHVar3 = GetParent(pHVar3);
            MapWindowPoints(*(HWND *)((int)this + 4),pHVar3,(LPPOINT)local_14c,2);
            MoveWindow(*(HWND *)((int)this + 4),local_14c[0].left,local_14c[0].top,
                       local_14c[0].right - local_14c[0].left,
                       (local_14c[0].bottom - local_14c[0].top) + 2,0);
            MoveWindow(*(HWND *)((int)this + 4),local_14c[0].left,local_14c[0].top,
                       local_14c[0].right - local_14c[0].left,local_14c[0].bottom - local_14c[0].top
                       ,1);
          }
        }
      }
    }
  }
  return (-1 < iVar6) - 1;
}


