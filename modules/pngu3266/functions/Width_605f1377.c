/* Module: pngu3266.dll
   Function: Width
   Address: 605f1377
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNxRect::Width(void)const  */

long __thiscall CPNxRect::Width(CPNxRect *this)

{
                    /* 0x1377  2124  ?Width@CPNxRect@@QBEJXZ */
  return *(int *)(this + 8) - *(int *)this;
}


