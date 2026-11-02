/* Module: pngu3266.dll
   Function: operator[]
   Address: 605fe71e
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void * __thiscall CPNPtrArray::operator[](int)const  */

void * __thiscall CPNPtrArray::operator[](CPNPtrArray *this,int param_1)

{
                    /* 0xe71e  578  ??ACPNPtrArray@@QBEPAXH@Z
                       0xe71e  1089  ?GetAt@CPNPtrArray@@QBEPAXH@Z */
  return *(void **)(*(int *)this + param_1 * 4);
}


