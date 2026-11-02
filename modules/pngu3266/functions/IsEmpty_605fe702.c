/* Module: pngu3266.dll
   Function: IsEmpty
   Address: 605fe702
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNPtrArray::IsEmpty(void)const  */

int __thiscall CPNPtrArray::IsEmpty(CPNPtrArray *this)

{
                    /* 0xe702  1499  ?IsEmpty@CPNPtrArray@@QBEHXZ */
  return (uint)(*(int *)(this + 4) == 0);
}


