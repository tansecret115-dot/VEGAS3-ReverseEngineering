/* Module: pngu3266.dll
   Function: IsEmpty
   Address: 605f1080
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNString::IsEmpty(void)const  */

int __thiscall CPNString::IsEmpty(CPNString *this)

{
                    /* 0x1080  1500  ?IsEmpty@CPNString@@QBEHXZ */
  return (uint)(*(int *)(*(int *)this + -8) == 0);
}


