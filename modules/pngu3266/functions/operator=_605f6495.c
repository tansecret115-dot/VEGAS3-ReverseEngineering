/* Module: pngu3266.dll
   Function: operator=
   Address: 605f6495
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNClientDC & __thiscall CPNClientDC::operator=(class CPNClientDC &) */

CPNClientDC * __thiscall CPNClientDC::operator=(CPNClientDC *this,CPNClientDC *param_1)

{
                    /* 0x6495  441  ??4CPNClientDC@@QAEAAV0@AAV0@@Z
                       0x6495  503  ??4CPNWindowDC@@QAEAAV0@AAV0@@Z */
  CPNDC::operator=((CPNDC *)this,(CPNDC *)param_1);
  *(undefined4 *)(this + 0x1df) = *(undefined4 *)(param_1 + 0x1df);
  return this;
}


