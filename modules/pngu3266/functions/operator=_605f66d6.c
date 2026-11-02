/* Module: pngu3266.dll
   Function: operator=
   Address: 605f66d6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNScreenDC & __thiscall CPNScreenDC::operator=(class CPNScreenDC &) */

CPNScreenDC * __thiscall CPNScreenDC::operator=(CPNScreenDC *this,CPNScreenDC *param_1)

{
                    /* 0x66d6  488  ??4CPNScreenDC@@QAEAAV0@AAV0@@Z
                       0x66d6  515  ??4XPNClientDC@@QAEAAV0@AAV0@@Z
                       0x66d6  533  ??4XPNMemDC@@QAEAAV0@AAV0@@Z
                       0x66d6  539  ??4XPNPaintDC@@QAEAAV0@AAV0@@Z
                       0x66d6  546  ??4XPNScreenDC@@QAEAAV0@AAV0@@Z
                       0x66d6  559  ??4XPNWindowDC@@QAEAAV0@AAV0@@Z */
  CPNDC::operator=((CPNDC *)this,(CPNDC *)param_1);
  return this;
}


