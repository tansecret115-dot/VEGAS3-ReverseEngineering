/* Module: pngu3266.dll
   Function: GetPNxWindowID
   Address: 605f6e54
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void * __thiscall CPNWindow::GetPNxWindowID(void)const  */

void * __thiscall CPNWindow::GetPNxWindowID(CPNWindow *this)

{
                    /* 0x6e54  1287  ?GetPNxWindowID@CPNWindow@@UBEPAXXZ */
  return *(void **)(this + 0xc);
}


