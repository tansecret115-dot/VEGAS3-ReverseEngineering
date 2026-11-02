/* Module: pngu3266.dll
   Function: Height
   Address: 605f137d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNxRect::Height(void)const  */

long __thiscall CPNxRect::Height(CPNxRect *this)

{
                    /* 0x137d  1453  ?Height@CPNxRect@@QBEJXZ */
  return *(int *)(this + 0xc) - *(int *)(this + 4);
}


