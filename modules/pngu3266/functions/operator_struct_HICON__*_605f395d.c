/* Module: pngu3266.dll
   Function: operator_struct_HICON__*
   Address: 605f395d
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNCursor::operator struct HICON__ *(void) */

HICON__ * __thiscall CPNCursor::operator_struct_HICON___(CPNCursor *this)

{
                    /* 0x395d  583  ??BCPNCursor@@QAEPAUHICON__@@XZ
                       0x395d  1156  ?GetCount@CPNMapLongToObj@@QBEHXZ
                       0x395d  1209  ?GetHashTableSize@CPNMapPtrToPtr@@QBEKXZ
                       0x395d  1215  ?GetId@XPNMenu@@QBEKXZ
                       0x395d  1294  ?GetPen@XPNDC@@QAEPAVCPNPen@@XZ
                       0x395d  1316  ?GetResourceUsage@CPNGraphicResource@@QAEJXZ
                       0x395d  1373  ?GetStyle@XPNWindow@@QBEKXZ
                       0x395d  1404  ?GetType@CPNEvent@@QBEKXZ */
  return *(HICON__ **)(this + 8);
}


