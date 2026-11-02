/* Module: pngu3266.dll
   Function: RepaintRect
   Address: 605f6f6c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::RepaintRect(class CPNxRect const *,int) */

void __thiscall CPNWindow::RepaintRect(CPNWindow *this,CPNxRect *param_1,int param_2)

{
  HRGN ho;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  RECT local_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  HWND__ *local_8;
  
                    /* 0x6f6c  1779  ?RepaintRect@CPNWindow@@UAEXPBVCPNxRect@@H@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    local_8 = *(HWND__ **)(this + 0xc);
    if (param_1 == (CPNxRect *)0x0) {
      param_1 = (CPNxRect *)0x0;
      goto LAB_605f707e;
    }
    local_40 = *(int *)param_1;
    local_3c = *(int *)(param_1 + 4);
    local_38 = *(int *)(param_1 + 8);
    local_34 = *(int *)(param_1 + 0xc);
  }
  else {
    if (param_1 == (CPNxRect *)0x0) {
      (**(code **)(*(int *)this + 0x3c))(&local_20);
    }
    else {
      local_20 = *(int *)param_1;
      local_1c = *(int *)(param_1 + 4);
      local_18 = *(int *)(param_1 + 8);
      local_14 = *(int *)(param_1 + 0xc);
    }
    local_8 = GetHWND(*(CPNWindow **)(this + 0x48));
    if (((byte)this[10] & 2) != 0) {
      (**(code **)(**(int **)(this + 0x48) + 0x50))(&local_10);
      local_30.left = local_20 + local_10;
      local_30.top = local_1c + local_c;
      local_30.bottom = local_14 + local_c;
      local_30.right = local_18 + local_10;
      local_20 = local_30.left;
      local_1c = local_30.top;
      local_18 = local_30.right;
      local_14 = local_30.bottom;
      ho = CreateRectRgnIndirect(&local_30);
      if (ho != (HRGN)0x0) {
        SendMessageA(*(CPNWindow **)(this + 0x48),0x85,(uint)ho,0);
        DeleteObject(ho);
        return;
      }
      goto LAB_605f707e;
    }
    local_40 = local_20 + *(int *)(this + 0x60);
    local_3c = local_1c + *(int *)(this + 100);
    local_38 = local_18 + *(int *)(this + 0x60);
    local_34 = local_14 + *(int *)(this + 100);
  }
  param_1 = (CPNxRect *)&local_30;
  local_30.left = local_40;
  local_30.top = local_3c;
  local_30.right = local_38;
  local_30.bottom = local_34;
LAB_605f707e:
  InvalidateRect(local_8,(RECT *)param_1,1);
  if (param_2 != 0) {
    UpdateWindow(local_8);
  }
  return;
}


