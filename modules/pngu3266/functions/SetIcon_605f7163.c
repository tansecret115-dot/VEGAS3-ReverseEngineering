/* Module: pngu3266.dll
   Function: SetIcon
   Address: 605f7163
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::SetIcon(class CPNIcon &,int) */

void __thiscall CPNWindow::SetIcon(CPNWindow *this,CPNIcon *param_1,int param_2)

{
                    /* 0x7163  1917  ?SetIcon@CPNWindow@@UAEXAAVCPNIcon@@H@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    SendMessageA(this,0x80,(uint)(param_2 == 0),*(long *)(param_1 + 0x2a));
    SetWindowPos(*(HWND *)(this + 0xc),(HWND)0x0,0,0,0,0,0x37);
  }
  return;
}


