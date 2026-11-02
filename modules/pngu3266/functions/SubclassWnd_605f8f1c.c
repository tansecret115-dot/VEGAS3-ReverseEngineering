/* Module: pngu3266.dll
   Function: SubclassWnd
   Address: 605f8f1c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::SubclassWnd(struct _PNxWindow *) */

int __thiscall CPNWindow::SubclassWnd(CPNWindow *this,_PNxWindow *param_1)

{
  HWND__ *hWnd;
  undefined *dwNewLong;
  _func_long_HWND___ptr_uint_uint_long *p_Var1;
  _func_long_HWND___ptr_uint_uint_long *p_Var2;
  int iVar3;
  
                    /* 0x8f1c  2083  ?SubclassWnd@CPNWindow@@UAEHPAU_PNxWindow@@@Z */
  hWnd = *(HWND__ **)param_1;
  Attach(this,hWnd);
  dwNewLong = PNGuiGetWndProc();
  p_Var1 = (_func_long_HWND___ptr_uint_uint_long *)SetWindowLongA(hWnd,-4,(LONG)dwNewLong);
  p_Var2 = (_func_long_HWND___ptr_uint_uint_long *)PNGuiGetWndProc();
  if (p_Var1 == p_Var2) {
    iVar3 = 0;
  }
  else {
    SetSuperWndProc(this,p_Var1);
    if (*(undefined4 **)(this + 0x44) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(this + 0x44))(1);
    }
    *(undefined4 *)(this + 0x44) = 0;
    iVar3 = 1;
  }
  return iVar3;
}


