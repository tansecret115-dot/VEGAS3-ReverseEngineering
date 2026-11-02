/* Module: pngu3266.dll
   Function: SetAt
   Address: 605fe72a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNPtrArray::SetAt(int,void *) */

void __thiscall CPNPtrArray::SetAt(CPNPtrArray *this,int param_1,void *param_2)

{
                    /* 0xe72a  1821  ?SetAt@CPNPtrArray@@QAEXHPAX@Z */
  *(void **)(*(int *)this + param_1 * 4) = param_2;
  return;
}


