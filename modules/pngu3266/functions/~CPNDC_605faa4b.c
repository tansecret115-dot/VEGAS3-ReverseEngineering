/* Module: pngu3266.dll
   Function: ~CPNDC
   Address: 605faa4b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual __thiscall CPNDC::~CPNDC(void) */

void __thiscall CPNDC::~CPNDC(CPNDC *this)

{
                    /* 0xaa4b  325  ??1CPNDC@@UAE@XZ */
  *(undefined ***)this = &_vftable_;
  if (*(int *)(this + 0x1b3) == 0) {
    CleanupDefaultTools(this);
  }
  XPNDC::~XPNDC((XPNDC *)this);
  return;
}


