/* Module: pncrt.dll
   Function: exception
   Address: 7800a960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall exception::exception(void) */

void __thiscall exception::exception(exception *this)

{
                    /* 0xa960  9  ??0exception@@QAE@XZ */
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}


