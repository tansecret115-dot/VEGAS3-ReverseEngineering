/* Module: pngu3266.dll
   Function: _PNGuiFilterHook@12
   Address: 605f6241
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT _PNGuiFilterHook_12(int param_1,HWND__ *param_2,LPARAM param_3)

{
  CPNWindow *this;
  _func_long_HWND___ptr_uint_uint_long **pp_Var1;
  code *pcVar2;
  _func_long_HWND___ptr_uint_uint_long *p_Var3;
  LRESULT LVar4;
  
                    /* 0x6241  2221  _PNGuiFilterHook@12 */
  this = DAT_60649970;
  if ((param_1 == 3) && (DAT_60649970 != (CPNWindow *)0x0)) {
    CPNWindow::Attach(DAT_60649970,param_2);
    pp_Var1 = CPNWindow::GetSuperWndProcAddress(this);
    pcVar2 = (code *)GetWindowLongA(param_2,-4);
    if (pcVar2 == _PNGuiWndProc_16) {
      return 0;
    }
    p_Var3 = (_func_long_HWND___ptr_uint_uint_long *)SetWindowLongA(param_2,-4,0x605f618d);
    if (p_Var3 != _PNGuiWndProc_16) {
      *pp_Var1 = p_Var3;
    }
    DAT_60649970 = (CPNWindow *)0x0;
    param_1 = 3;
  }
  LVar4 = CallNextHookEx(DAT_6064996c,param_1,(WPARAM)param_2,param_3);
  return LVar4;
}


