/* Module: pngu3266.dll
   Function: operator=
   Address: 60601ab8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: class CPNCheckButton & __thiscall CPNCheckButton::operator=(class CPNCheckButton const &)
    */

CPNCheckButton * __thiscall CPNCheckButton::operator=(CPNCheckButton *this,CPNCheckButton *param_1)

{
                    /* 0x11ab8  439  ??4CPNCheckButton@@QAEAAV0@ABV0@@Z
                       0x11ab8  446  ??4CPNControl@@QAEAAV0@ABV0@@Z
                       0x11ab8  460  ??4CPNGroupBox@@QAEAAV0@ABV0@@Z
                       0x11ab8  467  ??4CPNListBox@@QAEAAV0@ABV0@@Z
                       0x11ab8  480  ??4CPNProgress@@QAEAAV0@ABV0@@Z
                       0x11ab8  484  ??4CPNRadioBtn@@QAEAAV0@ABV0@@Z
                       0x11ab8  489  ??4CPNScrollBar@@QAEAAV0@ABV0@@Z
                       0x11ab8  496  ??4CPNText@@QAEAAV0@ABV0@@Z
                       0x11ab8  514  ??4XPNCheckButton@@QAEAAV0@ABV0@@Z
                       0x11ab8  523  ??4XPNEdit@@QAEAAV0@ABV0@@Z
                       0x11ab8  527  ??4XPNGroupBox@@QAEAAV0@ABV0@@Z
                       0x11ab8  532  ??4XPNListBox@@QAEAAV0@ABV0@@Z
                       0x11ab8  541  ??4XPNPopupList@@QAEAAV0@ABV0@@Z
                       0x11ab8  542  ??4XPNProgress@@QAEAAV0@ABV0@@Z
                       0x11ab8  547  ??4XPNScrollBar@@QAEAAV0@ABV0@@Z
                       0x11ab8  552  ??4XPNText@@QAEAAV0@ABV0@@Z
                       0x11ab8  567  ??4xPNRadioBtn@@QAEAAV0@ABV0@@Z */
  CPNWindow::operator=((CPNWindow *)this,(CPNWindow *)param_1);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  return this;
}


