/* Module: pngu3266.dll
   Function: GetAllocLength
   Address: 605f107a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNString::GetAllocLength(void)const  */

int __thiscall CPNString::GetAllocLength(CPNString *this)

{
                    /* 0x107a  1084  ?GetAllocLength@CPNString@@QBEHXZ */
  return *(int *)(*(int *)this + -4);
}


