/* Module: pngu3266.dll
   Function: CPNScreenDC
   Address: 605fe47f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNScreenDC::CPNScreenDC(void) */

CPNScreenDC * __thiscall CPNScreenDC::CPNScreenDC(CPNScreenDC *this)

{
  HDC pHVar1;
  
                    /* 0xe47f  132  ??0CPNScreenDC@@QAE@XZ */
  CPNDC::CPNDC((CPNDC *)this);
  *(undefined ***)this = &_vftable_;
  pHVar1 = CreateDCA(s_DISPLAY_60649188,(LPCSTR)0x0,(LPCSTR)0x0,(DEVMODEA *)0x0);
  *(HDC *)(this + 0x1cf) = pHVar1;
  XPNDC::SetupDefaultTools((XPNDC *)this);
  return this;
}


