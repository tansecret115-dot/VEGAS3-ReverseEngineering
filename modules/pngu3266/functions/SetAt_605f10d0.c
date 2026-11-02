/* Module: pngu3266.dll
   Function: SetAt
   Address: 605f10d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNString::SetAt(int,char) */

void __thiscall CPNString::SetAt(CPNString *this,int param_1,char param_2)

{
                    /* 0x10d0  1822  ?SetAt@CPNString@@QAEXHD@Z */
  *(char *)(param_1 + *(int *)this) = param_2;
  return;
}


