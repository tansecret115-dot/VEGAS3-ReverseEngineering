/* Module: pngu3266.dll
   Function: GetShowState
   Address: 605f93d4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual long __thiscall CPNWindow::GetShowState(void)const  */

long __thiscall CPNWindow::GetShowState(CPNWindow *this)

{
  BOOL BVar1;
  
                    /* 0x93d4  1349  ?GetShowState@CPNWindow@@UBEJXZ */
  BVar1 = IsIconic(*(HWND *)(this + 0xc));
  if (BVar1 != 0) {
    return 2;
  }
  BVar1 = IsZoomed(*(HWND *)(this + 0xc));
  return (-(uint)(BVar1 != 0) & 0xfffffffe) + 3;
}


