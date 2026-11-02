/* Module: pngu3266.dll
   Function: IsMenuShown
   Address: 605f3c6e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNFrame::IsMenuShown(void)const  */

int __thiscall CPNFrame::IsMenuShown(CPNFrame *this)

{
                    /* 0x3c6e  1511  ?IsMenuShown@CPNFrame@@UBEHXZ */
  return *(int *)(this + 0xc4);
}


