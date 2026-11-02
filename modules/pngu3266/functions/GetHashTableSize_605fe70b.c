/* Module: pngu3266.dll
   Function: GetHashTableSize
   Address: 605fe70b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: unsigned long __thiscall CPNMapLongToObj::GetHashTableSize(void)const  */

ulong __thiscall CPNMapLongToObj::GetHashTableSize(CPNMapLongToObj *this)

{
                    /* 0xe70b  1208  ?GetHashTableSize@CPNMapLongToObj@@QBEKXZ
                       0xe70b  1353  ?GetSize@CPNPtrArray@@QBEHXZ */
  return *(ulong *)(this + 4);
}


