/* Module: pngu3266.dll
   Function: GetSuperWndProcAddress
   Address: 605f78a7
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long (__stdcall** __thiscall CPNWindow::GetSuperWndProcAddress(void))(struct HWND__
   *,unsigned int,unsigned int,long) */

_func_long_HWND___ptr_uint_uint_long ** __thiscall
CPNWindow::GetSuperWndProcAddress(CPNWindow *this)

{
                    /* 0x78a7  1377  ?GetSuperWndProcAddress@CPNWindow@@QAEPAP6GJPAUHWND__@@IIJ@ZXZ
                        */
  return (_func_long_HWND___ptr_uint_uint_long **)(this + 0x10);
}


