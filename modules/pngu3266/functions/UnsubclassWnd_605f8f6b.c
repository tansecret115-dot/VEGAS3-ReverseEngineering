/* Module: pngu3266.dll
   Function: UnsubclassWnd
   Address: 605f8f6b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: struct HWND__ * __thiscall CPNWindow::UnsubclassWnd(void) */

HWND__ * __thiscall CPNWindow::UnsubclassWnd(CPNWindow *this)

{
  _func_long_HWND___ptr_uint_uint_long *dwNewLong;
  HWND__ *hWnd;
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  
                    /* 0x8f6b  2104  ?UnsubclassWnd@CPNWindow@@QAEPAUHWND__@@XZ */
  hWnd = GetHWND(this);
  pp_Var1 = GetSuperWndProcAddress(this);
  dwNewLong = *pp_Var1;
  (**(code **)(*(int *)this + 200))();
  SetWindowLongA(hWnd,-4,(LONG)dwNewLong);
  return hWnd;
}


