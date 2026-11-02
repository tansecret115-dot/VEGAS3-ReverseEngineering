/* Module: pngu3266.dll
   Function: ScreenToClient
   Address: 605f719f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::ScreenToClient(class CPNxPoint &)const  */

void __thiscall CPNWindow::ScreenToClient(CPNWindow *this,CPNxPoint *param_1)

{
  HWND__ *hWnd;
  tagPOINT local_c;
  
                    /* 0x719f  1796  ?ScreenToClient@CPNWindow@@UBEXAAVCPNxPoint@@@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    local_c.x = (LONG)this;
    local_c.y = (LONG)this;
    hWnd = GetHWND(this);
    local_c.x = *(LONG *)param_1;
    local_c.y = *(LONG *)(param_1 + 4);
    ::ScreenToClient(hWnd,&local_c);
    *(LONG *)param_1 = local_c.x;
    *(LONG *)(param_1 + 4) = local_c.y;
  }
  return;
}


