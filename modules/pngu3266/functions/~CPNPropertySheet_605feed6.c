/* Module: pngu3266.dll
   Function: ~CPNPropertySheet
   Address: 605feed6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNPropertySheet::~CPNPropertySheet(void) */

void __thiscall CPNPropertySheet::~CPNPropertySheet(CPNPropertySheet *this)

{
                    /* 0xeed6  354  ??1CPNPropertySheet@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(HWND *)(this + 0xc) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x110));
    *(undefined4 *)(this + 0x110) = 0;
  }
  XPNPropertySheet::~XPNPropertySheet((XPNPropertySheet *)this);
  return;
}


