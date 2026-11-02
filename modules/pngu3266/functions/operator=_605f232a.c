/* Module: pngu3266.dll
   Function: operator=
   Address: 605f232a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNDC & __thiscall CPNDC::operator=(class CPNDC &) */

CPNDC * __thiscall CPNDC::operator=(CPNDC *this,CPNDC *param_1)

{
                    /* 0x232a  451  ??4CPNDC@@QAEAAV0@AAV0@@Z */
  XPNDC::operator=((XPNDC *)this,(XPNDC *)param_1);
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
  return this;
}


