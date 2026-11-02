/* Module: pngu3266.dll
   Function: CPNDC
   Address: 605fa93f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDC::CPNDC(void * &) */

CPNDC * __thiscall CPNDC::CPNDC(CPNDC *this,void **param_1)

{
                    /* 0xa93f  51  ??0CPNDC@@QAE@AAPAX@Z */
  XPNDC::XPNDC((XPNDC *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x1d3) = 0;
  *(undefined4 *)(this + 0x1d7) = 0;
  *(undefined4 *)(this + 0x1db) = 0;
  *(undefined4 *)(this + 0x1c3) = 0;
  *(undefined4 *)(this + 0x1bf) = 0;
  *(undefined4 *)(this + 0x1bb) = 0;
  *(undefined4 *)(this + 0x1b7) = 0;
  *(undefined4 *)(this + 0x1c7) = 0;
  *(undefined4 *)(this + 0x1cb) = 0;
  *(void **)(this + 0x1cf) = *param_1;
  XPNDC::SetupDefaultTools((XPNDC *)this);
  return this;
}


