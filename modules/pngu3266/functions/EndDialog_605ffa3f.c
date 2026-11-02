/* Module: pngu3266.dll
   Function: EndDialog
   Address: 605ffa3f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNPropertySheet::EndDialog(unsigned long) */

void __thiscall CPNPropertySheet::EndDialog(CPNPropertySheet *this,ulong param_1)

{
  HWND hWnd;
  
                    /* 0xfa3f  1041  ?EndDialog@CPNPropertySheet@@UAEXK@Z */
  hWnd = *(HWND *)(this + 0xc);
  if (hWnd != (HWND)0x0) {
    if (*(int *)(this + 200) == 0) {
      DestroyWindow(hWnd);
    }
    else {
      PostMessageA(hWnd,0x471,param_1,0);
    }
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x110));
    *(undefined4 *)(this + 0x110) = 0;
  }
  if (*(int *)(this + 0xc4) != 0) {
    CPNDialog::RemoveSingleInstanceDialog((CPNDialog *)this);
  }
  return;
}


