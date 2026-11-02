/* Module: pngu3266.dll
   Function: operator_struct_HPEN__*
   Address: 605f1810
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNPen::operator struct HPEN__ *(void) */

HPEN__ * __thiscall CPNPen::operator_struct_HPEN___(CPNPen *this)

{
                    /* 0x1810  590  ??BCPNPen@@QAEPAUHPEN__@@XZ */
  return *(HPEN__ **)(this + 0x5f);
}


