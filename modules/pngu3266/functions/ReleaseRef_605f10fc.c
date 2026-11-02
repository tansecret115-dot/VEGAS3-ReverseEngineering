/* Module: pngu3266.dll
   Function: ReleaseRef
   Address: 605f10fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNObject::ReleaseRef(void) */

long __thiscall CPNObject::ReleaseRef(CPNObject *this)

{
                    /* 0x10fc  1748  ?ReleaseRef@CPNObject@@QAEJXZ */
  *(int *)(this + 4) = *(int *)(this + 4) + -1;
  return *(long *)(this + 4);
}


