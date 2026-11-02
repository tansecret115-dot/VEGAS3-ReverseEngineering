/* Module: pngu3266.dll
   Function: GetUpperBound
   Address: 605fe70f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNPtrArray::GetUpperBound(void)const  */

int __thiscall CPNPtrArray::GetUpperBound(CPNPtrArray *this)

{
                    /* 0xe70f  1408  ?GetUpperBound@CPNPtrArray@@QBEHXZ */
  return *(int *)(this + 4) + -1;
}


