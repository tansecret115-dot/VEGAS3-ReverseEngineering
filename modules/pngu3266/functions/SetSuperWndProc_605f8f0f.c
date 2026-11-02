/* Module: pngu3266.dll
   Function: SetSuperWndProc
   Address: 605f8f0f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long (__stdcall*__thiscall CPNWindow::SetSuperWndProc(long (__stdcall*)(struct HWND__
   *,unsigned int,unsigned int,long)))(struct HWND__ *,unsigned int,unsigned int,long) */

_func_long_HWND___ptr_uint_uint_long * __thiscall
CPNWindow::SetSuperWndProc(CPNWindow *this,_func_long_HWND___ptr_uint_uint_long *param_1)

{
  _func_long_HWND___ptr_uint_uint_long *p_Var1;
  
                    /* 0x8f0f  2015  ?SetSuperWndProc@CPNWindow@@QAEP6GJPAUHWND__@@IIJ@ZP6GJ0IIJ@Z@Z
                        */
  p_Var1 = *(_func_long_HWND___ptr_uint_uint_long **)(this + 0x10);
  *(_func_long_HWND___ptr_uint_uint_long **)(this + 0x10) = param_1;
  return p_Var1;
}


