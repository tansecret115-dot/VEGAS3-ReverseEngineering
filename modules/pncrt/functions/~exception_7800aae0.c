/* Module: pncrt.dll
   Function: ~exception
   Address: 7800aae0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall exception::~exception(void) */

void __thiscall exception::~exception(exception *this)

{
                    /* 0xaae0  13  ??1exception@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 4));
  }
  return;
}


