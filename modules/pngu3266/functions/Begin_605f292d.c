/* Module: pngu3266.dll
   Function: Begin
   Address: 605f292d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMapLongToObj::Iterator __thiscall CPNMapLongToObj::Begin(void) */

void * __thiscall CPNMapLongToObj::Begin(CPNMapLongToObj *this)

{
  void *in_stack_00000004;
  
                    /* 0x292d  825  ?Begin@CPNMapLongToObj@@QAE?AVIterator@1@XZ */
  FUN_605f2946(in_stack_00000004,this,-(uint)(*(int *)(this + 8) != 0));
  return in_stack_00000004;
}


