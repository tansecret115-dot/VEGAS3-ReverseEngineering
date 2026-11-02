/* Module: pngu3266.dll
   Function: IsEmpty
   Address: 605f290a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: int __thiscall CPNMapLongToObj::IsEmpty(void)const  */

int __thiscall CPNMapLongToObj::IsEmpty(CPNMapLongToObj *this)

{
                    /* 0x290a  1497  ?IsEmpty@CPNMapLongToObj@@QBEHXZ */
  return (uint)(*(int *)(this + 8) == 0);
}


