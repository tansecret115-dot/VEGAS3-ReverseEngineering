/* Module: pngu3266.dll
   Function: ValidateRect
   Address: 605f70a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::ValidateRect(class CPNxRect const *) */

void __thiscall CPNWindow::ValidateRect(CPNWindow *this,CPNxRect *param_1)

{
  RECT *lpRect;
  RECT local_24;
  LONG local_14;
  LONG local_10;
  LONG local_c;
  LONG local_8;
  
                    /* 0x70a0  2123  ?ValidateRect@CPNWindow@@UAEXPBVCPNxRect@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    lpRect = (RECT *)0x0;
    if (param_1 != (CPNxRect *)0x0) {
      local_24.left = *(LONG *)param_1;
      local_24.top = *(LONG *)(param_1 + 4);
      local_24.right = *(LONG *)(param_1 + 8);
      local_24.bottom = *(LONG *)(param_1 + 0xc);
      lpRect = &local_24;
      local_14 = local_24.left;
      local_10 = local_24.top;
      local_c = local_24.right;
      local_8 = local_24.bottom;
    }
    ::ValidateRect(*(HWND *)(this + 0xc),lpRect);
  }
  return;
}


