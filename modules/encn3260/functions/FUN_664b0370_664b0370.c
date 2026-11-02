/* Module: encn3260.dll
   Function: FUN_664b0370
   Address: 664b0370
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT __thiscall FUN_664b0370(void *this,HWND param_1,uint param_2,WPARAM param_3,LPARAM param_4)

{
  int *this_00;
  uint uVar1;
  HDC hdc;
  HDC hdc_00;
  HBITMAP pHVar2;
  HBRUSH h;
  LPCSTR lpString;
  int *piVar3;
  LRESULT LVar4;
  tagPAINTSTRUCT local_a4;
  int local_64 [3];
  int local_58 [3];
  int local_4c;
  HGDIOBJ local_48;
  HGDIOBJ local_44;
  HGDIOBJ local_40;
  LPCSTR local_3c [3];
  HPEN local_30;
  tagSIZE local_2c;
  tagRECT local_24;
  tagRECT local_14;
  
  if (param_2 != 0xf) {
    LVar4 = DefWindowProcA(param_1,param_2,param_3,param_4);
    return LVar4;
  }
  hdc = BeginPaint(param_1,&local_a4);
  GetWindowRect(param_1,&local_24);
  hdc_00 = CreateCompatibleDC(hdc);
  if (((local_24.left - local_24.right != *(int *)((int)this + 8) - *(int *)((int)this + 0x10)) ||
      (local_24.top - local_24.bottom != *(int *)((int)this + 0xc) - *(int *)((int)this + 0x14))) ||
     (*(int *)((int)this + 0x18) == 0)) {
    if (*(HGDIOBJ *)((int)this + 0x18) != (HGDIOBJ)0x0) {
      DeleteObject(*(HGDIOBJ *)((int)this + 0x18));
    }
    pHVar2 = CreateCompatibleBitmap
                       (hdc,local_24.right - local_24.left,local_24.bottom - local_24.top);
    *(HBITMAP *)((int)this + 0x18) = pHVar2;
    *(LONG *)((int)this + 8) = local_24.left;
    *(LONG *)((int)this + 0xc) = local_24.top;
    *(LONG *)((int)this + 0x10) = local_24.right;
    *(LONG *)((int)this + 0x14) = local_24.bottom;
  }
  local_14.right = local_24.right - local_24.left;
  local_14.left = 0;
  local_14.top = 0;
  local_14.bottom = local_24.bottom - local_24.top;
  local_40 = SelectObject(hdc_00,*(HGDIOBJ *)((int)this + 0x18));
  h = CreateSolidBrush(*(COLORREF *)((int)this + 0x1c));
  local_30 = CreatePen(5,0,0);
  local_48 = SelectObject(hdc_00,h);
  local_44 = SelectObject(hdc_00,local_30);
  Rectangle(hdc_00,local_14.left,local_14.top,local_14.right + 1,local_14.bottom + 1);
  local_4c = SetBkMode(hdc_00,1);
  SetTextColor(hdc_00,*(COLORREF *)((int)this + 0x20));
  this_00 = (int *)((int)this + 0x48);
  GetTextExtentPointA(hdc_00,*(LPCSTR *)((int)this + 0x48),
                      *(int *)(*(LPCSTR *)((int)this + 0x48) + -8),&local_2c);
  if (local_14.right - local_14.left < local_2c.cx) {
    lpString = (LPCSTR)*this_00;
    param_2 = 1;
    if (0 < *(int *)(lpString + -8)) {
      do {
        GetTextExtentPointA(hdc_00,lpString,param_2,&local_2c);
        if (local_14.right - local_14.left < local_2c.cx) {
          FUN_664bb2c0(local_3c);
          uVar1 = param_2;
          do {
            uVar1 = uVar1 - 1;
            if ((int)uVar1 < 1) goto LAB_664b05a0;
            piVar3 = FUN_664bbab0(this_00,local_58,uVar1);
            FUN_664bb570(local_3c,piVar3);
            FUN_664bb3e0(local_58);
            piVar3 = FUN_664bb6c0(local_64,local_3c,&DAT_664e3384);
            FUN_664bb570(local_3c,piVar3);
            FUN_664bb3e0(local_64);
            GetTextExtentPointA(hdc_00,local_3c[0],*(int *)(local_3c[0] + -8),&local_2c);
          } while (local_14.right - local_14.left < local_2c.cx);
          DrawTextA(hdc_00,local_3c[0],*(int *)(local_3c[0] + -8),&local_14,0x24);
LAB_664b05a0:
          FUN_664bb3e0((int *)local_3c);
        }
        lpString = (LPCSTR)*this_00;
        param_2 = param_2 + 1;
      } while ((int)param_2 <= *(int *)(lpString + -8));
    }
  }
  else {
    DrawTextA(hdc_00,(LPCSTR)*this_00,*(int *)((LPCSTR)*this_00 + -8),&local_14,0x25);
  }
  SetBkMode(hdc_00,local_4c);
  BitBlt(hdc,0,0,local_14.right,local_14.bottom,hdc_00,0,0,0xcc0020);
  SelectObject(hdc_00,local_48);
  SelectObject(hdc_00,local_44);
  SelectObject(hdc_00,local_40);
  DeleteObject(h);
  DeleteObject(local_30);
  DeleteDC(hdc_00);
  EndPaint(param_1,&local_a4);
  return 0;
}


