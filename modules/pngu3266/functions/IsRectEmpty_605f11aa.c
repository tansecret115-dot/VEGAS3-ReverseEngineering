/* Module: pngu3266.dll
   Function: IsRectEmpty
   Address: 605f11aa
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNxRect::IsRectEmpty(void) */

int __thiscall CPNxRect::IsRectEmpty(CPNxRect *this)

{
                    /* 0x11aa  1517  ?IsRectEmpty@CPNxRect@@QAEHXZ */
  if ((*(int *)this < *(int *)(this + 8)) && (*(int *)(this + 4) < *(int *)(this + 0xc))) {
    return 0;
  }
  return 1;
}


