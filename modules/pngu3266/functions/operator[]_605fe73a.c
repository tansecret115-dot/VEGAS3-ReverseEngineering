/* Module: pngu3266.dll
   Function: operator[]
   Address: 605fe73a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void * & __thiscall CPNPtrArray::operator[](int) */

void ** __thiscall CPNPtrArray::operator[](CPNPtrArray *this,int param_1)

{
                    /* 0xe73a  577  ??ACPNPtrArray@@QAEAAPAXH@Z
                       0xe73a  1025  ?ElementAt@CPNPtrArray@@QAEAAPAXH@Z */
  return (void **)(*(int *)this + param_1 * 4);
}


