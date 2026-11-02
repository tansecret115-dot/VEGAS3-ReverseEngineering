/* Module: pngu3266.dll
   Function: IsEmpty
   Address: 605f288c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNMapPtrToPtr::IsEmpty(void)const  */

int __thiscall CPNMapPtrToPtr::IsEmpty(CPNMapPtrToPtr *this)

{
                    /* 0x288c  1498  ?IsEmpty@CPNMapPtrToPtr@@QBEHXZ */
  return (uint)(*(int *)(this + 0xc) == 0);
}


