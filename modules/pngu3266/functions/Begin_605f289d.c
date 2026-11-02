/* Module: pngu3266.dll
   Function: Begin
   Address: 605f289d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMapPtrToPtr::Iterator __thiscall CPNMapPtrToPtr::Begin(void) */

void * __thiscall CPNMapPtrToPtr::Begin(CPNMapPtrToPtr *this)

{
  void *in_stack_00000004;
  
                    /* 0x289d  826  ?Begin@CPNMapPtrToPtr@@QAE?AVIterator@1@XZ */
  FUN_605f28b6(in_stack_00000004,this,-(uint)(*(int *)(this + 0xc) != 0));
  return in_stack_00000004;
}


