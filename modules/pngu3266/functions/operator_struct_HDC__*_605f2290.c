/* Module: pngu3266.dll
   Function: operator_struct_HDC__*
   Address: 605f2290
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNDC::operator struct HDC__ *(void) */

HDC__ * __thiscall CPNDC::operator_struct_HDC___(CPNDC *this)

{
                    /* 0x2290  584  ??BCPNDC@@QAEPAUHDC__@@XZ */
  return *(HDC__ **)(this + 0x1cf);
}


