/* Module: pngu3266.dll
   Function: SetDefaultButtonId
   Address: 605fbfc1
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNDialog::SetDefaultButtonId(unsigned long) */

void __thiscall CPNDialog::SetDefaultButtonId(CPNDialog *this,ulong param_1)

{
  ulong nIDDlgItem;
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
                    /* 0xbfc1  1888  ?SetDefaultButtonId@CPNDialog@@UAEXK@Z */
  nIDDlgItem = (**(code **)(*(int *)this + 0x144))();
  if (nIDDlgItem != param_1) {
    SendMessageA(*(HWND *)(this + 0xc),0x401,param_1,0);
    lParam = 1;
    wParam = 0;
    Msg = 0xf4;
    hWnd = GetDlgItem(*(HWND *)(this + 0xc),nIDDlgItem);
    SendMessageA(hWnd,Msg,wParam,lParam);
  }
  return;
}


