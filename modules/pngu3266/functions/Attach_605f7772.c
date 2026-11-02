/* Module: pngu3266.dll
   Function: Attach
   Address: 605f7772
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::Attach(struct HWND__ *) */

void __thiscall CPNWindow::Attach(CPNWindow *this,HWND__ *param_1)

{
  void *this_00;
  
                    /* 0x7772  815  ?Attach@CPNWindow@@QAEXPAUHWND__@@@Z */
  this_00 = (void *)PNGuiGetMapHandle();
  FUN_60619db0(this_00,(uint)param_1,this);
  *(HWND__ **)(this + 0xc) = param_1;
  return;
}


