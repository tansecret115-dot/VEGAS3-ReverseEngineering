/* Module: pngu3266.dll
   Function: GetStartPosition
   Address: 605f2895
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void * __thiscall CPNMapPtrToPtr::GetStartPosition(void)const  */

void * __thiscall CPNMapPtrToPtr::GetStartPosition(CPNMapPtrToPtr *this)

{
                    /* 0x2895  1364  ?GetStartPosition@CPNMapPtrToPtr@@QBEPAXXZ */
  return (void *)-(uint)(*(int *)(this + 0xc) != 0);
}


