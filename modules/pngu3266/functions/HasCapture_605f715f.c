/* Module: pngu3266.dll
   Function: HasCapture
   Address: 605f715f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNWindow::HasCapture(void)const  */

int __thiscall CPNWindow::HasCapture(CPNWindow *this)

{
                    /* 0x715f  1447  ?HasCapture@CPNWindow@@UBEHXZ */
  return *(int *)(this + 0x40);
}


