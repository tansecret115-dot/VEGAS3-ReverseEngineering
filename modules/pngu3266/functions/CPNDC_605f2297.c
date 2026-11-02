/* Module: pngu3266.dll
   Function: CPNDC
   Address: 605f2297
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDC::CPNDC(class CPNDC const &) */

CPNDC * __thiscall CPNDC::CPNDC(CPNDC *this,CPNDC *param_1)

{
                    /* 0x2297  52  ??0CPNDC@@QAE@ABV0@@Z */
  XPNDC::XPNDC((XPNDC *)this,(XPNDC *)param_1);
  *(undefined4 *)(this + 0x1b7) = *(undefined4 *)(param_1 + 0x1b7);
  *(undefined4 *)(this + 0x1bb) = *(undefined4 *)(param_1 + 0x1bb);
  *(undefined4 *)(this + 0x1bf) = *(undefined4 *)(param_1 + 0x1bf);
  *(undefined4 *)(this + 0x1c3) = *(undefined4 *)(param_1 + 0x1c3);
  *(undefined4 *)(this + 0x1c7) = *(undefined4 *)(param_1 + 0x1c7);
  *(undefined4 *)(this + 0x1cb) = *(undefined4 *)(param_1 + 0x1cb);
  *(undefined4 *)(this + 0x1cf) = *(undefined4 *)(param_1 + 0x1cf);
  *(undefined4 *)(this + 0x1d3) = *(undefined4 *)(param_1 + 0x1d3);
  *(undefined4 *)(this + 0x1d7) = *(undefined4 *)(param_1 + 0x1d7);
  *(undefined4 *)(this + 0x1db) = *(undefined4 *)(param_1 + 0x1db);
  *(undefined ***)this = &_vftable_;
  return this;
}


