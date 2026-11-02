/* Module: pngu3266.dll
   Function: operator_struct_HICON__*
   Address: 605f3dc8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNIcon::operator struct HICON__ *(void) */

HICON__ * __thiscall CPNIcon::operator_struct_HICON___(CPNIcon *this)

{
                    /* 0x3dc8  587  ??BCPNIcon@@QAEPAUHICON__@@XZ */
  return *(HICON__ **)(this + 0x2a);
}


