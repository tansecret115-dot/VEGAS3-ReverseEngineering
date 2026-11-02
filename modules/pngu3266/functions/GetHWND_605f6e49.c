/* Module: pngu3266.dll
   Function: GetHWND
   Address: 605f6e49
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: struct HWND__ * __thiscall CPNWindow::GetHWND(void)const  */

HWND__ * __thiscall CPNWindow::GetHWND(CPNWindow *this)

{
                    /* 0x6e49  1206  ?GetHWND@CPNWindow@@QBEPAUHWND__@@XZ */
  if (this != (CPNWindow *)0x0) {
    return *(HWND__ **)(this + 0xc);
  }
  return (HWND__ *)0x0;
}


