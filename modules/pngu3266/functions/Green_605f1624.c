/* Module: pngu3266.dll
   Function: Green
   Address: 605f1624
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned char __thiscall CPNColor::Green(void)const  */

uchar __thiscall CPNColor::Green(CPNColor *this)

{
                    /* 0x1624  1432  ?Green@CPNColor@@QBEEXZ */
  return (uchar)this[0x1e];
}


