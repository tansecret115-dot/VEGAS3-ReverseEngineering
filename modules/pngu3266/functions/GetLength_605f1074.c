/* Module: pngu3266.dll
   Function: GetLength
   Address: 605f1074
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNString::GetLength(void)const  */

int __thiscall CPNString::GetLength(CPNString *this)

{
                    /* 0x1074  1240  ?GetLength@CPNString@@QBEHXZ */
  return *(int *)(*(int *)this + -8);
}


