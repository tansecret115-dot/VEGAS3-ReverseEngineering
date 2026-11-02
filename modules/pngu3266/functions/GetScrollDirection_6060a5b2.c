/* Module: pngu3266.dll
   Function: GetScrollDirection
   Address: 6060a5b2
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNScrollHelper::GetScrollDirection(void)const  */

ulong __thiscall CPNScrollHelper::GetScrollDirection(CPNScrollHelper *this)

{
                    /* 0x1a5b2  1329  ?GetScrollDirection@CPNScrollHelper@@QBEKXZ */
  return *(ulong *)(this + 0x34);
}


