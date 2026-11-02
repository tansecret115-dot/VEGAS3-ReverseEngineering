/* Module: pngu3266.dll
   Function: CPNDC
   Address: 605fa9ee
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDC::CPNDC(struct HDC__ *) */

CPNDC * __thiscall CPNDC::CPNDC(CPNDC *this,HDC__ *param_1)

{
                    /* 0xa9ee  53  ??0CPNDC@@QAE@PAUHDC__@@@Z */
  XPNDC::XPNDC((XPNDC *)this);
  *(undefined4 *)(this + 0x1d3) = 0;
  *(undefined4 *)(this + 0x1d7) = 0;
  *(undefined4 *)(this + 0x1db) = 0;
  *(undefined4 *)(this + 0x1c3) = 0;
  *(undefined4 *)(this + 0x1bf) = 0;
  *(undefined4 *)(this + 0x1bb) = 0;
  *(undefined4 *)(this + 0x1b7) = 0;
  *(undefined4 *)(this + 0x1c7) = 0;
  *(undefined4 *)(this + 0x1cb) = 0;
  *(undefined ***)this = &_vftable_;
  *(HDC__ **)(this + 0x1cf) = param_1;
  XPNDC::SetupDefaultTools((XPNDC *)this);
  return this;
}


