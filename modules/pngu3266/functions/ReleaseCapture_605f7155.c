/* Module: pngu3266.dll
   Function: ReleaseCapture
   Address: 605f7155
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::ReleaseCapture(void) */

void __thiscall CPNWindow::ReleaseCapture(CPNWindow *this)

{
                    /* 0x7155  1747  ?ReleaseCapture@CPNWindow@@UAEXXZ */
  *(undefined4 *)(this + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x605f7159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ::ReleaseCapture();
  return;
}


