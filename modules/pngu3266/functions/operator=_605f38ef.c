/* Module: pngu3266.dll
   Function: operator=
   Address: 605f38ef
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNBtnObserver & __thiscall CPNBtnObserver::operator=(class CPNBtnObserver const &)
    */

CPNBtnObserver * __thiscall CPNBtnObserver::operator=(CPNBtnObserver *this,CPNBtnObserver *param_1)

{
                    /* 0x38ef  437  ??4CPNBtnObserver@@QAEAAV0@ABV0@@Z
                       0x38ef  534  ??4XPNMenu@@QAEAAV0@ABV0@@Z */
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  return this;
}


