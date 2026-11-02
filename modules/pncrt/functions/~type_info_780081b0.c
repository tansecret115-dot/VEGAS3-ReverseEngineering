/* Module: pncrt.dll
   Function: ~type_info
   Address: 780081b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall type_info::~type_info(void) */

void __thiscall type_info::~type_info(type_info *this)

{
                    /* 0x81b0  14  ??1type_info@@UAE@XZ */
  *(undefined ***)this = &vftable;
  _lock(0x1b);
  if (*(void **)(this + 4) != (void *)0x0) {
    free(*(void **)(this + 4));
  }
  _unlock(0x1b);
  return;
}


