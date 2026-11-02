/* Module: pngu3266.dll
   Function: GetTitle
   Address: 605f76e7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::GetTitle(char *,long)const  */

void __thiscall CPNWindow::GetTitle(CPNWindow *this,char *param_1,long param_2)

{
                    /* 0x76e7  1395  ?GetTitle@CPNWindow@@UBEXPADJ@Z */
  if (((byte)this[0xb] & 0x80) == 0) {
    GetWindowTextA(*(HWND *)(this + 0xc),param_1,param_2);
  }
  return;
}


