/* Module: pngu3266.dll
   Function: operator_struct_HBRUSH__*
   Address: 605f1a8a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNBrush::operator struct HBRUSH__ *(void) */

HBRUSH__ * __thiscall CPNBrush::operator_struct_HBRUSH___(CPNBrush *this)

{
                    /* 0x1a8a  581  ??BCPNBrush@@QAEPAUHBRUSH__@@XZ
                       0x1a8a  1217  ?GetImageData@CPNBitmapImage@@UAEPAEXZ */
  return *(HBRUSH__ **)(this + 0x2f);
}


