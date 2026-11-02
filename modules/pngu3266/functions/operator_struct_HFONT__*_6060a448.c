/* Module: pngu3266.dll
   Function: operator_struct_HFONT__*
   Address: 6060a448
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNFont::operator struct HFONT__ *(void) */

HFONT__ * __thiscall CPNFont::operator_struct_HFONT___(CPNFont *this)

{
                    /* 0x1a448  585  ??BCPNFont@@QAEPAUHFONT__@@XZ
                       0x1a448  586  ??BCPNFont@@QAEPAXXZ
                       0x1a448  1274  ?GetMouseInLess@CPNScrollHelper@@QAEHXZ */
  return *(HFONT__ **)(this + 0x2c);
}


