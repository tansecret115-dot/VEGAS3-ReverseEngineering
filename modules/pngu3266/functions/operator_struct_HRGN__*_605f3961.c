/* Module: pngu3266.dll
   Function: operator_struct_HRGN__*
   Address: 605f3961
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CPNRegion::operator struct HRGN__ *(void) */

HRGN__ * __thiscall CPNRegion::operator_struct_HRGN___(CPNRegion *this)

{
                    /* 0x3961  591  ??BCPNRegion@@QAEPAUHRGN__@@XZ
                       0x3961  593  ??BCPNWindow@@QBEPAUHWND__@@XZ
                       0x3961  595  ??BCPNWindow@@UBEPAXXZ
                       0x3961  1105  ?GetBrush@XPNDC@@QAEPAVCPNBrush@@XZ
                       0x3961  1157  ?GetCount@CPNMapPtrToPtr@@QBEHXZ
                       0x3961  1279  ?GetNotification@CPNEvent@@QBEKXZ
                       0x3961  1300  ?GetPointSize@XPNFont@@QBEHXZ
                       0x3961  1315  ?GetRegionHandle@CPNRegion@@UAEPAXXZ
                       0x3961  1362  ?GetSpecificEventType@CPNEvent@@QBEKXZ
                       0x3961  1369  ?GetStyle@XPNBrush@@QAEJXZ
                       0x3961  1509  ?IsLoaded@XPNMenu@@QBEHXZ
                       0x3961  1589  ?Ok@CPNColor@@QAEHXZ */
  return *(HRGN__ **)(this + 0xc);
}


