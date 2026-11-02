/* Module: pngu3266.dll
   Function: SetRectEmpty
   Address: 605f119c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNxRect::SetRectEmpty(void) */

void __thiscall CPNxRect::SetRectEmpty(CPNxRect *this)

{
                    /* 0x119c  1975  ?SetRectEmpty@CPNxRect@@QAEXXZ */
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}


