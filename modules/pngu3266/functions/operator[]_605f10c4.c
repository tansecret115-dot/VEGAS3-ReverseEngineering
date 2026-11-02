/* Module: pngu3266.dll
   Function: operator[]
   Address: 605f10c4
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: char __thiscall CPNString::operator[](int)const  */

char __thiscall CPNString::operator[](CPNString *this,int param_1)

{
                    /* 0x10c4  579  ??ACPNString@@QBEDH@Z
                       0x10c4  1090  ?GetAt@CPNString@@QBEDH@Z */
  return *(char *)(*(int *)this + param_1);
}


