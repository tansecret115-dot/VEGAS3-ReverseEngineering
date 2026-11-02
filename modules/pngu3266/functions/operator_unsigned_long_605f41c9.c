/* Module: pngu3266.dll
   Function: operator_unsigned_long
   Address: 605f41c9
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNColor::operator unsigned long(void) */

ulong __thiscall CPNColor::operator_unsigned_long(CPNColor *this)

{
                    /* 0x41c9  582  ??BCPNColor@@QAEKXZ */
  return *(ulong *)(this + 8);
}


