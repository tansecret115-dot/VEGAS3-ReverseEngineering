/* Module: pngu3266.dll
   Function: Red
   Address: 605f1620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned char __thiscall CPNColor::Red(void)const  */

uchar __thiscall CPNColor::Red(CPNColor *this)

{
                    /* 0x1620  1739  ?Red@CPNColor@@QBEEXZ */
  return (uchar)this[0x1c];
}


