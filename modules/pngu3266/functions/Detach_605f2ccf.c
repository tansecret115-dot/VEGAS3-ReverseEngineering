/* Module: pngu3266.dll
   Function: Detach
   Address: 605f2ccf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNCursor::Detach(void) */

void __thiscall CPNCursor::Detach(CPNCursor *this)

{
                    /* 0x2ccf  948  ?Detach@CPNCursor@@QAEXXZ */
  *(undefined4 *)(this + 8) = 0;
  return;
}


