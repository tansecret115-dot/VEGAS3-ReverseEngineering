/* Module: pngu3266.dll
   Function: Blue
   Address: 605f1628
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned char __thiscall CPNColor::Blue(void)const  */

uchar __thiscall CPNColor::Blue(CPNColor *this)

{
                    /* 0x1628  834  ?Blue@CPNColor@@QBEEXZ */
  return (uchar)this[0x1d];
}


