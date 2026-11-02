/* Module: pngu3266.dll
   Function: AddRef
   Address: 605f10f5
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __thiscall CPNObject::AddRef(void) */

long __thiscall CPNObject::AddRef(CPNObject *this)

{
                    /* 0x10f5  767  ?AddRef@CPNObject@@QAEJXZ */
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return *(long *)(this + 4);
}


