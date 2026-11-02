/* Module: pngu3266.dll
   Function: GetStartPosition
   Address: 605f2925
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void * __thiscall CPNMapLongToObj::GetStartPosition(void)const  */

void * __thiscall CPNMapLongToObj::GetStartPosition(CPNMapLongToObj *this)

{
                    /* 0x2925  1363  ?GetStartPosition@CPNMapLongToObj@@QBEPAXXZ */
  return (void *)-(uint)(*(int *)(this + 8) != 0);
}


