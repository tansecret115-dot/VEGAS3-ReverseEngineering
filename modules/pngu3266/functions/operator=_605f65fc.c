/* Module: pngu3266.dll
   Function: operator=
   Address: 605f65fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNMemoryDC & __thiscall CPNMemoryDC::operator=(class CPNMemoryDC &) */

CPNMemoryDC * __thiscall CPNMemoryDC::operator=(CPNMemoryDC *this,CPNMemoryDC *param_1)

{
                    /* 0x65fc  470  ??4CPNMemoryDC@@QAEAAV0@AAV0@@Z */
  CPNDC::operator=((CPNDC *)this,(CPNDC *)param_1);
  *(undefined4 *)(this + 0x1df) = *(undefined4 *)(param_1 + 0x1df);
  *(undefined4 *)(this + 0x1e3) = *(undefined4 *)(param_1 + 0x1e3);
  *(undefined4 *)(this + 0x1e7) = *(undefined4 *)(param_1 + 0x1e7);
  *(undefined4 *)(this + 0x1eb) = *(undefined4 *)(param_1 + 0x1eb);
  *(undefined4 *)(this + 0x1ef) = *(undefined4 *)(param_1 + 0x1ef);
  return this;
}


